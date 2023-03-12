#include<iostream>
using namespace std;

int faktor(int n);
int pangkat(int a, int b);
int main(){
	
	int n,a,b;
	cout << "angka: ";
	cin >> n;
	cout << "f!= ";
	cout << "\n\nfaktorial dari bilangan tersebut " << faktor(n) << endl;
	
	cout << "bilangan: ";
	cin >> a; 
	cout << "pangkat: ";
	cin >> b;	
	cout << "a^b";
	cout << "\n\nhasil pangkat dari bilangan tersbut adalah: " << pangkat(a,b) << endl;
	

	return 0;
}

int faktor(int n){
	if ((n==0)||(n==1)){
	 cout << n;
	 return n;
	}
	else {
	cout << n << "*";
	return n * faktor(n-1);
	}
}
	int pangkat(int a, int b){
		if (b<=1){
		cout << a;
		return a;
	}
		else {
		cout << a << "*";
		return a* pangkat(a,(b-1));			
		}

}



