#include <iostream>
using namespace std;

int main()
{
    long a = 10 , b , c , i  ;
    for (i = 1 , c = 0 , b =1 ; i <= 10 ; ++i , c +=b , b+=2)
        cout << c <<"\n" ;
}
