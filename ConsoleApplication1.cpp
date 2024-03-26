#include <iostream>
using namespace std;

int luas;

void prosedurluas(int p, int l) {
	luas = p * l;
}

int fungsi(int p, int l) {
	return p * l;
}

int main() {
	int panjang, lebar;
	cout << "Masukan panjang :";
	cin >> panjang;
	cout << "Masukan lebar :";
	cin >> lebar;

	prosedurluas(luas, lebar);
	cout << "Luas persegi panjang: " << luas << endl;

	return 0;
}