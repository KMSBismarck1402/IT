void find(struct sinhvien st[], int biendem)
{
	string id;
	cout << "Nhap ID cua sinh vien: ";
	cin >> id;

	int index = search(st, id, biendem);
	if (index != -1)
	{ //Hien thi ban ghi da tim thay
		cout << left << setw(5) << st[index].mssv << setw(20) << st[index].tensv << setw(5) << st[index].sex;
		cout << setw(5) << st[index].diemkt1 << setw(5) << st[index].diemkt2 << setw(5) << st[index].diemcc
			<< setw(5) << st[index].diemgk << setw(5) << st[index].diemck << setw(5)
			<< st[index].tongdiem;
		cout << "\n";

	}
	else cout << "Ban ghi khong ton tai.";
	// find and repord if don't see
}