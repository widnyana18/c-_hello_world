#include <iostream>
#include <string>
using namespace std;

int main()
{
	string pilihan1, pilihan2, pilihan3, output;

	pilihan1 = "coding";\
	pilihan2 = "wife";
	pilihan3 = "family";

	int size = 6;
	int a = 6;
	
	cout << "pilihlah yang anda sukai: ";
	
	output = ((a = size) ? pilihan1 : pilihan3);
		
	
	cout << output << endl;
	
	return 0;
}