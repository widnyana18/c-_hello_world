#include<iostream>
using namespace std;

int main(){
	
	int n;
	cout << "\t\t how to make triagle with stars\n\n";
	cout << "choose validity n :\n";
	cin >> n;
	
	cout << "triagle 1 \n\n";
	for (int i=1; i <= n; i++){
	for (int j=1; j <= i; j++){
		cout << "#" << " ";
		
	}
	cout << endl;
	}
	
	cout << "\n\ntriagle 2\n\n";
	
	for (int i=1; i <= n; i++){
	for (int j=n; j >= i; j--){
		cout << "*" << " ";
	}
	cout << endl;
	}

	cout << "\n\ntriagle 3\n\n";
	
	for (int i=1; i <= n; i++){
	for (int j=1; j <= i; j++){
	cout << " "<< " ";	
	}
		for (int k=n; k>= i; k--){
		cout << "@" << " ";		
		
		}
	cout << endl;
	
}

	
	cout << "\n\n triagle 4\n\n";
	
	for (int i=1; i <= n; i++){
	for (int j=n; j >= i; j--){
	cout << " " << " ";	
	}
		for (int k=1; k<=i; k++){
		cout << "$" << " ";		
		}
	cout << endl;
	
}

	cout << "\n\n triagle 5 \n\n";
	
	for (int i=1; i <= n; i++){
	for (int j=n; j >= i; j--){
	cout << " ";	
	}
		for (int k=1; k<=i; k++){
		cout << "*" << " ";		
		}
	cout << endl;
	
}

	cout << "\n\n triagle 6 \n\n";
	
	for (int i=1; i <= n; i++){
	for (int j=1; j <= i; j++){
	cout << " ";	
	}
		for (int k=n; k>=i; k--){
		cout << "*" << " ";		
		}
	cout << endl;
	
}

	cout << "\n\n triagle 7 \n\n";
	
	for (int i=1; i <= n; i++){
	for (int j=n; j >= i; j--){
	cout << " ";	
	}
		for (int k=1; k<=i; k++){
		cout << "+" << " ";		
		} 
		cout << endl;
	}
	for (int i=1; i <= n; i++){
	for (int j=1; j <= i; j++){
	cout << " ";	
	}
		for (int k=n; k>=i; k--){
		cout << "+" << " ";		
		}
	cout << endl;	
	}

	cin.get();
	return 0;
}
