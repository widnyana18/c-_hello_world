#include <iostream>
#include <string>
#include <fstream>

using namespace std;

struct mahasiswa{
int pk;
string nama;
int nim;
string jurusan;
string UKM;
};

int get_option();
void check_data(fstream &thedata);
void writeData(fstream &thedata, mahasiswa &input_data, int posisi);
int size_data(fstream &thedata);
mahasiswa readDataMahasiswa(int posisi, fstream &thedata);
void add_data(fstream &thedata);
void display(fstream &thedata);
void updateDatMahasiswa(fstream &thedata);
void deleteDataMahasiswa(fstream &thedata);

int main(){	

fstream thedata;
check_data(thedata);

enum option{create=1, add, update, deleted, finish}; 
 int pilihan = get_option();

while(pilihan != finish){
switch(pilihan){
	case create:
		cout << "Tampilkan data mahasiswa: \n";
	    display(thedata);
		break;
	case add:
		cout << "Tambah data mahasiswa: \n";
		add_data(thedata);
		break;
	case update:
		cout << "Ubah data mahasiswa: \n";
		display(thedata);
		updateDatMahasiswa(thedata);
		display(thedata);
		break;
	case deleted:
		cout << "Hapus data mahasiswa: \n";
		display(thedata);
		deleteDataMahasiswa(thedata);
		display(thedata);
		break;
	default:
		cout << "selesai" << endl;
	break;
	}
	
	label_continue:
	char lanjutkan; 
    
	cout << "lanjutkan?ketik(y/n): ";
	cin >> lanjutkan;

	if (lanjutkan == 'y'){
	pilihan = get_option();
	}
	else if (lanjutkan == 'n'){
	break;
	}
	else {
	goto label_continue;
	}
} 		
cout << "akhir dari program" << endl;	
cin.ignore('\n');

cin.get();
return 0;
}

int get_option(){
int input;
system("cls;");	
cout << "Data Mahasiswa Stikom Bali\n\n";
cout << "##############################\n";
cout << "1. Menampilkan data mahasiswa: \n";
cout << "2. Menambahkan data mahasiswa: \n";
cout << "3. Mengubah data mahasiswa: \n";
cout << "4. Menghapus data mahasiswa: \n";
cout << "5. program selesai \n";
cout << "##############################\n";
cout <<"pilih no 1-5: ";
cin >> input;
cin.ignore('\n');
	return input;
}

void check_data(fstream &thedata){
thedata.open("database.bin", ios::out | ios::in | ios::binary);

	if(thedata.is_open()){
	cout << "data ditemukan" << endl;
	}
	else {
	cout << "data tidak ditemukan, buatlah data yang baru!!" << endl;
	thedata.close();
	thedata.open("database.bin", ios::trunc | ios::out | ios::in | ios::binary);
	}
}

void writeData(fstream &thedata, mahasiswa &input_data, int posisi){
  
thedata.seekp((posisi-1)*sizeof(mahasiswa), ios::beg);
thedata.write(reinterpret_cast<char*>(&input_data),sizeof(mahasiswa));
}

int size_data(fstream &thedata){
int start, end;
	thedata.seekg(0, ios::beg);
	start = thedata.tellg();
	thedata.seekg(0, ios::end);
	end = thedata.tellg();
	return (end-start)/sizeof(mahasiswa);
}

mahasiswa readDataMahasiswa(fstream &thedata, int posisi){
mahasiswa read_mahasiswa;
thedata.seekg((posisi - 1)*sizeof(mahasiswa), ios::beg);
thedata.read(reinterpret_cast<char*>(&read_mahasiswa),sizeof(mahasiswa));

return read_mahasiswa;
}

void add_data(fstream &thedata){
mahasiswa input_data, last_mahasiswa;

int size = size_data(thedata); 
cout << "ukuran data: " << size << endl;

if(size == 0){
input_data.pk=1;
}
else {
	 last_mahasiswa = readDataMahasiswa(thedata, size);
	cout << "pk: " << input_data.pk << endl; 
	input_data.pk = last_mahasiswa.pk + 1;
}

cout << "Nama: ";
getline(cin, input_data.nama);
cout << "NIM: ";
cin >> input_data.nim;
cout << "Jurusan: ";
getline(cin, input_data.jurusan);
cout << "UKM: ";
getline(cin, input_data.UKM);

writeData(thedata, input_data, size + 1);
}

void display(fstream &thedata){
	int size = size_data(thedata);
	mahasiswa view_mahasiswa;
	
	cout << "No.\tpk.\tNama\t\tNim\t Jurusan \tUKM" << endl;
	for(int i=1; i<=size; i++){
		cout << view_mahasiswa.pk << "\t";
		cout << view_mahasiswa.nama << "\t";
		cout << view_mahasiswa.nim << "\t";
		cout << view_mahasiswa.jurusan << "\t";
		cout << view_mahasiswa.UKM << endl;
	}
}
 void updateDatMahasiswa(fstream &thedata){
  int nomor;
  mahasiswa update_mahasiswa;
 	
 update_mahasiswa =	readDataMahasiswa(thedata, nomor); 	
 	cout << "pilih nomor yang akan diubah: ";
 	cin >> nomor;

cin.ignore('\n');

cout << "Nama: ";
getline(cin, update_mahasiswa.nama);
cout << "NIM: ";
cin >> update_mahasiswa.nim;
cout << "Jurusan: ";
getline(cin, update_mahasiswa.jurusan);
cout << "UKM: ";
getline(cin, update_mahasiswa.UKM);

writeData(thedata, update_mahasiswa, nomor);
}

void deleteDataMahasiswa(fstream &thedata){
int no, size, offset;
fstream dataSementara;

mahasiswa blankMahasiswa, tempMahasiswa;

size = size_data(thedata);

cout << "pilih data yang akan dihapus: ";
cin >> no;
writeData(thedata, no, blankMahasiswa);

dataSementara.open("temp.dat", ios::trunc | ios::out | ios::in | ios::binary);
	
	offset = 0;
	for(int i=1; i<=size; i++){
		tempMahasiswa = readDataMahasiswa(thedata,i);
	if(!tempMahasiswa.nama.empty()){
		writeData(dataSementara, i-offset, tempMahasiswa);
	}
	else {
		offset++;
		cout << "delete the data" << endl;
	}
}
 size = size_data(dataSementara);
 dataSementara.close();
 
 thedata.open("database.bin", ios::trunc | ios::out | ios::in | ios::binary);
 thedata.close();
 thedata.open("database.bin", ios::out | ios::in | ios::binary);

	for(int i=1; i <= size; i++){
		tempMahasiswa = readDataMahasiswa(dataSementara,i);
		writeData(thedata, i, tempMahasiswa);
	}
}







