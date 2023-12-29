#include<iostream> 
#include<conio.h> 
using namespace std;
int main()
{

	int tArr[5][5];
	int i, j;
	for (i = 0; i < 5; i++) //gan cac gia tri cho mang hai chieu 
		for (j = 0; j <= 5; j++) {
			if (i == 0) tArr[i][j] = j + 1; //dien vao hang dau tien 
			if (i > 0 && j == 0)
				tArr[i][j] = tArr[i - 1][4] + 1; //lay cac gia tri cua o cuoi cung trong hang truoc do
			else
				tArr[i][j] = tArr[i][j - 1] + 1; //dien vao cac o ke tiep 
		}

	for (i = 0; i < 5; i++) { //in mang ket qua
		for (j = 0; j < 5; j++)
			cout << tArr[i][j] << "\t";
		cout << endl;
	}

	return 0;

}