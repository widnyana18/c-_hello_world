#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
	fstream thefile;
	string output, buffer, nama;
	int no;

	thefile.open("file1.txt", ios::in);

	getline(thefile, buffer);
	output.append( buffer);
		getline(thefile, buffer);
	output.append("\n" + buffer);
	getline(thefile, buffer);
	output.append("\n" + buffer);
	cout << output << endl;
	
	getline(thefile, buffer);
	cout << buffer << endl;
	int jumlah;
	while(!thefile.eof()){	
		thefile >> no;
		thefile >> nama;
	jumlah++;
	}	
cout << no << nama << endl;
	cout << jumlah << endl;

	thefile.close();
	
	return 0;
}