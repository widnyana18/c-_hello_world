#include <iostream>
#include <conio.h>

using namespace std;

const int width = 30;
const int height = 30; 
int x, y, foodx, foody, score;
int tailx[100], taily[100], ntail;
bool gameover;

enum eDirection{STOP = 0, RIGHT, LEFT, DOWN, UP};
eDirection dir;

void setup();
void draw();
void logic();
void input();

int main(){	

setup();
	while(!gameover){
draw();	
logic();
input();	 
}
	getch();
	return 0;
}

void setup(){ 
	gameover = false;
	dir = STOP;
	x = width / 2;
	y =  height / 2;
	foodx = rand() % width;
	foody = rand() % height;
	score = 0;
}

void draw(){

system("cls");

	for(int i=0; i<width + 2; i++)
		cout << "#";
	cout << endl;
	
	for(int i=0; i<height; i++){
		for(int j=0; j<width; j++){
		
		if(j==0)
			cout << "#";
		
		if(j == x && i == y)
			cout << "O";
			
		else if(j == foodx && i == foody)
			cout << "F";	
		else{
		bool print = false;
		for(int k=1; k<= ntail; k++){
			if(tailx[k] == j && taily[k] == i){
			cout << "o";
			print = true;
			}	
		}	
		if(!print) 
		cout << " ";			
	}		
		if(j==width-1)
			cout << "#";
	}
	cout << endl;
}
	for(int i=0; i<width + 2; i++)
		cout << "#";
	cout << endl;
	cout << "score = " << score << endl; 
}

void logic(){

int prevx = tailx[0];
int prevy = taily[0];
int prev2x, prev2y;	
	tailx[0] = x;
	taily[0] = y;	
	
	for(int i=0; i<= ntail; i++){
		prev2x = tailx[i];
		prev2y = taily[i];
		tailx[i] = prevx;
		taily[i] = prevy;
		prevx = prev2x;
		prevy = prev2y;
	}

switch(dir){
	case RIGHT:
	x++;
		break;
	case LEFT:
	x--;
		break;
	case DOWN:
	y++;
		break;
	case UP:
	y--;
		break;
	default:
		break;
	}
	if(x > width || x < 0 || y > height || y < 0) 
		gameover = true;
    if(x == foodx || y == foody){
		score += 10;
    
    for(int i=0; i< ntail; i++){
    	if(tailx[i] == x && taily[i] == y)
    	gameover = true;
    }
	foodx = rand() % width;
	foody = rand() % height;
	ntail++;
	}
}

void input(){

	if(_kbhit()){
	
switch(_getch()){
	case 'a':
	dir = LEFT;
	break;
	case 'd':
	dir = RIGHT;
	break;
	case 's':
	dir = DOWN;
	break;
	case 'w':
	dir = UP;
	break;
	case 'x':
	gameover = true;
	break;
	}
  }
}