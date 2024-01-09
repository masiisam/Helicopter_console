#include <iostream>
//#include<conio.h>
//#include<dos.h>
#include<windows.h>
//#include<time.h>
#include<MyFunction.h>
using namespace std;
//  
//#define SCREEN_WIDTH 90
//#define SCREEN_HEIGHT 29
//#define WIN_WIDTH 70
  int carpos = 70/2;
//
void drawBorder(){
	int SCREEN_HEIGHT =29;
	int SCREEN_WIDTH =90;
	int WIN_WIDTH=70;
	for(int i=0; i<SCREEN_HEIGHT; i++){
		for(int j=0; j<18; j++){
			gotoxy(0+j,i);
			 cout<<"*";
			gotoxy(WIN_WIDTH-j,i);
			 cout<<"*";
		}
	}
	for(int i=0; i<SCREEN_HEIGHT; i++){
		gotoxy(SCREEN_WIDTH,i);
 		cout<<"*";
	}
}
HANDLE console=GetStdHandle(STD_OUTPUT_HANDLE);
void setcursor(bool visible, DWORD size) {
	
	if(size ==0)
	size  = 50;
	
	CONSOLE_CURSOR_INFO lpCursor;	
	lpCursor.bVisible = visible;
	lpCursor.dwSize = size;
	SetConsoleCursorInfo(console,&lpCursor);
} 
void gotoxy(int x, int y){
	COORD CursorPosition;
	CursorPosition.X = x;
	CursorPosition.Y = y;
	SetConsoleCursorPosition( console, CursorPosition );
}

