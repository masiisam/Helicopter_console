#include "Game.h" 
#include "Enemy.h"  
#include "Bullet.h" 
#include "Score.h" 
#include "Player.h"
#include <conio.h>
#include "MyFunction.h"   
 #include <iostream> 
 #include <cstdlib> 
 #include <fstream>
 #include <string>
 using namespace std;
Game::Game( ){ 
}
// #define SCREEN_WIDTH 90
//#define SCREEN_HEIGHT 29



void gameover(){
	system("cls");
	cout<<endl;
	cout<<"\t\t----------------------------"<<endl;
	cout<<"\t\t--------- Game Over --------"<<endl;
	cout<<"\t\t----------------------------"<<endl;
	cout<<"\t\tPress any Key to go back to menu.";
	getch();
}

int collisionBullet(int enemyX,int enemyY,int BulletX,int BulletY){
 
	if(  abs(BulletX-enemyX)<=4 &&  abs(enemyY-BulletY)<=4){
	 
			return 1;
		 
	}
	return 0;
}
int collision(int enemyX,int enemyY,int health){
	if(health==0){
			return 1;
	}
	if( enemyY + 4 >=23 ){
		if( enemyX + 4 -carpos >=0 && enemyX + 4 -carpos <9 ){
			return 1;
		}
	}
	return 0;
}

void Game::play(int initscore,int inithealth){  
int health=inithealth;
 int scoregame=initscore;
int WIN_WIDTH= 70; 
int SCREEN_WIDTH =90;
int SCREEN_HEIGHT =29;
	Enemy enemy;
	enemy.enemyFlag[0] = 1;
	enemy.enemyFlag[1] = 0;
	enemy.enemyY[0] = enemy.enemyY[1] = 1;
	
	system("cls");
	drawBorder();
	Score score(scoregame); 
	gotoxy(WIN_WIDTH +7, 5); 
	cout<<"Score: "<<score.score<<endl;
	enemy.genEnemy(0);
	enemy.genEnemy(1);
	
	
	gotoxy(WIN_WIDTH +7, 2); cout<<"helicopter Game";
	gotoxy(WIN_WIDTH +6, 4); cout<<"----------";
	gotoxy(WIN_WIDTH +6, 6); cout<<"----------";
	gotoxy(WIN_WIDTH +7, 12); cout<<"Control ";
	gotoxy(WIN_WIDTH +7, 13); cout<<"-------- ";
	gotoxy(WIN_WIDTH +2, 14); cout<<"A Key - Left";
	gotoxy(WIN_WIDTH +2, 15); cout<<"D Key - Left";
	gotoxy(WIN_WIDTH +2, 16); cout<<"Left Arrow";
	gotoxy(WIN_WIDTH +2, 17); cout<<"Right Ket";
	gotoxy(WIN_WIDTH +2, 17); cout<<"saveGame press -s-";
	
	gotoxy(18, 5);cout<<"Press any key to start";
	getch();
	gotoxy(18, 5);cout<<"                      ";
	Bullet bullet;
	bullet.bulletY[0]=bullet.bulletY[0]=25;
	bullet.genBullet(0,carpos);
bullet.genBullet(1,carpos);
	while(1){
		if(kbhit()){
			char ch = getch();
			
			if( ch=='a' || ch=='A' || ch == 75 ){				//  75 is ascii code of left arrow
				if( carpos > 18 )								//  72 is ascii code of up arrow
					carpos -= 4;
			}													//  80 is ascii code of left arrow
			if( ch=='d' || ch=='D' || ch== 77 ){				//  77 is ascii code of right arrow
				if( carpos < 50 )
					carpos += 4;
			}
			
			 if(ch=='s'){
			 	 std::ofstream outputFile("saveGame.txt"); // Open the file for writing

    if (outputFile.is_open()) {
    	gotoxy(WIN_WIDTH +3, 14);
        outputFile << score.score;// Write data to the file 
          outputFile <<" " ;
          outputFile<<health;
        cout<<score.score+" "+health ;
//        return;
        outputFile.close(); // Close the file 
    } 

			 }
			if(ch==27){
				break;
			}
		}
		Player player;
		player.drawPlayer();
		enemy.drawEnemy(0);
		enemy.drawEnemy(1);
		bullet.drawBullet(0);
		bullet.drawBullet(1);
		
		if( collision(enemy.enemyX[0],enemy.enemyY[0],health) ==1 ){
			gameover();
			return ;
		}
		for (int i=0;i<2;i++){
		for (int j=0;j<2;j++){
		if( collisionBullet(enemy.enemyX[i],enemy.enemyY[i],bullet.bulletX[j],bullet.bulletY[j]) ==1 ){

		enemy.resetEnemy(i,health); 
			score.updateScore();
		}}
		} 
		Sleep(100);
		player.erasePlayer();
	    
  		
		
		bullet.eraseBullet(0);
		bullet.eraseBullet(1);
		enemy.eraseEnemy(0);
		enemy.eraseEnemy(1);
		
	 
		 
		bullet.bulletY[0] -= 1;	
	
		if( enemy.enemyY[0] == 10 )
			if( enemy.enemyFlag[1] == 0 )
				enemy.enemyFlag[1] = 1;
		
		if( enemy.enemyFlag[0] == 1 ){
			bullet.bulletY[0] -= 1;	
			enemy.enemyY[0] += 1;
	}
		if( enemy.enemyFlag[1] == 1 )
		{
				enemy.enemyY[1] += 1;
					bullet.bulletY[1] -= 1;	}
		if( bullet.bulletY[0] <= 2 ){ 
			bullet.resetBullet(0);  
		}
			if( bullet.bulletY[1] <= 2 ){ 
			bullet.resetBullet(1);  
		}
		if( enemy.enemyY[0] > SCREEN_HEIGHT-4 ){
			health--;
			enemy.resetEnemy(0,health); 
		}
		if( enemy.enemyY[1] > SCREEN_HEIGHT-4 ){
			health--;
			enemy.resetEnemy(1,health); 
		}  	
	}
}
 


