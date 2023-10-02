#include <bits/stdc++.h>
using namespace std;

long long nC3 (long long n) 
{
    if (n < 3) 
        return 0;
    return n*(n-1)*(n-2)/6;
}

int main()
{
	int n,i,j,m;
	cin >> n;
	int a[n]; 
	for (i= 0; i < n; ++i) 
        cin >> a[i];
    sort(a,a+n);
    m=a[n-1];
    int cntdiv[m];
    int snt[m];
    memset(cntdiv,0,sizeof(cntdiv));
    memset(snt,0,sizeof(snt));
	for (i = 0; i < n; ++i) 
    {
	    j = 1;
	    while (j*j < a[i]) 
        {
	        if (a[i] % j == 0) 
            {
	            ++cntdiv[j];
	            ++cntdiv[a[i]/j];
	        }
	        ++j;
	    }
	    if (j*j == a[i]) 
            ++cntdiv[j];
	}
	long long ans = nC3(n);
	for (i = 2; i < m; ++i) 
    {
	    if (snt[i] == 0) 
        {
	        ++snt[i];
	        for (j = 2*i; j < m; j += i) 
            {
	            if (snt[j] != -1) 
                    ++snt[j];
	            if (i < 1001 && j % (i*i) == 0) 
                    snt[j] = -1;
	        }
	    }
	    if (snt[i] == -1) 
            continue;
	    if (snt[i]&1) 
	        ans -= nC3(cntdiv[i]);
	    else 
	        ans += nC3(cntdiv[i]);
	}
	cout<< ans;
}
