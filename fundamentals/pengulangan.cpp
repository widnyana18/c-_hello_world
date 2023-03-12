#include <iostream>

using namespace std;

int kuadrat(int x){
	int y;
	y = x * x; 
	return y;
} 
int tambah(int a, int b){
	int c;
	c = 5*a*a + b;
	return c;	 
}
void function(int input){
	cout << input <<endl;
}

int main(){
	
	int input, hasil, a, b, hasil2;
	
	cout << "masukkan angka :";
	cin >> input;
	
	hasil = kuadrat(input);
	function(hasil);
	
	cout << "masukkan angka ke1 :  ";
	cin >> a;
	cout << "masukkan angka ke2 :  ";
	cin >> b;
	
	hasil2 = tambah(a,b);
	cout << hasil2 <<endl; 	
	

	cin.get();
	return 0;
}

