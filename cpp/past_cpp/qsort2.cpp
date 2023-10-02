#include <bits/stdc++.h>
using namespace std;

int sosanh(const void *pa,const void *pb)
{
     string a=*((string*) pa),b=*((string*) pb);
     string c=a+b,d=b+a;
     if(c>d)
        return 1;
     else if(c<d)
        return -1;
     else
        return 0;
}

int main()
{
    int n;
    cin >> n;
    string s[n];
    for(int i=0;i<n;i++)
    {
        cin >> s[i];
    }
    qsort(s,n,sizeof(s[0]),sosanh);
    for(int j=0;j<n;j++)
        cout << s[j]<< " ";
}
