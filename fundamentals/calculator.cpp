#include <iostream>
using namespace std;

int main(){
	
	float a,b,hasil;
	char aritmatika;
	
	cout << "hello world" << endl;
	
	cout << "wellcome to the calculator programmer" << endl;
	
	cout << "masukkan angka pertama";
	cin >> a;
	cout << "pilih operator +,-,*,/";
	cin >> aritmatika;
	cout << "masukkan angka kedua";	
	cin >> b;

 	cout << "\nhasil perhitungan";
	cout << a << aritmatika << b;
	
	  if (aritmatika == '+'){
	 hasil = a + b; 
	 } else if (aritmatika == '-'){
	  hasil = a - b;
	 }else if (aritmatika == '*'){
	 	hasil = a * b;
	 }else if (aritmatika == '/'){
	 	hasil = a / b;
	 }else {
	 	cout << "operator yang anda masukan salah"<< endl;
	 }
	 
	 cout << "=" << hasil << endl;
	
	
	cin.get();
	return 0;
}

