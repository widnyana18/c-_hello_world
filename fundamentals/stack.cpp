#include <iostream>
#include <conio.h>

using namespace  std;

int top=0, stack[0],  max;


void create();
void push();
void print();
void peek();
void line();

int main(){
    char pilih;

    system("cls");
    line();
    print();
    cout << endl;
    line();
    peek();
    cout << endl << endl;
    line();
    cout << "   Menu Stack " << endl;
    line();
    cout <<  "1. Max" << endl;
    cout <<  "2. Push" << endl;                        

    line();
    cout << "  Input your choise: ";
    cin >> pilih;

    switch(pilih){
        case '1': 
            create();
            break;
        case '2': 
            push();
            break;    
    }
}

void create(){
    cout << endl << "input max value: ";
    cin >> max;
    stack[max];
}

void push(){
    if(top >= max){
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
    cout << "   max: " << max;
    cout << " | ";
    cout << "top: " << stack[top];
}

void line(){
    cout << "------------------------------------------------  "
}