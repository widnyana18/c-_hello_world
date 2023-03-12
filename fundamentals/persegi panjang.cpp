#include<iostream>
using namespace std;	

	double Luas(double p, double l){
	double L = p * l;
	return L;
	}
	double Keliling(double p, double l){
	double  Kll = 2 *(p + l);
	return Kll;
	}
	void function_luas(double p, double l){ 
	cout << "luas persegi panjang adalah ";
	cout << Luas(p,l) << endl;
}
	void function_kll(double p, double l){
	cout << "Keliling persegi panjang adalah  ";
	cout << Keliling(p,l) << endl;
	}
	int main(){
	
	double panjang, lebar;
	
	cout << "masukkan panjang : ";
	cin >> panjang;
	cout << "masukkan lebar : ";
	cin >> lebar;
	
	function_luas(panjang,lebar); 
	function_kll(panjang,lebar);
		
	cin.get();
	return 0;
	}
	
