#include <iostream>
#include<conio.h>

using namespace std;

void l_lingkaran();

int main(){
	
	cout << "Masukan jari-jari Lingkaran: ";
	l_lingkaran();

	getch();
}

void l_lingkaran(){
	float jari, phi=3.14, luas;
		cin >> jari;
			luas = phi * jari * jari;

				cout << "Luas lingkaran adalah: " << luas << " cm" << endl;
}