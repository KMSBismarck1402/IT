#include <bits/stdc++.h>
using namespace std;

unsigned int db1(unsigned int num)
{
  unsigned int i = 0, a = 0;
  for (; i < 32; ++i)
  {
    if (num & 1) a++;
    num >>= 1;
  }
  cout <<a;
}
int main()
{
    int a;
    cin >> a;
    db1(a);
}
