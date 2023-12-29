#include<iostream>
#include<conio.h>


class copy
{
	int var, fact;
public:

	copy(int temp)
	{
		var = temp;
	}

	double calculate()
	{
		fact = 1;
		for (int i = 1; i <= var; i++)
		{
			fact = fact * i;
		}
		return fact;
	}
};
int main()
{

	int n;
	std::cout << "\n\tNhap so : ";
	std::cin >> n;
	copy obj(n);
	copy cpy = obj;
	std::cout << "\n\t Giai thua cua " << n << "la: " << obj.calculate();
	std::cout << "\n\t Giai thua cua " << n << "la: " << cpy.calculate();
	return 0;
}