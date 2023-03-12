#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

const size_t font_size = 11;

void  pilih(array < int, font_size > &angka){
	for (int &a : angka){
		cout << a << " " << endl;
	}
} 
void pilih(array < int, font_size > &angka){
  	for (int &a : angka){
  		cout << a << " " << endl;
  	}
 }
 int main(){

int cari_angka;
array < int, font_size > angka = {4,6,2,7,3,1,5,8,10,9};
array < char, font_size > huruf = {'b','g','c','a','e','f','h','k','j','i'};
bool ketemu;

cout << "data yang masih acak\n";
pilih(angka);
pilih(huruf);

cout << "urutan angka dari yang terkecil sampai yang terbesar: \n";
	short(angka.begin(), angka.end()); 
	pilih(angka);

cout << "plih angka yang akan dicari\n";
cin >> cari_angka;
short(angka.begin(), angka.end()); 
ketemu = binary_search(angka.begin(), angka.end(), cari_angka);

if (cari_angka == ketemu){
	cout << "angka yang anda cari sesuai" << endl;
}
else {
	cout << "angka yang anda cari tidak sesuai" << endl;
}

cout << "urutan huruf dari yang terkecil sampai yang terbesar: " << endl;	  	
	short(huruf.begin(), huruf.end()); 
	pilih(huruf);
	
	cin.get();
	return 0;
} 