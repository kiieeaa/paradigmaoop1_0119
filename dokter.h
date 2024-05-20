#pragma once
#ifndef Dokter_H
#define Dokter_H
#include <iostream>
#include <vector>
using namespace std;


class dokter;
class pasien { // asosiasi
public:
	string nama;
	vector <dokter* > daftar_dokter;
	pasien(string pNama) :nama(pNama) {
		cout << "Pasien \"" << nama << "\" ada\n";
	}
	~pasien() {
		cout << "pasien \"" << nama << "\" tidak ada\n";
	}

	void tambahDokter(dokter*);
	void cetakDokter();
};
class dokter {
public:
	string nama;
	vector<pasien*> daftar_pasien;

	dokter(string pNama) :nama(pNama) {
		cout << "Dokter \"" << nama << "\" ada\n";
	}
	~dokter() {
		cout << "Dokter \"" << nama << "\" tidak ada\n";
	}

	void tambahpasien(pasien*);
	void cetakpasien();
};

void pasien::tambahDokter(dokter* pDokter) {
	daftar_dokter.push_back(pDokter);
}
void pasien::tambahDokter(dokter* pDokter) {
	cout << "Daftar Dokter yang menanggani pasien \"" << this->nama << "\":\n";
	for (auto& a : daftar_dokter) {
		cout << a->nama << "\n";
	}
	cout << endl;
}
void dokter::tambahpasien(pasien* pPasien) {
	daftar_pasien.push_back(pPasien);
	pPasien->tambahDokter(this);

}
void dokter::cetakpasien() {
	cout << "Daftar  pasien dari dokter \"" << this->nama << "\":\n";
	for (auto& a : daftar_pasien) {
		cout << a->nama << "\n";
	}
	cout << endl;
}
int main() {
	dokter* varDokter1 = new dokter("dr.Budi");
	dokter* varDokter2 = new dokter("dr.T)ono");
	pasien* vaePasien1 = new pasien("Andi");
	pasien* varpasien2 = new pasien("Lia");

	varDokter1->tambahpasien(varpasien2);
	varDokter1->tambahpasien(varpasien2);
	varDokter2->tambahpasien(varpasien2);

	varDokter1->cetakpasien();
	varDokter2->cetakpasien();
	varpasien2->cetakDokter();
	varpasien2->cetakDokter();

	delete varpasien2;
	delete varpasien2;
	delete varDokter1;
	delete varDokter2;

	return 0;


}
#endif
