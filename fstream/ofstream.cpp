#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ofstream myfile;
	
	myfile.open("file1.txt", ios::out);
	myfile << "\t\tWellcome in our life\n";
	myfile << "We are The Newgress Coding Comunity\n";
	myfile << "berikut adalah anggota newgress coding: \n\n";
	myfile << "_____________________\n";
	myfile << "| No.|     Nama     |\n";
	myfile << "|____|______________|\n";
	myfile << "| 1. |  Dode		|\n";
	myfile << "| 2. |  Widnyana    |\n";
	myfile << "| 3. |  Dekwid      |\n";
	myfile << "| 4. |  Amasona     |\n";
	myfile << "| 5. |  Yogik       |\n";
	myfile << "| 6. |  Putra Jaya  |\n";
	myfile << "|____|______________|\n";
	
	myfile.close();

	
	return 0;
}