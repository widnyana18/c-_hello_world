#include <iostream>
#include<conio.h>

using namespace std;

void penjumlahan(int &n);

int main(){
int jumlah;
	cout << "Masukan jumlah inputan: ";
	cin >> jumlah;
		penjumlahan(jumlah);
	
	getch();
}

void penjumlahan(int &n){
	int x_input, x_tambah=0;
		for(int i=0; i<n; i++){
			cout << "masukan nilai inputan: ";
			cin >> x_input;
				x_tambah = x_tambah + x_input;
		} 
		cout << "Hasil penjumlahan dari jumlah nilai yang diinput adalah: " << x_tambah << endl;
}