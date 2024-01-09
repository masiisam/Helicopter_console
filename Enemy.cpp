#include "Enemy.h" 
#include <stdlib.h> // rand() -> really large int
#include "Game.h"
#include "MyFunction.h" 
#include <iostream>
using namespace std;

Enemy::Enemy(){
	int enemyY[3];
	int enemyX[3];
	int enemyFlag[3];
    //set random x position
   
}
void Enemy::genEnemy(int ind){
	enemyX[ind] = 17 + rand()%(33);
}


void Enemy::drawEnemy(int ind){
	if( enemyFlag[ind]== true ){
		gotoxy(enemyX[ind] , enemyY[ind]); 		    cout<<"****";
		gotoxy(enemyX[ind] , enemyY[ind]+1);		cout<<" ** ";
		gotoxy(enemyX[ind] , enemyY[ind]+2);		cout<<"****";
		gotoxy(enemyX[ind] , enemyY[ind]+3);		cout<<" ** ";
		
	}
}

void Enemy::eraseEnemy(int ind){
	int WIN_WIDTH=70;
	if( enemyFlag[ind]== true ){
		gotoxy(enemyX[ind] , enemyY[ind]); 		    cout<<"    ";
		gotoxy(enemyX[ind] , enemyY[ind]+1);		cout<<"    ";
		gotoxy(enemyX[ind] , enemyY[ind]+2);		cout<<"    ";
		gotoxy(enemyX[ind] , enemyY[ind]+3);		cout<<"    ";
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
	}
}


void Enemy::resetEnemy(int ind,int health){

	int WIN_WIDTH=70;
	gotoxy(WIN_WIDTH +7, 25); 
	cout<<"Health: "<<health<<endl;
	eraseEnemy(ind);
	enemyY[ind] = 1;
	genEnemy(ind);
}


  


