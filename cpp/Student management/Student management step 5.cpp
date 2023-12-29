//ham de quan sat tat ca cac ban ghi
void viewall(struct sinhvien st[], int biendem) {
	int i = 0;
	cout << left << setw(5) << "ID" << setw(20) << "TEN" << setw(5) << "GIOITINH"
		<< setw(5) << "DKT1"
		<< setw(5) << "DKT2" << setw(5) << "DCC" << setw(5) << "DGK" << setw(5) << "DCK"
		<< setw(5) << "TONG" << "\n";
	cout << "==========================================\n";
	while (i <= biendem) {
		if (st[i].mssv != "") {
			cout << left << setw(5) << st[i].mssv << setw(20) << st[i].tensv << setw(5)
				<< st[i].sex;
			cout << setw(5) << st[i].diemkt1 << setw(5) << st[i].diemkt2 << setw(5) << st[i].diemcc
				<< setw(5) << st[i].diemgk << setw(5) << st[i].diemck << setw(5)
				<< st[i].tongdiem;

			cout << "\n";
		}
		i = i + 1;

	}


}
