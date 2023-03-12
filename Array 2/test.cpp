#include <iostream>
#include <array>

using namespace std;
int main(){

int value[10];
for (int i=1; i<=10; i++){
	int value[i];
	
	if (i==1){
		cout << "broken skill = ";
		cin >> value[i];
	}
	else if (4<=i<=5){
		cout << "good  = "; 
		cin >> value[i];
	}
	else if (6<=i<=8){
		cout << "excelent = ";
		cin >> value[i];
	}
	else if (9<=i<=10){
		cout << "genius = ";
		cin >> value[i];
	}
}
	
	cin.get();
	return 0;
}
