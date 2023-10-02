#include <bits/stdc++.h>
using namespace std;

void TangDan(int a[], int n)
{
    int tg;
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(a[i] > a[j]){
                tg = a[i];
                a[i] = a[j];
                a[j] = tg;
            }
        }
    }
}

void XuatMang(int a[], int n)
{
    for(int i = 0; i < n; i++){
        cout << a[i];
    }
}

int MaxElement(int a[], int n){
    int maxValue = a[0];
    for(int i = 0; i < n; i++){
        if(a[i] > maxValue){
            maxValue = a[i];
        }
    }
    return maxValue;
}

int GetMaxPosition(int a[], int n){
    int maxValue = MaxElement(a, n);
    for(int i = 0; i < n; i++){
        if(a[i] == maxValue){
            i+=1;
            return i;
        }
    }
}

int main()
{
    int n,m,i,s=0,b,j;
    cin >> n >> m;
    int p[m], d[m];
    int a[m];
    for(i=0;i<m;i++)
    {
        cin >>p[i];
        s += p[i];
        d[i] = p[i];
    }
    cout <<s<< " ";
    TangDan(p,m);
    for(i=0;i<m;i++)
    {
        if(i>0)
        {
            s-=p[i-1];
            cout << s<<" ";
        }
        a[i] = (s/(m-i));
        cout << a[i]<<" ";
    }
    b=GetMaxPosition(a,m)-1;
    for (i = 0 ; i< m ; i++)
    {
        if (d[b]== p[i]);
        {
            j = i;
        }
    }
    cout << d[b]<< " "<<j*d[b];
}
