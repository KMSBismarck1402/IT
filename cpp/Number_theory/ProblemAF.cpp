#include <bits/stdc++.h>
using namespace std;

int cfn[10000100] = {0};

int main() 
{
	int n,x,c3,i,j=0;
	for(i=2;i<=100;i++)
    {
		c3 = i*i*i;
		if(cfn[c3]!=-1)
			for(j=c3;j<1000100;j+=c3)
				cfn[j] = -1;				
	}
    j=1;
	for(i=1;i<1000100;i++)
		if(cfn[i]==0)
			cfn[i] = j++;
	cin>>n;
	for(i=1;i<=n;i++)
    {
		cin>>x;
		if(cfn[x]!=-1)
			cout << "Case "<<i<<": " <<cfn[x];
		else
            cout << "Case "<<i<<": Not Cube Free";
        cout << "\n";
	}
}  