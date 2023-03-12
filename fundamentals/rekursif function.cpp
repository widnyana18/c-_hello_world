#include<iostream>
using namespace std;

int pangkat(int a, int b){
	int hasil = a;
		for(int i=1; i<b; i++){
		hasil = a * pangkat(a,(b-1));
	}
	return hasil;
}	 

int main(){
	
	int a,b;
	cout << "angka: ";
	cin >> a;
	cout << "pangkat: ";
	cin >> b;
	
	cout << "hasil pangkat dari bilangan tersebut adalah " << pangkat(a,b);

	
	cin.get();
	return 0;
}
