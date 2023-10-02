#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int testprime(int n)
{
	if (n<2)
	{
		return 0;
	}
	int sqrRoot = (int) sqrt(n);
	for (int i=2;i<=sqrRoot;i+=2)
	{
		if (n%i==0)
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	int k, j;

	ifstream in;
		in.open("Bai4.inp",ios::in);
		in >> k >> j;

	ofstream out;
		out.open("Bai4.out",ios::out);

	for (int i=k;i<j;i++)
	{
		testprime(i);
		if (testprime(i)==true)
		{
			out << i << " ";
		}
	}
	in.close();
	out.close();

}
