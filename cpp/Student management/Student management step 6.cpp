void xoa_banghi(struct sinhvien st[], int& biendem) {
	string id;
	int index;
	if (biendem > 0)
	{
		cout << "Nhap ID cua sinh vien:";
		cin >> id;
		index = search(st, id, biendem);

		if (index != -1)
		{
			if (index == (biendem - 1)) //xoa ban ghi cuoi cung
			{

				clean(st, index);
				--biendem;
				cout << "Ban ghi da bi xoa.\n";
			}

			else //xoa ban ghi dau tien hoac o giua
			{
				for (int i = index; i < biendem - 1; i++)
				{
					st[i] = st[i + 1];
					clean(st, biendem);
					--biendem;
				}

			}

		}
		else cout << "Ban ghi khong ton tai. Kiem tra ID va thu lai.\n";

	}
	else cout << "Khong co ban ghi nao bi xoa\n";
}
void clean(struct sinhvien st[], int index)
{
	st[index].mssv = "";
	strcpy(st[index].tensv, "");
	st[index].sex = NULL;
	st[index].diemkt1 = 0;
	st[index].diemkt2 = 0;
	st[index].diemcc = 0;
	st[index].diemgk = 0;
	st[index].diemck = 0;
	st[index].tongdiem = 0;
	// delet write
}