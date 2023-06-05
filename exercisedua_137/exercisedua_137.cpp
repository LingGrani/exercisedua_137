#include <iostream>
#include <vector>
using namespace std;

class Pengarang;

class Penerbit {
public:
	string nama_Penerbit;
	vector<Pengarang*> daftar_Pengarang;
	void tambahPengarang(Pengarang*);
	void cetakPengarang();
};

class Pengarang{
public:
	string nama_Pengarang;
	Pengarang(string pPengarang);
	vector<Penerbit*> daftar_Penerbit;
	void tambahPenerbit(Penerbit*);
	void cetakPenerbit();
};

class Buku: public Pengarang {
public:
	string nama_Buku;
	void cetakPengarang();
};

void Penerbit::tambahPengarang(Pengarang* pPengarang) {
	daftar_Pengarang.push_back(pPengarang);
}

void Pengarang::tambahPenerbit(Penerbit* pPenerbit) {
	daftar_Penerbit.push_back(pPenerbit);
	pPenerbit->tambahPengarang(this);
}

void Pengarang::cetakPenerbit() {
	cout << "Daftar Penerbit yang diikuti" << "'"<< this->nama_Pengarang  <<"'" << endl;
	for (auto& a : daftar_Penerbit)
	{
		cout << a->nama_Penerbit << endl;
	}
};

void Penerbit::cetakPengarang() {
	cout << "Daftar Pengarang pada Penerbit" << "'" << this->nama_Penerbit << "'" << endl;
	for (auto& a : daftar_Pengarang)
	{
		cout << a->nama_Pengarang << endl;
	}
};

void Buku::cetakPengarang() {
	cout << "Daftar Buku yang Dikarang" << nama_Pengarang << endl;
}

int main() {
	Penerbit* 1 = new Penerbit("Game Press")
	return 0;
};