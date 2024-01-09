#include "Player.h"  
#include "Enemy.h" 
#include "Player.h" 
#include "MyFunction.h" 
#include <iostream>
#include<conio.h>
#include<dos.h>
#include<windows.h>
#include<time.h>  
#include<Bullet.h>
using namespace std;
 
Bullet::Bullet(){
	int bulletY[2];
	int bulletX[2]; 
    //set random x position
   
}
void Bullet::genBullet(int ind,int x){
	bulletX[ind] = x;
}


void Bullet::resetBullet(int ind){

 
	eraseBullet(ind);
	bulletY[ind] =25;
	genBullet(ind,carpos);
}


  
void Bullet::eraseBullet(int ind){
	int WIN_WIDTH=70; 
		gotoxy(WIN_WIDTH -40, 0); cout<<"     ||     ";
	//	gotoxy(WIN_WIDTH -40, 5); cout<<"            ";
		gotoxy(WIN_WIDTH -40, 5); cout<<"     ||     ";
	//	gotoxy(WIN_WIDTH -40, 10); cout<<"            ";
		gotoxy(WIN_WIDTH -40, 10); cout<<"     ||     ";
	//	gotoxy(WIN_WIDTH -40, 15); cout<<"             ";
		gotoxy(WIN_WIDTH -40, 15); cout<<"     ||     ";
	//	gotoxy(WIN_WIDTH -40, 20); cout<<"             ";
		gotoxy(WIN_WIDTH -40, 20); cout<<"     ||     ";
	//	gotoxy(WIN_WIDTH -40, 25); cout<<"             ";
		gotoxy(WIN_WIDTH -40, 25); cout<<"     ||     ";
	//	gotoxy(WIN_WIDTH -40, 30); cout<<"             ";
	
		gotoxy(bulletX[ind] , bulletY[ind]); 		    cout<<"    "; 
	 
}
 
   
 
void Bullet::drawBullet(int ind){ 
		
		gotoxy(bulletX[ind] , bulletY[ind]); 	  cout<<"#"; 
 
}

 

 

