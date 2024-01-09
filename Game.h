#ifndef GAME_H
#define GAME_H
 
//#include "Player.h"
//#include "Score.h"
//#include "Health.h"

class Game{
public:
    Game(); 
//    Player * player;
//    Score * score;
int health;  
int scoregame;
	void play(int initscore,int inithealth);
//	void drawBorder();
	
};


#endif // GAME_H


