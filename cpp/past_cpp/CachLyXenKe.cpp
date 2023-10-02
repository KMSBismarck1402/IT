#include <iostream>
#include <string>
using namespace std;

void solve()
{
    register char c;
    register int i,left =-2 ,r, cnt =0;
    for(i=0;i<n;i++)
    {
        cin >> c;
        if(c=='1')
        {
            cnt += (i-left-2) >> 1;
            left = i;
        }
    }
    cnt+=(n-1-left)>>1;
    return cnt;
}

int main() {
	int n,t;
	cin >> t;
	while (t--)
    {
        cin >> n;
		cout << solve(n) <<"";
	}
}
