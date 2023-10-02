#include <bits/stdc++.h>
using namespace std;

int ulm = 1e4,llm = -(1e4);

void solve()
{
    int n,i,d=0,s=0,j;
    cin >> n;
    for(i=0;i<n;i++)
    {
        cin >> s;
        if(s>0)
        {
            d+=s;
            if(s%2)
            {
                if(s<ulm)
                {
                    ulm=s;
                    //cerr<<ulm<< " ";
                }
            }
        }
        else if(s%2)
        {
            if(s>llm)
            {
                llm=s;
                //cerr<<lln<<" ";
            }
        }
    }
    //cerr <<"\n"<< llm << " " << ulm<< " \n"<<"ans : " ;
    if(d==0)
        cout << llm;
    else if(d%2==0)
        cout << d-abs(min(llm,ulm));
    else
        cout << d;
    cout << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--)
        solve();
}
