#include <bits/stdc++.h>
using namespace std;

struct coord
{
    int x;
    int y;
};

int n;

int dfs(vector<vector<bool>> &v, vector<vector<char>> g, coord start)
{
    vector<short> my={0,1,0,-1};
    vector<short> mx={1,0,-1,0};
    stack<coord> st;
    int ar = 1;
    coord cr;

    st.push(start);
    v[start.y][start.x]=true;

    while(st.empty())
    {
        cr = st.top();
        st.pop();
        for(int i=0;i<4;i++)
        {
            if(cr.y+my[i]<g[i].size() && cr.y+my[i] > 0 && cr.x+mx[i]>0)
            {
                if(g[cr.y+my[i]][cr.x+mx[i]]=".")
                {
                    if(v[cr.y+my[i]][cr.x+mx[i]]=false)
                    {
                        v[cr.y+my[i]][cr.x+mx[i]]=true;
                        st.push((cr.y+my[i],cr.x+mx[i]));
                        ar++;
                    }
                }
            }
        }
    }
    return ar;
}

void solve()
{
    char a;
    int r,c;
    cin >> r >> c;
    vector<vector<char>> g(r+1);
    vector<vector<boo>> v(r+1);
    vector<int> ar;

    for(int i=1;i<=r;i++)
    {
        g[i].push_back('0');
        v[i].resize(c+1);
        for(int j=1;j<=c;j++)
        {
            cin >> a;
            g[i].push_back(a);
        }
    }
}
int main()
{
    cin >> n;
    for(int i=0;i<n;i++)
        solve();
}
