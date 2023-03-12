#include <iostream>
#include <conio.h>
#include <array>
#include <algorithm>

using namespace std;

void pilih(int *angka){
	for (int i=0; i<10; i++){
	cout << " ";	
	}
}

void pilih(int *huruf){
	for (int i=0; i<10; i++){
	cout << " ";	
	}
cout << endl;
}

int main(){
	const int fontsize = 10;
	int angka[fontsize]={3,7,1,6,9,5,4,1,2,10};
	int huruf[fontsize]={'c','e','a','d','f','b','i','g','h','j'};
	
	int cari_angka;
	bool ketemu;

cout << "mengurutkan data dengan benar\n";
pilih(*angka);
short(angka.begin(), angka.end());

pilih(*huruf); 
short(huruf.begin(), huruf.end());

cout << "cari angka yang terdapat pada data diatas\n";
cin >> cari_angka;
ketemu = binary_search(angka.begin(), angka.end(), cari_angka);

if (ketemu){
	cout << "ketemu" << ketemu; 	
} else {
	cout << "tidak ketemu";
}

	cin.get();
	return 0;
}
