#include <iostream>
#include <bitset>

using namespace std;

void output(unsigned short val, string nama){
	cout << nama << " = " << bitset<10>(val) << endl;
}
int main()
{
	unsigned short a = 5;
	unsigned short b = 8;
	unsigned short c;

 	cout << "& adalah bitwise dari AND\n\n";
	c = a & b;
	output(a,"a");
	output(b,"b");
	output(c,"c");
	cout << "c = " << c << endl;
	
	cout << "| adalah bitwise dari OR\n\n";
	c = a | b;
	output(a,"a");
	output(b,"b");
	output(c,"c");
	cout << "c = " << c << endl;

	cout << "^ adalah bitwise dari XOR\n\n";
	c = a ^ b;
	output(a,"a");
	output(b,"b");
	output(c,"c");
	cout << "c = " << c << endl;

	cout << "~ adalah bitwise dari NOT\n\n";
	c = ~ (a & b);
	output(a,"a");
	output(b,"b");
	output(c,"c");
	cout << "c = " << c << endl;

	cout << "<< adalah bitwise dari SHFL\n\n";
	c = b << 1;
	output(a,"a");
	output(b,"b");
	output(c,"c");
	cout << "c = " << c << endl;

	cout << ">> adalah bitwise dari SHFR\n\n";
	c = a >> 2;
	output(a,"a");
	output(b,"b");
	output(c,"c");
	cout << "c = " << c << endl;

	return 0;
}