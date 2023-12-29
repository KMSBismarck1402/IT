void showmax(struct sinhvien st[], int biendem)
{
	float max = st[0].tongdiem;
	int index = 0;
	if (biendem >= 2)
	{

		for (int j = 0; j < biendem - 1; ++j)
			if (max < st[j + 1].tongdiem) {
				max = st[j + 1].tongdiem;
				index = j + 1;

			}


	}

	else if (biendem == 1)
	{
		index = 0;
		max = st[0].tongdiem;
	}


	else cout << "Khong tim thay ban ghi nao!\n";

	if (index != -1) cout << "Sinh vien co ID la " << st[index].mssv << " dat tong diem cao nhat la " << max << endl;


}

void showmin(struct sinhvien st[], int biendem)
{

	float min = st[0].tongdiem;
	int index = 0;
	if (biendem >= 2)
	{
		for (int j = 0; j < biendem - 1; ++j)
			if (min > st[j + 1].tongdiem)
			{
				min = st[j + 1].tongdiem;
				index = j + 1;

			}


	}

	else if (biendem == 1)
	{
		index = 0;
		min = st[0].tongdiem;
	}
	else cout << "Khong tim thay ban ghi nao!\n";

	if (index != -1) cout << "Sinh vien voi ID la " << st[index].mssv << " co tong diem thap nhat la " << min << endl;

	// find maximum minimum

}
