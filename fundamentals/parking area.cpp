#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int count=0, amount=0, jumlah, x; 
	int n_motor=0, c_motor=0;
	int n_car=0, c_car=0;
	int n_bus=0,c_bus=0;

	cout << "bussines parking area\n\n";
	cout << "=======================================\n";
	cout << "press number 1 for motorcycle\n";
	cout << "press number 2 for car\n";
	cout << "press number 3 for buss\n";
	cout << "press number 4 to total amount\n";
	cout << "press number 5 delete to the database" << endl;
	cout << "=======================================\n";
	
	while(true){
	cout << "press number on the options: ";
	cin >> x;

	if (x == 1){	
		cout << "value vehicles: ";
		cin >> jumlah;
		amount = jumlah *1000 + amount;
		count = jumlah + count;	
	
	n_motor = jumlah;
	c_motor = jumlah *1000;
cout << endl;
}
	else if (x <= 2){	
		cout << "value vehicles: ";
		cin >> jumlah;
		amount = jumlah *2000 + amount;
		count = jumlah + count;

		n_car = jumlah;
		c_car = jumlah *2000;
cout << endl;
}		
	else if (x == 3){
		cout << "value vehicles: ";
		cin >> jumlah;
		amount = jumlah *5000 + amount;
		count = jumlah + count;
jumlah=0;
	n_bus = jumlah;
	c_bus = jumlah * 5000;
cout << endl;
}	
	else if (x == 4)
	{
		cout << "===============================================\n";
		cout << "the total number vehicles parked = " << count << endl;
		cout << "the total amount = Rp." << amount << endl;
		cout << "total motorcycle = " << n_motor << "(Rp." << c_motor << ")\n";
		cout << "total car = " << n_car << "(Rp." << c_car << ")\n";
		cout << "total buss = " << n_bus << "(Rp." << c_bus << ")\n";
		cout << "===============================================\n";
cout << endl;
}
	else if(x == 5)
	{
		cout << "==========================\n";
		cout << "the database get to reset" << endl;
		cout << "==========================\n";
		count = 0;
		amount = 0;	
cout << endl;
}
	else{
		cout << "the data isn't valid" << endl;
		false;
	}
}
	getch();
	return 0;
}

