void them_banghi(struct sinhvien st[], int& biendem) {

again:
	cout << "\nNhap ID cua sinh vien: ";
	cin >> st[biendem].mssv;
	if (search(st, st[biendem].mssv, biendem) != -1) {
		cout << "ID nay da ton tai\n"; goto again;
	}

	cout << "Nhap ten sinh vien: ";
	cin >> st[biendem].stname;
	cout << "Nhap gioi tinh cua sinh vien (F hoac M):"; cin >> st[biendem].sex;
	cout << "Nhap diem kiem tra 1: "; cin >> st[biendem].diemkt1;
	cout << "Nhap diem kiem tra 2: "; cin >> st[biendem].diemkt2;
	cout << "Nhap diem chuyen can: "; cin >> st[biendem].diemcc;
	cout << "Nhap diem thi giua ky: "; cin >> st[biendem].diemgk;
	cout << "Nhap diem thi cuoi ky: "; cin >> st[biendem].diemck;
	st[biendem].tongdiem = st[biendem].diemkt1 + st[biendem].diemkt2 + st[biendem].diemcc + st[biendem].diemgk + st[biendem].diemck;
	// Them ban ghi moi
	++biendem;


}