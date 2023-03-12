#include <iostream>
#include <cmath>
using namespace std;

int main()
{  int x;
	
	int fungsi;
cout << "Mengoperasikan Angka dalam Sebuah Fungsi Akar Kuadrat\n\n ";
cout << "pilih fungsi :\n";
cout << "1. akar kuadrat\n ";
cout << "2. sin\n"; 
cin >> fungsi;
cout << "Masukkan angka :";
cin >> x;

if (fungsi == 1){
cout << "Hasilnya adalah " << sqrt(x)<<endl;
}
else if(fungsi == 2){
	cout << "Hasilnya adalah " << sin(x) <<endl;
}
		
 	cin.get();
	return 0;
}
