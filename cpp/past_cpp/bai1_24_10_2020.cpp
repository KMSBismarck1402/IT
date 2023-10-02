#include <bits/stdc++.h>
using namespace std;

bool ktnt(int n)
{
    int a = 2;
    while ( (n % a != 0) && (a <= n/a))
        a++;
    return a > n/a;
}

int main ()
{
    int y ,i,z;
    int x[18000];
    int a[18000];
    cout << "y = ";
    cin >> y;
    z=i;
    for ( i = 2 ; i <= y   ; i++)
    {
        if (ktnt(i) )
        x[i] = i;
    }
    for ( i = 2 ; i <= y   ; i++)
    {
         if (x[i] !=0 &&  x[i] > 2 &&  x[i] < y ){; cout << x[i] << " " ; x[i] == a[z]; z = z++;}
        else if (x[i] == 0) {cout << "";}
    }
    for (i=1 ; i <= y ;  i++)
    {cout << a[i] << " ";}

}
