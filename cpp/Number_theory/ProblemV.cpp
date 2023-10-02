#include <bits/stdc++.h>
using namespace std;

int main()
{    
    ios_base::sync_with_stdio(NULL); cin.tie(0); cout.tie(0);
    int t,n,i;
    int s;
    cin >> t;
    while(t--)
    {
        cin >> n;
        s=0;
        for(i=1;i*i<n;i++)
            if(n%i==0)  
                s+=i+n/i;
        if(i*i==n) 
            s+=i;
        s-=n;
        cout << s<<"\n";
    }
}