#include <bits/stdc++.h>
using namespace std;

struct Pair
{
    int index , value;
};
void nhapmang(int a[],int n)
{
    for(int i=0;i<n;i++)
        cin >> a[i];
}
void xuatmang(int a[],int n)
{
    for(int i=0;i<n;i++)
        cout << a[i] << " ";
}
/*
int sosanh(const void *pa,const void *pb)
{
    int a=*(const int *)pa,b=*(const int*)pb;
    if(a<=0)
        if(b>0)
           return 1;
        else return b-a;
    else if(b>0)
            return a-b;
        else return -1;
}
int Find(int a[], int n, int x){
	for(int i=0;i<n;i++)
		if(a[i]==x)
			return i;
}
int main()
{
    int n,d;
    cin >> n;
    int a[n],b[n];
    nhapmang(a,n);
    for(int i=0;i<n;i++)
        b[i]=a[i];
    qsort(b,n,sizeof(b[0]),sosanh);
    for(int i=0;i<n;i++)
        cout << Find(a,n,b[i]) << " ";
}

#include <bits/stdc++.h>
using namespace std;
*/
int sosanh(const void *pa,const void *pb)
{
   //  int a=*((int*) pa),b=*((int*) pb);
     //return a/10-b/10;
     Pair a = *(Pair *)pa, b = *(Pair *)pb;
     return a.value - b.value;
}

void xuatindex(Pair a[],int n)
{
    for (int i =0;i<n;i++)
    {
        cout << a[i].index << " ";
    }
}
int main()
{
    int n,f;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin >> f;
        a[i]=f*10+i;
    }
    qsort(a,n,sizeof(a[0]),sosanh);
  //  for(int j=0;j<n;j++)
    //    cout << a[j]%10 << "\t";
    xuatindex(a,n);
}
