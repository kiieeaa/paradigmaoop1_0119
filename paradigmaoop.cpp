#include <iostream>
#include < string>
using namespace std;

//nama repo: paradigmaoop1_0119 comit 15
class mahasiswa {
private:
	const int id;
	string nama;
	float nilai;

public:
	mahasiswa(int pId, string pNama, float pNilai) :id(pId), nama(pNama), nilai(pNilai) {
		//definisis
	}

	~mahasiswa() {
		cout << "id = " << id << endl;
		cout << "Nama = " << nama << endl;
		cout << "Nilai = " << nilai << endl;
	}
};

