#include <iostream>
#include <string>

using namespace std;
int main(){
	
	 string kata("newgress");
	 cout << kata << endl;
	 
	 string kata2(" strong");
	 kata.append(kata2);
	 cout << kata << endl;
	 
	 string kata3;
	 cin >> kata3;
	 string kata5("nice");
	 cout << kata3 << " " << kata5 << endl << endl;
{
	 string kata4("coding");
	 string write;
	
	while(true){
	 cout << "ketik kata kuncinya : ";
	 cin >> write;
	 
	 if (write == kata4){
	 cout << "jawaban benar" << endl;
	 break;
	} 
	 else {
	 	cout << "jawaban salah" << endl;
	 } 
}
 cout << "program selesai" << endl;
}
	cin.get();
	return 0;
}
