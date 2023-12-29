int search(struct sinhvien st[], string id, int biendem) {

	int found = -1;
	for (int i = 0; i < biendem && found == -1; i++)
	{

		if (st[i].mssv == id) found = i;

		else found = -1;
	}

	return found;
	// search function
}
