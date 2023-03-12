#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#define maxEl 5

/*nama: I Komang Widnyana
  Program: Stek
  kelas: BA183
 */

typedef int infotype;
typedef int address;

struct stack{
	infotype T[maxEl + 1];
	address top;
};

#define Top(S) (S).Top
#define InfoTop(S) (S).T[(S).Top]

void Create(stack *s);
bool isEmpty(stack s);
bool isFull(stack s);
void push(stack *s, infotype x);
void pop(stack *s, infotype x);
void print(stack s);


void main(){
   stack s;
	int x;

	Create(&s);
   pop(&s,&x);
   Push(&s,3); Push(&s,6);
	Push(&s,7); Push(&s,9);
 	Push(&s,12);

 	Push(&s,2); //push pada stack full

 	Pop(&s,&x);
 	Pop(&s,&x);

 	Cetak(s);

 	getch();
}

void Create(stack *s){
    top(*s)=-1;
}
bool isEmpty(stack s){
   if(top(s) == -1){
   	return true;
   }
   else{
    	return false;
   }
}
bool isFull(stack s){
 	if(top(s) == maxEl){
    	return true;
   }
   else[
   	return false;
   }
}
void push(stack *s, infotype x){
	if(!isFull(*s)){
      if(isEmpty(*s)){
        top(*s)=1;
      }
      else{
       	top(*s)++;
      }
      infoTop(*s)= x;
   }
   else{
    cout << "stack penuh" << endl;
   }
}
void pop(stack *s, infotype x){
   if(!isEmpty(*s)){
      *x=infoTop(*s);
      if(top(*s)==1){
          top(*s)=-1;
      }
      else{
       	top(*s)--;
      }
   }
   else{
    	cout << "Stack kosong" << endl;
   }
}
void print(stack s){
	for(int i=top(s); i=0; i--){
    cout << "[" << s.T[i] << "]" << endl;
   }
}


