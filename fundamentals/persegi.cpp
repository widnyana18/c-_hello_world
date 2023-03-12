#include <iostream>
#include <conio.h>

using namespace std;

int main(){
int j=1;

	while(j<=4){
	 
		 j++;
		for(int i=1; i<=4; i++){
			cout << i << " ";
		}

		cout << endl << endl;
	} 

	cout << endl;

int angka=1;

	for(int i=1; i<=4; i++){
			
		for(int j=1; j<=3; j++){
			cout << angka;
			angka++;
		if(j != 3){
			cout << " " << "x" << " ";
		}
		}
		cout << endl << endl;
	
	}
	getch();
	return 0;
}