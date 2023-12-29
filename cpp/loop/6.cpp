#include <iostream>
#include <conio.h>
using namespace std;
int testing()
{
	int choose;
	cout << "1. Talk" << endl;
	cout << "2. Eat" << endl;
	cout << "3. Play" << endl;
	cout << "4. Sleep" << endl;
	cout << "your choose is : " << endl;
	cin >> choose;
	switch (choose)
	{
	case 1: cout << "you choose talk...talk well is a good skill." << endl;
		break;
	case 2: cout << "You choose eat...eat is the most popular need in the world." << endl;
		break;
	case 3: cout << "YOU choose play...play game much time is not good." << endl;
		break;
	case 4: cout << "YOU choose sleep...sleep 8 hour per day is good for you health." << endl;
		break;
	default: cout << "you do not choose." << endl;
	}
	system("pause");
	return 0;
}

