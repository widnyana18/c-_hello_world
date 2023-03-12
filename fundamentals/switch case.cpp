#include <iostream>

using namespace std;

int main(){


    char top;
    
	cout << "top global natalia" << endl;

	cin >> top;
     
	switch (top){
		case 'A' : cout << " the answer that u select wrong" << endl;
    break;
		case 'B' : cout << "the answer that u select  true" <<endl;
	 break;
		case 'C' : cout << " the answer that u select wrong" << endl;
	break;
		case 'D' : cout << " the answer that u select wrong" << endl;
	break;
	}
	
	cin.get();
	return 0;
}

