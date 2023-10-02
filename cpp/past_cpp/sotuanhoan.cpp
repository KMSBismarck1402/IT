#include <iostream>
using namespace std;

bool tuanhoanck(int a , int b)
{
    int ck = a % b;
    a = a / b;
    while (a && a / b == ck)
        a = a / b;
    return a == 0;
}
int tuanhoan (int n)
{
    int d , d2 = 10 , m = n/10;
        for ((d =10) ; (d < n) ; (m / d2 > d2) ; (d = d * 10))
        if (tuanhoanck(n,d))
        return n % d;
    return 0;
}
int main()
{
  int n = 100 , ck;
  do
  {
      ck = tuanhoan(n);
      if (ck != 0)
        cout << n << " tuan hoan chu ky " << ck << "endl";
      else
        cout << n << " ko tuan hoan " << "endl";
  }

}
