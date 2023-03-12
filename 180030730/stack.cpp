#include <iostream>
#include <stdlib.h>
#include <conio.h>

int top=0, stack[4], maximum;

void create();
void push();
void print();
void peek();
void line();
void clear();

void main(){
    char pilih;

    do{
    clrscr();
    line();
    print();
    cout << endl;
    line();
    peek();
    cout << endl << endl;
    line();
    cout << endl << "   Menu Stack " << endl;
    line();
    cout << endl <<  "1. Max" << endl;
    cout <<  "2. Push" << endl;
    cout << "3. clear" << endl;
    cout << "4. exit" << endl;

    line();
    cout << endl << "  Input your choise: ";
    cin >> pilih;

    switch(pilih){
        case '1':
            create();
            break;
        case '2':
            push();
            break;
        case '3':
            clear();
            break;
        case '4':
            exit(0);
            break;
    	}
	}
   while(pilih!=3);
}

void create(){
    cout << endl << "input max value: ";
    cin >> maximum;
    stack[maximum];
}

void push(){
    if(top >= maximum){
        cout << "stack is full" << endl;
        getch();
    }
    else{
        cout << "Push data: ";
        cin >> stack[top];

        if(stack[top] ){
            cout << "the data that you input it's  over" << endl << "push new data again: ";
            cin >> stack[top];
        }
        else{
            top++;
        }
    }
}

void print(){
    if(top < 1){
        cout << endl << "   -";
    }
    else{
        cout << "   ";
        for(int i=0; i<=top; i++){
            cout << stack[i] << " ";
        }
    }
}

void peek(){
    cout << endl << "   max: " << maximum;
    cout << " | ";
    cout << "top: " << stack[top];
}

void line(){
    cout << "------------------------------------------------  ";
}

void clear(){
 	top=0;
}
