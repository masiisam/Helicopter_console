 
#ifndef MYFUNCTION_H
#define MYFUNCTION_H
#include<windows.h>
void myFunction();
void drawBorder();
//
// HANDLE console;
//extern COORD CursorPosition; 
extern int carpos;
//
//#define SCREEN_WIDTH 90
//#define SCREEN_HEIGHT 29
//#define WIN_WIDTH 70
void setcursor(bool visible, DWORD size) ;
void gotoxy(int x, int y);

#endif // MYFUNCTION_H
