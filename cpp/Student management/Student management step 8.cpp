void average(struct sinhvien st[], int biendem)
{
	string id;
	float avg = 0;
	cout << "Nhap ID cua sinh vien:";
	cin >> id;
	int index = search(st, id, biendem);
	if (index != -1 && biendem > 0)
	{
		st[index].tongdiem = st[index].diemkt1 + st[index].diemkt2 + st[index].diemcc + st[index].diemgk + st[index].diemck;
		avg = st[index].tongdiem / 5;
	}
	// average point
	cout << "Diem trung binh la " << avg;
}