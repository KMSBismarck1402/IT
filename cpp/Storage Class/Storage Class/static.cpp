#include <iostream>

// phan khai bao ham
void func(void);

static int biendem = 10; /* Day la bien toan cuc */

mainl()
{
	while (biendem--)
	{
		func();
	}
	return 0;
}
// Phan dinh nghia ham
void func(void)
{
	static int i = 5; // Day la bien cuc bo dang static
	i++;
	std::cout << "i co gia tri la " << i;
	std::cout << " va biendem co gia tri la " << biendem << std::endl;
}