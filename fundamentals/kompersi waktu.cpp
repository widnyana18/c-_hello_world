#include<iostream>
#include<conio.h>

using namespace std;

void output_jam(int &sisa_jam,int &jam, int &waktu){
	sisa_jam = waktu % 3600;
	jam = waktu / 3600;
	cout << jam << ", ";
}
void output_mnt(int &sisa_jam, int &sisa_mnt, int &mnt){
	sisa_mnt = sisa_jam % 60;
	 mnt = sisa_jam / 60;
	 cout << mnt << ", ";
}
void output_det(int &det, int &sisa_mnt){
	det = sisa_mnt;
	cout << det << endl;
}

int main(){
	int waktu;
	int det, mnt, jam;
	int sisa_jam, sisa_mnt;
	
	cout << "======================================================\n";
	cout << "mengkonpersi detik menjadi jam,menit,detik pada waktu\n";
	cout << "======================================================\n\n";

	cout << "masukan jumlah detik yang dinginkan: ";
	cin >> waktu;

cout << "jam, menit, detik adalah: "; 
	output_jam(jam, sisa_jam, waktu);
	output_mnt(mnt, sisa_mnt, sisa_jam);
	output_det(det, sisa_mnt);

	
	getch();
}