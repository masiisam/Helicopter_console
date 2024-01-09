#include "Player.h"  
#include "Enemy.h" 
#include "Player.h" 
#include "MyFunction.h" 
#include <iostream>
#include<conio.h>
#include<dos.h>
#include<windows.h>
#include<time.h>  
using namespace std;
Player::Player() {

					 
}

 
void Player::drawPlayer(){  
 char car[6][5] = { ' ',' ','+',' ',' ',
	 		   	   ' ',' ','+',' ',' ',
				   '+','+','+','+','+',
 					' ',' ','+',' ',' ',
					' ','+','+','+',' '};
	for(int i=0; i<6; i++){
		for(int j=0; j<5; j++){
			gotoxy(j+carpos, i+22);  cout<<car[i][j];
		}
	}
}

void Player::erasePlayer(){
	for(int i=0; i<6; i++){
		for(int j=0; j<5; j++){
			gotoxy(j+carpos, i+22);  cout<<" ";
		}
	}
}

 

