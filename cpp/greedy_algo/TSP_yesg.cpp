#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <limits>
#include <set>

using namespace std;

double distance_between(pair<double, double> city1, pair<double, double> city2)
{
    // Calculate Euclidean distance between two cities
    return sqrt(pow(city1.first - city2.first, 2) + pow(city1.second - city2.second, 2));
}

pair<vector<int>, double> tsp_greedy(vector<pair<double, double>> cities)
{
    // Start at first city
    pair<double, double> current_city = cities[0];
    set<pair<double, double>> unvisited_cities(cities.begin() + 1, cities.end());
    vector<int> path = {0};

    // Visit each unvisited city in order of closest to current city
    while (!unvisited_cities.empty())
    {
        auto closest_city_it = min_element(unvisited_cities.begin(), unvisited_cities.end(),
                                           [&](const pair<double, double> &a,
                                               const pair<double, double> &b)
                                           {
                                               return distance_between(current_city, a) <
                                                      distance_between(current_city, b);
                                           });
        path.push_back(distance(cities.begin(), find(cities.begin(), cities.end(), *closest_city_it)));
        current_city = *closest_city_it;
        unvisited_cities.erase(closest_city_it);
    }

    // Return to origin city
    path.push_back(0);

    // Calculate total distance of path
    double total_distance = 0;
    for (int i = 0; i < path.size() - 1; i++)
    {
        total_distance += distance_between(cities[path[i]], cities[path[i + 1]]);
    }

    return make_pair(path, total_distance);
}

int main()
{
    vector<pair<double, double>> cities = {{0, 0}, {1, 1}, {2, 2}, {3, 3}};
    auto result = tsp_greedy(cities);
    cout << "Shortest permutation: ";
    for (auto p : result.first)
    {
        cout << p << " ";
    }
    cout << endl;
    cout << "Shortest distance: " << result.second << endl;
}