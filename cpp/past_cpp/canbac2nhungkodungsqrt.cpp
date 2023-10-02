#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int a,b,c,d,e;
    cout << "nhap vao 1 so nguyen tu nhien ";
    cin >> a;
    b =a;
    c= 1;
    while (c =1)
    {
        d =  b* b;
        e = c*c;
        if (d > a)
        {
            b = b/2;
        }
        else if (a > d)
        {
            c = b ;
            b = b*2;
        }

        while ((b-c) >1)
        {
            d= b*b;
            e = c*c;
            if (d > a; a > c)
            {
                b = b /2;
            }
            else if (a > d ; a > c)
            {
                c = b ;
                b = b * 2;
                while ((b > c) >1)
                {
                    c = (b+c)/2 -1;
                    d = b*b;
                    e = c *c;
                    if (b > a; c < a )
                    {

                    }
                }
            }

        }

    }
    cout << "can bac 2 la " << c;
}
