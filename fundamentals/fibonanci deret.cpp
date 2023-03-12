#include<iostream>
using namespace std;

int main(){
	
	cout << "welcome to the deret fibonanci\n\n";
	cout << "loop1\n";
	cout << "select the value :";
	
	int x;
	int f_x;
	int f_x1;
	int f_x2;
	cin >> x;
		
	f_x1 = 1;
	f_x2 = 1;
		for (int i=1; i <=x; i++){
	f_x = f_x1 + f_x2;
	f_x2 = f_x1;
	f_x1 = f_x;
	 	
		cout <<  f_x << " ";
	
	}
	cout << "\n";
	

	int n;
	int f_n;
	int f_n1;
	int f_n2;
	
	cout << "loop 2\n";
	cout << "select the value n :" << endl;
	cin >> n;
	
	f_n1 = 1;
	f_n2 = 2;
 	for (int i=1; i <=n; i++){
 	f_n = f_n1 + f_n2;
	f_n2 = f_n1;
	f_n1 = f_n;
	 	
	 cout << f_n << " ";
 
 	}
	  cout<< "\n";	

cin.get();
return 0;
}
