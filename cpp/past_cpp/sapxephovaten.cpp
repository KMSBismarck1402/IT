.accumulate.#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n,i;
    cin >> n ;
    string str[n],b;
    for (i=0;i<n;i++)
    {
        getline(cin, str[i],'.');
    }
    for(int i = 0; i < n - 1; i++)
        {
        for(int j = i + 1; j < n; j++)
        {
            if(str[i] < str[j])
            {
                b = str[i];
                str[i] = str[j];
                str[j] = b;
            }
        }
    }
    for (i=0;i<n;i++)
    {
        cout << str[i]<< " ";
    }
}
