#include <cstdlib> 
#include <iostream> 
using namespace std;
int main(int argc, char *argv[])
{
	int arr[10];
	int mode[10][2];
	cout << "Nhap 10 so nguyen\n";
	for (int l = 0; l < 10; l++) {
		cout << "Gia tri " << l << " la :"; cin >> arr[l];
	}
	//tim gia tri lon nhat va nho nhat 
	int i, j, temp;
	//sap xep mang de tim gia tri lon nhat va nho nhat 
	for (i = 0; i < 10; i++)
		for (j = 9; j > i; j--)
			if (arr[j] < arr[j - 1]) {
				int temp = arr[j];
				arr[j] = arr[j - 1];
				arr[j - 1] = temp;
			}

	cout << "Gia tri lon nhat=" << arr[9] << "\nGia tri nho nhat=" << arr[0];
	cout << "\n";
	//khoi tao mang 2 chieu de sap xep tan suat va gia tri
	for (i = 0; i < 2; i++)
		for (j = 0; j < 10; j++)mode[j][i] = 0;
	mode[0][0] = 1;

	//tim tan suat 
	for (i = 0; i < 10; i++)
		for (j = 0; j < 10; j++)
			if (arr[i] == arr[j + 1]) { ++mode[i][0]; mode[i][1] = arr[i]; }

	//tim so lan suat hien nhieu nhat 
	int max;
	int k = 0;
	max = mode[0][0];
	for (j = 0; j < 10; j++)
		if (max < mode[j][0]) { max = mode[j][0]; k = j; }

	//in ket qua 
	cout << "Gia tri xuat hien nhieu nhat la:" << mode[k][1] << "\n";
	cout << "Xuat hien " << max << " lan.";
	cout << "\n";


	return 0;
}
