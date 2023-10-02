#include <bits/stdc++.h>
using namespace std;

int n = 0;

double arithmeticMean(double An, double x, int n)
{
    return (An * n + x) / (n + 1);
}

tuple<double, double, double> pythagoreanMeans(tuple<double, double, double> Mn, double x)
{
    n += 1;
    x = float(x);
    double A, lG, iA;
    if (get<0>(Mn) == -1)
    {
        double Mn0 = get<1>(Mn);
        A = arithmeticMean(Mn0, x, n);
        lG = arithmeticMean(log(Mn0), log(x), n);
        iA = arithmeticMean(1 / Mn0, 1 / x, n);
    }
    else
    {
        A = arithmeticMean(get<0>(Mn), x, n);
        lG = arithmeticMean(get<1>(Mn), log(x), n);
        iA = arithmeticMean(get<2>(Mn), 1 / x, n);
    }
    return make_tuple(A, lG, iA);
}

int main()
{
    freopen("Meanstric.inp", "r", stdin);
    freopen("Meanstric.out", "w", stdout);
    int T;
    cin >> T;
    for (int t = 0; t < T; t++)
    {
        int k;
        cin >> k;
        n = 0;
        tuple<double, double, double> X;
        if (k > 1)
        {
            vector<double> v(k);
            for (int i = 0; i < k; i++)
            {
                cin >> v[i];
            }
            X = accumulate(v.begin(), v.end(), make_tuple(-1.0, 0.0, 0.0), pythagoreanMeans);
        }
        else
        {
            double A;
            cin >> A;
            X = make_tuple(A, log(A), 1 / A);
        }
        cout << fixed << setprecision(9) << get<0>(X) << " " << exp(get<1>(X)) << " " << 1 / get<2>(X) << endl;
    }
    return 0;
}