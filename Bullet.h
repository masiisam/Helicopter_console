#ifndef BULLET_H
#define BULLET_H

class Bullet { 
public:
    Bullet(); 
    int bulletY[2];
	int bulletX[2];  
    void genBullet(int ind,int x);
    void drawBullet(int ind);
    void eraseBullet(int ind);
    void resetBullet(int ind);
};

#endif // BULLET_H


