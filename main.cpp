#include <iostream>
#include<conio.h>
#include<dos.h>
#include<windows.h>
#include<time.h>
#include<Game.h>
#include <fstream>
#include <sstream>
#include <string>
#include<MyFunction.h>
#include <vector>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

string loadGame(){ 
string myText;
 
ifstream MyReadFile("saveGame.txt");

// Use a while loop together with the getline() function to read the file line by line
while (getline (MyReadFile, myText)) {
  // Output the text from the file
   myText+=myText;
} 
   
        MyReadFile.close(); // Close the file
        return myText;
    
   
}
int main(int argc, char** argv) {
	setcursor(0,0); 
	srand( (unsigned)time(NULL));
	
	do{
		system("cls");
		gotoxy(10,5); cout<<" -------------------------- "; 
		gotoxy(10,6); cout<<" |     Helicopter Game    | "; 
		gotoxy(10,7); cout<<" --------------------------";
		gotoxy(10,9); cout<<"1. New Game";
		gotoxy(10,10); cout<<"2. LoadGame";	 
		gotoxy(10,11); cout<<"3. Quit";
		gotoxy(10,13); cout<<"Select option: ";
		char op = getche();
		
		if( op == '1'){
			Game game ;
			game.play(1,3);
		}
		else if( op =='2'){
			string a=loadGame();
		 
			  Game game;
			   std::istringstream iss(a);
    std::vector<int> numbers;
 
    int number;
    while (iss >> number) {
        numbers.push_back(number);
    }
     
  	cout<<numbers[0]<<" == "<<numbers[1]<<" === "<<numbers[2];
			game.play(numbers[0],numbers[2]); 
		}
		else if( op == '3'){
			exit(0);	
		}
	
	}while(1);
	
	return 0;
}

