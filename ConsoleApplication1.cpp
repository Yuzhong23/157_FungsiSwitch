#include <iostream>
using namespace std;

int luas;

void prosedurluas(int p, int l)
{
	luas = p * l;
}

int fungsiluas(int p, int l) 
{
	return p * l;
}

int main() {
	int panjang, lebar;
	cout << "Masukan panjang :";
	cin >> panjang;
	cout << "Masukan lebar :";
	cin >> lebar;

	prosedurluas(panjang, lebar);
	cout << "Luas persegi panjang: " << luas << endl;

	cout << "Luas persegi panjang dengan fungsi: " << fungsiluas(panjang, lebar) << endl;

	return 0;
}