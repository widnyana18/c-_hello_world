#include<iostream>
using namespace std;

int faktorial(int n);

int main(){
	
	int n;
	cout << "angka : ";
	cin >> n;
	
	cout << "faktorial dari bilangan tersebut " << faktorial(n) << endl;
	
	cin.get();
	return 0;
}

int faktorial(int n){
	return n *(n-1);
}
