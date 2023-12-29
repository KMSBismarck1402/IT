#include<iostream>
#include<conio.h>
using namespace std;

int main()
{


	int matrix[5][5];
	int i, j;
	for (i = 0; i < 5; i++) //gan cac gia tri cho ma tran
		for (j = 0; j < 5; j++) {
			if (i == j) matrix[i][j] = 0; //neu hang=cot=> thi dien 0 
			else if (i > j) matrix[i][j] = -1; //neu hang>cot=> thi dien -1
			else matrix[i][j] = 1; //neu hang<cot=> thì dien 1
		}

	for (i = 0; i < 5; i++) { //in mang
		for (j = 0; j < 5; j++)
			cout << matrix[i][j] << "\t";
		cout << "\n";
	}

	return 0;


}