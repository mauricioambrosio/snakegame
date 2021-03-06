//#include <iostream>
#include"Segment.h"
#include"Direction.h"
#include"Snake.h"
#include"Player.h"
#include"Board.h"

using namespace std;

int main()
{
	int answerInt=0;
	Board game;
	cout<<"How many players?(1/2): ";
	cin>>answerInt;

	if(answerInt==1){//single player game
		game.Start();
	}else if(answerInt==2){//multi player game
		game.Start2();
	}

    return 0;
}
