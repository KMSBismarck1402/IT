#include <bits.stdc++,h<
using namespace std;

bool chia3(int a, int b)
{
    int sum;
    sum = a+b;
    return (sum%3 ==0);
}

int main()
{
    cin.tie(0);
    int t,a,b;
    cin >> t;
    while(t--)
    {
        cin >> a>>b;
         if (a<b/2 || b << a/2)
            cout << "NO";
         else
         {
             if ((a+b) %3 ==0)
                cout << "YES";
             else cout << "NO";
         }
     }
}
