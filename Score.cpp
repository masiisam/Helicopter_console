#include "Score.h" 
#include <iostream>  
#include <MyFunction.h>
#include <cstdlib>
#include <ctime>
using namespace std;
Score::Score(int scoregame){ 
     score =scoregame; 
}

void Score::updateScore(){
	int WIN_WIDTH=70;
	gotoxy(WIN_WIDTH +7, 5);
srand(time(0));  
  
	score+=(rand() % 10) + 1;
	cout<<"Score: "<<score<<endl;
}
 

