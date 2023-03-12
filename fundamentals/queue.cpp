#include <iostream>
#include <stdlib.h>
#include <conio.h>

using namespace std;
int end = -1,front = -1,a,maximum;
int queue[1];

void create();
void enqueue();
void cetak();
void garis();
void peek();

int main(){
	char pilih;

   do{

   system("cls");
   garis();
   cout<<endl;
   cetak();
   cout<<endl;
   garis();
   cout<<endl;
   peek();
   cout<<endl<<endl;
   garis();
   cout<<endl;
   cout<<"	Menu Queue"<<endl;
   garis();
   cout<<endl;
   cout<<"1.	Create"		<<endl;
   cout<<"2.	Enqueue"		<<endl;
   cout<<"3.	Exit"			<<endl;
   garis();
   cout<<endl;
   cout<<"	Masukan Pilihan Anda: ";
   cin>>pilih;

   	switch(pilih){
      case	'1' :
      	create();
         break;
      case	'2' :
         enqueue();
         break;
      case	'3' :
      	exit(0);
         break;
   	}
   }
   while(pilih != 2);
}

void create(){
	cout<<endl<<"masukan nilai max	:";
   cin>>maximum;
   queue[maximum];
}
void enqueue(){
	int nilai;
	if(front == maximum -1){
   	cout<<endl<<"	Queue is Full";
      getch();
   }
   else{
   	cout<<endl<<"	Enqueue Queue: ";
      cin>>nilai;
   	if(nilai == -1){
      	cout<<"   -";
      }else{

         if(nilai < 700 || nilai > 800){
         	cout<<"data yang anda inputkan diluar dari  700 dan 800";
            getch();
         }else{
      		front++;
         	queue[front] = nilai;
         }
      }
   }
}
void cetak(){
	if(end == -1 && front == -1){
   	cout<<"	-";
   }
   else{
   	cout<<"	";
      for(a = end;a <= front;a++){
      	cout<<queue[a]<<" ";
      }
   }
}
void garis(){
	cout<<"----------------------------------------------------------";
}
void peek(){
cout<<"max :"<<maximum;
cout<<"|";
cout<<"end(first) :"<<queue[end];
cout<<"|";
cout<<"front(last) :"<<queue[front];
}










