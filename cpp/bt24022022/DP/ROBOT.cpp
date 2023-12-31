#include <iostream>
using namespace std;

int Landau = INT_MIN;

int gcd(int a, int b)
{

    if (a == 0)

        return b;

    return gcd(b % a, a);
}

int lcm(int a, int b)
{
    return (a * b) / gcd(a, b);
}

void findLCM(vector<int>& arr)
{
    int nth_lcm = arr[0];

    for (int i = 1; i < arr.size(); i++)

        nth_lcm = lcm(nth_lcm, arr[i]);
    Landau = max(Landau, nth_lcm);
}

void findWays(vector<int>& arr, int i, int n)
{
    if (n == 0)
        findLCM(arr);
    for (int j = i; j <= n; j++)
    {
        arr.push_back(j);
        findWays(arr, j, n - j);
        arr.pop_back();
    }
}

void Landau_function(int n)
{
    vector<int> arr;
    findWays(arr, 1, n);
    cout << Landau;
}

int main()
{
    int n;
    cin >> n;
    n--;
    if(n==0)
    {
        cout << 1;
        return 0;
    }
    Landau_function(n);
    return 0;
}
/*
int main()
{
    freopen("ROBOT.INP","r",stdin);
    freopen("ROBOT.OUT","w",stdout);
    int i;
    cin>>i;
    i++;
    if(i==1)cout<<1;
    if(i==2)cout<<1;
    if(i==3)cout<<2;
    if(i==4)cout<<3;
    if(i==5)cout<<4;
    if(i==6)cout<<6;
    if(i==7)cout<<6;
    if(i==8)cout<<12;
    if(i==9)cout<<15;
    if(i==10)cout<<20;
    if(i==11)cout<<30;
    if(i==12)cout<<30;
    if(i==13)cout<<60;
    if(i==14)cout<<60;
    if(i==15)cout<<84;
    if(i==16)cout<<105;
    if(i==17)cout<<140;
    if(i==18)cout<<210;
    if(i==19)cout<<210;
    if(i==20)cout<<420;
    if(i==21)cout<<420;
    if(i==22)cout<<420;
    if(i==23)cout<<420;
    if(i==24)cout<<840;
    if(i==25)cout<<840;
    if(i==26)cout<<1260;
    if(i==27)cout<<1260;
    if(i==28)cout<<1540;
    if(i==29)cout<<2310;
    if(i==30)cout<<2520;
    if(i==31)cout<<4620;
    if(i==32)cout<<4620;
    if(i==33)cout<<5460;
    if(i==34)cout<<5460;
    if(i==35)cout<<9240;
    if(i==36)cout<<9240;
    if(i==37)cout<<13860;
    if(i==38)cout<<13860;
    if(i==39)cout<<16380;
    if(i==40)cout<<16380;
    if(i==41)cout<<27720;
    if(i==42)cout<<30030;
    if(i==43)cout<<32760;
    if(i==44)cout<<60060;
    if(i==45)cout<<60060;
    if(i==46)cout<<60060;
    if(i==47)cout<<60060;
    if(i==48)cout<<120120;
    if(i==49)cout<<120120;
    if(i==50)cout<<180180;
    if(i==51)cout<<180180;
    if(i==52)cout<<180180;
    if(i==53)cout<<180180;
    if(i==54)cout<<360360;
    if(i==55)cout<<360360;
    if(i==56)cout<<360360;
    if(i==57)cout<<360360;
    if(i==58)cout<<471240;
    if(i==59)cout<<510510;
    if(i==60)cout<<556920;
    if(i==61)cout<<1021020;
    if(i==62)cout<<1021020;
    if(i==63)cout<<1141140;
    if(i==64)cout<<1141140;
    if(i==65)cout<<2042040;
    if(i==66)cout<<2042040;
    if(i==67)cout<<3063060;
    if(i==68)cout<<3063060;
    if(i==69)cout<<3423420;
    if(i==70)cout<<3423420;
    if(i==71)cout<<6126120;
    if(i==72)cout<<6126120;
    if(i==73)cout<<6846840;
    if(i==74)cout<<6846840;
    if(i==75)cout<<6846840;
    if(i==76)cout<<6846840;
    if(i==77)cout<<8953560;
    if(i==78)cout<<9699690;
    if(i==79)cout<<12252240;
    if(i==80)cout<<19399380;

}

*/
