#include<iostream>
using namespace std;

int playing(){
int x=5;  
return x;
}
int closing(){
int x=14;
return x;
}	
int pause(){
	int x = 4;
	return x;
	}
int main(){
	
int x = 7;
	
	cout << "1. permainan yang dimainkan Andi adalah " << pause << endl;
	cout << "2. permainan yang dimainkan Yogik adalah " << playing() << endl;
	cout << "3. permainan yang dimainkan Made adalah " << closing() << endl;
	cout << "4. permainan yang dimainkan Komang adalah " << x << endl;
	{
	cout << "5. permainan yang dimainkan Alit adalah " << playing << endl;
	
	int x = 20;
	cout << "6. permainan yang dimainkan Dimas adalah " << x << endl;
	cout << "7. permainan yang dimainkan David adalah\n";
	cout << "8. permainan yang dimainkan Wiweka adalah\n";
}
	cout << "9. permainan yang dimainkan Diel adalah\n";
	cout << "10. permainan yang dimainkan Kki adalah\n";
	cout << "11. permainan yang dimainkan Kori adalah\n";

	cin.get();
	return 0;
}

