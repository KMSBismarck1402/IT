#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int d=0,n,i,j=0,ck=0;
    bool a[10] ={0};
    string s;
    cin >> s;
    n=s.length();
    for(i=0;i<n;i++)
    {
        if(a[s[i]-'0']==0)
        {
            a[s[i]-'0']=1;
        }
        else
        {
            if(d==0)
            {
                j=s[i]-'0';
                while(a[j]==1&&j<10)
                    j++;
                if(j==10)
                    ck=1;
                s.replace(i,1,to_string(j));
                a[j]=1;
                d=1;
            }
            else
            {
                j=0;
                while(a[j]==1)
                    j++;
                s.replace(i,1,to_string(j));
                a[j]=1;
            }
        }
    }
    if(ck==1)
    {
        cout<<"10";
        for(i=2;i<n+1;i++)
            cout << i;
        cout <<"\n";
    }
    else
        cout << s <<"\n";
}

int main()
{
    int t;
    cin >> t;
    while(t--)
        solve();
}

/*
5
9
99
9787
20222
90999
*/
