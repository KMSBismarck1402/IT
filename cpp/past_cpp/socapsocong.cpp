#include <iostream>
using namespace std;

int main()
{
     int a[50];
     int n,b,c,i,d,e,f;
     i = 0; b=111; c=2;d=1;a[0] = 111;f=1;
         c+=1;
         while (i <5)
            {
                a[i] =  b;
                b +=12;
                i+=1;
            }
        if (i = 5)
         {
             b = 210;
         }
         do{
                a[i] =  b;
                b +=12;
                i+=1;
        }while (i<10);
             while (9<i<45)
             {
            if (c%2 !=0)
                 {
                b = a[i-9*f];
                do{
                    a[i] =  b;
                    b +=12;
                    i+=1;
                } while (a[i] < (c+1)*100);
             }
             else if (c%2 ==0)
             {
              b = a[5+f*5-f/2] - 12*(f/2);
              d+=1;
             do{
                    a[i] =  b;
                    b +=12;
                    i+=1;
                } while (a[i] < (c+1)*100);
            f+=1;
            }
             }
     for (e=0 ; e< i ; e++)
     {
         cout << a[i];
     }
}
