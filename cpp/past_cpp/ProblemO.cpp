#include <bits/stdc++.h>
using namespace std;

void snt(bool a[],int n)
{
    int i,j,m=sqrt(n);
    a[0]=a[1]=false;
    for (i=2;i<=n;i++)
        a[i]=true;
    for(i=2;i<=n;i++)
        if (a[i] && i <= n/i)
            for(j=i*i;j<=n;j+=i)
                a[j] = false;
}

bool checkluck(bool a[],int n)
{
    int i,f = 0;
    for(i=2;i<n/2;i++)
    {
        if(a[i]==true && n%i==0)
            f++;
        if(f>=3)
            return true;
    }
    return false;
}

void sieveluckynumber(bool a[],int b[])
{
    int i,j=0;
    for(i=30;i<=20000;i++)
    {
        if(checkluck(a,i) )
            b[++j] = i;
        if(j>=1000)
            break;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    bool *a = new bool[20001]{1};
    int *b = new int[1001];
    snt(a,20001);
    sieveluckynumber(a,b);
    int t,n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        cout << b[n] <<"\n";
    }
}
