#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n,i,d=0,x=0,y=0;
    string a,b;
    cin >> n;
    cin >> a >> b;
    bool *o = new bool [n];
    memset(o,0,n*sizeof(bool));
	for (i = 0; i < n; i++)
    {
		if (a[i] == '1')
        {
            x++;
        }
		if (b[i] == '1')
        {
            y++;
        }
	}
	cout << min(x,y) <<"\n";
	delete[] o;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t )
    {
        solve();
        t--;
    }
}

