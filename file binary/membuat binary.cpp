#include <iostream>
#include <string>
#include <fstream>

using namespace std;

struct mahasiswa{

string nama;
int nim;
string jurusan;
string UKM;
};

mahasiswa baca_data(int posisi, fstream &databin){
mahasiswa buffer;
databin.seekp((posisi-1)*sizeof(mahasiswa));
databin.read(reinterpret_cast<char*>(&buffer),sizeof(mahasiswa));

return buffer;
};

void membuat_data(mahasiswa &data, fstream &databin){
	databin.write(reinterpret_cast<char*>(&data),sizeof(mahasiswa));
}

void modify_data(int posisi, mahasiswa buffer, fstream &databin){
	databin.seekg((posisi-1)*sizeof(mahasiswa));
	databin.write(reinterpret_cast<char*>(&buffer),sizeof(mahasiswa));
}

int main()
{
	fstream databin;
	databin.open("struktur.bin", ios::trunc | ios::out | ios::in | ios::binary);
	
	mahasiswa mahasiswa1, mahasiswa2, mahasiswa3, output;

	mahasiswa1.nama = "I Komang widnyana";
	mahasiswa1.nim = 180030730;
	mahasiswa1.jurusan = "sistem informasi";
	mahasiswa1.UKM = "ukm progress";

	mahasiswa2.nama = "Lulu Ul Maknun";
	mahasiswa2.nim = 180030028;
	mahasiswa2.jurusan = "sistem komputer";
	mahasiswa2.UKM = "ukm u2m";

	mahasiswa3.nama = "Deni Bought";
	mahasiswa3.nim = 180030203;
	mahasiswa3.jurusan = "sistem informasi";
	mahasiswa3.UKM = "ukm himatografi";

	membuat_data(mahasiswa1,databin);
	membuat_data(mahasiswa2,databin);
	membuat_data(mahasiswa3,databin);

	mahasiswa3.nama;
	modify_data(3,mahasiswa3, databin);
	
	output = baca_data(2,databin);
	
	cout << "Nama    : " << output.nama << endl;
	cout << "NIM 	 : " << output.nim << endl;
	cout << "Jurusan : " << output.jurusan << endl;
	cout << "UKM 	 : " << output.UKM << endl;

	databin.close();

	return 0;
}