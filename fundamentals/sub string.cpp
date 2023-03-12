#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

int main(){

string kalimat("mencari rangkaian listrik di loop");
string kalimat2("melakukan pengujian pada arus listrik");

cout << "1. " << kalimat << endl;
cout << "2. " << kalimat2 << endl << endl;

cout << kalimat.substr(8,9) << " ";
cout << kalimat2.substr(30,7) << endl;

cout << kalimat.rfind("an") << endl;
int x = kalimat2.find('a');
cout << x << endl;
cout << kalimat2.find('a', x + 10) << endl << endl;

kalimat.swap(kalimat2);
cout << "1. " << kalimat << endl;
cout << "2. " << kalimat2 << endl << endl;

kalimat.replace(10,9,"penelitian");
kalimat2.replace(kalimat2.find("loop"),4,"galvator");
cout << "1. " << kalimat << endl;
cout << "2. " << kalimat2 << endl << endl;

kalimat2.insert(7," baterai untuk ");
cout << "1. " << kalimat << endl;
cout << "2. " << kalimat2 << endl << endl;

string sentence;
cout << "input your sentence: \n";
getline(cin, sentence);
cout << "\nthe data that you input: " << sentence << endl;

int position = 0;
int total_word = 0;

while(true){
position = sentence.find(" ", position + 1);
total_word++;
if (position < 0){
	break;
}
cout << "posisinya: " << position << endl;
cout << "jumlah kata: " << total_word << endl; 
} 
	return 0;
}