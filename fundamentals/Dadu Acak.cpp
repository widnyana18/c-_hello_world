#include <iostream>
#include <cstdlib>

using namespace std;
int main(){

	char press;
	cout << "\t\t Melempar dadu secara acak\n\n";
	
	while (true){
	cout << "ingin melempar dadu?(yes/no)";
	cin >> press;

	if (press == 'y'){
		cout << 1 + rand() % 6 <<endl;
	}
	else if (press == 'n'){
		cout << "\n no action"<<endl;
	
	}
	else {
		cout << "the statement is't true"<<endl;
	}
}
	cin.get();
	return 0;
}
