
void bubblesort(struct sinhvien dataset[], int n)
{
	int i, j;
	for (i = 0; i < n; i++)
		for (j = n - 1; j > i; j--)
			if (dataset[j].tongdiem < dataset[j - 1].tongdiem)
			{
				sinhvien temp = dataset[j];
				dataset[j] = dataset[j - 1];
				dataset[j - 1] = temp;
			}
	// changes A - Z
}