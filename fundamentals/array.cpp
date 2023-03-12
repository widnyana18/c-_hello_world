#include<iostream>
using namespace std;

int main(){

int number[6]={0,1,2,3,4,5};	

number[1] = 8;
number[5] = 10;

cout << &number[0] << " nilai nya adalah " << number[0] << endl;
cout << &number[1] << " nilai nya adalah " << number[1] << endl;
cout << &number[2] << " nilai nya adalah " << number[2] << endl;
cout << &number[3] << " nilai nya adalah " << number[3] << endl;
cout << &number[4] << " nilai nya adalah " << number[4] << endl;
cout << &number[5] << " nilai nya adalah " << number[5] << endl;

cout << endl;
cout << "jumlah address adalah " << sizeof(number) << endl;
cout << "banyak nilai pada address" << sizeof(number)/sizeof(int) << endl;

	cin.get();
	return 0;
}
