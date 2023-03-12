#include<iostream>
#include<conio.h>

using namespace std;
int main(){
	int waktu;
	int det, mnt, jam;
	int sisa_jam, sisa_mnt;
	cout << "======================================================\n";
	cout << "mengkonpersi detik menjadi jam,menit,detik pada waktu\n";
	cout << "======================================================\n\n";

while(true){		
	
	cout << "masukan jumlah detik yang dinginkan: ";
	cin >> waktu;
sisa_jam = waktu % 3600;
	jam = waktu / 3600;
sisa_mnt = sisa_jam % 60;
	 mnt = sisa_jam / 60;
det = sisa_mnt;

cout << "jam, menit, dan detik adalah: " << jam << ", " << mnt << ", " << det << endl;
}
	getch();
}