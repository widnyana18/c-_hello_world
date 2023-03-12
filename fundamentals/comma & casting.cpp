#include <iostream>
#include <string>
using namespace std; 

void out(int lo){
	cout << lo << endl;	
}

int main()
{
	int a,b,c;

	c = (a=5,out(a), b=7, out(b), (a+b));
out(c);
	
	
int d = 10;
int e = 8.7486f;
char f = 'h';
string g("makan");


cout << (int) d % e << endl;
cout << (int) f+d << endl;

	return 0;
}
