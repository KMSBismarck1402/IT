#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <limits>

using namespace std;

double distance_between(pair<double, double> city1, pair<double, double> city2) {
    // Calculate Euclidean distance between two cities
    return sqrt(pow(city1.first - city2.first, 2) + pow(city1.second - city2.second, 2));
}

pair<vector<int>, double> tsp(vector<pair<double, double>> cities) {
    // Get all permutations of cities
    vector<int> permutation(cities.size());
    for (int i = 0; i < cities.size(); i++) {
        permutation[i] = i;
    }

    double shortest_distance = numeric_limits<double>::max();
    vector<int> shortest_permutation;
    do {
        double distance = 0;
        for (int i = 0; i < permutation.size(); i++) {
            if (i == permutation.size() - 1) {
                distance += distance_between(cities[permutation[i]], cities[permutation[0]]);
            } else {
                distance += distance_between(cities[permutation[i]], cities[permutation[i+1]]);
            }
        }
        if (distance < shortest_distance) {
            shortest_distance = distance;
            shortest_permutation = permutation;
        }
    } while (next_permutation(permutation.begin(), permutation.end()));

    return make_pair(shortest_permutation, shortest_distance);
}

int main() {
    vector<pair<double, double>> cities = {{0, 0}, {1, 1}, {2, 2}, {3, 3}};
    auto result = tsp(cities);
    cout << "Shortest permutation: ";
    for (auto p : result.first) {
        cout << p << " ";
    }
    cout << endl;
    cout << "Shortest distance: " << result.second << endl;
}