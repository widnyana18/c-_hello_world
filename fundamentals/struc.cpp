#include <iostream>
#include <string>
using namespace std;

struct mahasiswa{
	
	string nama;
	int nim;
	string kelas;
	int semester;
	string jurusan;
	string no_hp;
	int SPP;
};

struct perkuliahan{
string matkul1, matkul2, sks1, sks2;  
};

struct dosen{
string nama1, nama2;
int tahun1, tahun2;
};

int main(){

mahasiswa identitas;

identitas.nama = "I Komang Widnyana";
identitas.nim = 180030730;
identitas.kelas = "AP183";
identitas.semester = 1;
identitas.jurusan = "sistem informasi";
identitas.no_hp = "0895800227631";
identitas.SPP = 5000000;

perkuliahan pelajaran;

pelajaran.matkul1 = "bahasa inggris";
pelajaran.sks1 = " (2 sks)";
pelajaran.matkul2 = "algoritma dan pemprograman";
pelajaran.sks2 = " (4 sks)";

dosen dosen;
dosen.nama1 = "pak Dedy";
dosen.tahun1 = 1978;
dosen.nama1 = "pak Rudy";
dosen.tahun2 = 1986;

cout << "\t\tkartu mahasiswa Stikom Bali\n\n";
cout << "nama 	    : " << identitas.nama << endl;
cout << "NIM 	    : " << identitas.nim << endl;
cout << "kelas 	    : " << identitas.kelas << endl;
cout << "semester    : " << identitas.semester << endl;
cout << "jurusan     : " << identitas.jurusan << endl;
cout << "no hp 	    : " << identitas.no_hp << endl;
cout << "SPP 	    : " << identitas.SPP << endl << endl;

cout << "jadwal mata kuliah: \n"; 
cout << "pelajaran  : " << pelajaran.matkul1 << pelajaran.sks1 << endl;
cout << "nama dosen : " <<  dosen.nama1 << endl;	
cout << "TL dosen   : " << dosen.tahun1 << endl;
	return 0;
}