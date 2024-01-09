#ifndef ENEMY_H
#define ENEMY_H


class Enemy{

public:
    Enemy(); 
	int enemyY[3];
	int enemyX[3];
	int enemyFlag[3];
    void move();
    void genEnemy(int ind);
    void drawEnemy(int ind);
    void eraseEnemy(int ind); 
void resetEnemy(int ind,int health);

};

#endif // ENEMY_H


