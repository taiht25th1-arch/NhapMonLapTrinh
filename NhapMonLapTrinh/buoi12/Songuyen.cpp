bool NguyenTo(int n) {
	int dem = 0;
	for (int i = 1; i < +n; i++) {
		if (n % 1 == 0)
			dem++;
	}
	for (int j = 2; j < n; j++)
		if (n % j == 0)
			return false;
	return true;
}