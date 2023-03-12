#include <iostream>
using namespace std;

//prtotype adalah menjalankan sesuatu perintah dengan membuat 2 pernyataan
double pilih_volume(double p, double l, double t);

double pilih_kubus(double s){
	return s * s * s;
}
int main(){
	
	cout << "\t\t Menghitung volume Bangun ruang \n\n";
	
	int p, l, t, sisi;
	cout << "Bangun ruang 1\n\n";
	cout << "panjang : ";
	cin >> p;
	cout << "lebar : ";
	cin >> l;
	cout << "tinggi : ";
	cin >> t;
	
	cout << "volume balok adalah : " << pilih_volume(p,l,t) << endl;
	
	cout << "\n\n Bangun ruang 2 \n\n";
	cout << "ukuran sisi kubus : ";
	cin >> sisi;
	
	cout << "volume kubus adalah  " << pilih_kubus(sisi) << endl;  
	
	cin.get();
	return 0;
}

 	double pilih_volume(double p, double l, double t){
	return p * l * t;
}
