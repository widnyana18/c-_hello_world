#include <iostream>
using namespace std;

enum buah {orange, manggo, banana = 8, lemon, apple, watermelon};

int main()
{
	buah fruit;

	fruit = lemon;
	cout << "jumlah buah di pasar: \n";
	
	if (fruit == apple){
		cout << "jumlah buah apple yg terjual adalah: ";
	}
	else if (fruit == orange){
		cout << "jumlah buah orange yang terjual adalah: ";
	}
	else if (fruit == manggo){
		cout << "jumlah buah manggo yang terjual adalah: "; 
	}
	else if (fruit == banana){
		cout << "jumlah buah banana yang terjual adalah: ";
	}
	else if (fruit == lemon){
		cout << "jumlah buah lemon yang terjual adalah: ";
	}
	else if (fruit == watermelon){
		cout << "jumlah buah watermelon yang terjual adalah: ";
	} 
	cout << fruit << endl; 

	return 0;
}