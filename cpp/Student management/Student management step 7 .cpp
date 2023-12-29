void capnhat_banghi(struct sinhvien st[], int biendem) {
	string id;
	int column_index;
	cout << "Nhap ID cua sinh vien: ";
	cin >> id;
	cout << "Ban muon cap nhat truong nao (1-7) ?: ";
	cin >> column_index;

	int index = search(st, id, biendem);

	if (index != -1)
	{
		if (column_index == 1)
		{
			cout << "Nhap ten sinh vien: ";

			cin >> st[index].tensv;
		}

		else if (column_index == 2)
		{
			cout << "Nhap gioi tinh (F hoac M): ";
			cin >> st[index].sex;
		}
		else if (column_index == 3)
		{
			cout << "Nhap diem kiem tra 1: ";
			cin >> st[index].diemkt1;
		}
		else if (column_index == 4)
		{
			cout << "Nhap diem kiem tra 2: ";
			cin >> st[index].diemkt2;
		}
		else if (column_index == 5)
		{
			cout << "Nhap diem chuyen can: ";
			cin >> st[index].diemcc;
		}
		else if (column_index == 6)
		{
			cout << "Nhap diem thi giua ky: ";
			cin >> st[index].diemgk;
		}
		else if (column_index == 7)
		{
			cout << "Nhap diem thi cuoi ky: ";
			cin >> st[index].diemck;
		}
		else cout << "Gia tri chi muc khong hop le";

		st[index].tongdiem = st[index].diemkt1 + st[index].diemkt2 + st[index].diemcc + st[index].diemgk + st[index].diemck;


	}
	else cout << "Ban ghi khong ton tai. Kiem tra ID va thu lai.";

	// updste write
}