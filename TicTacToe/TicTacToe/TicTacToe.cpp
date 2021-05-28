#include <iostream>
#include <stdio.h> 
using namespace std;



char board[3][3] {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};

char currentMarker;
int currentPlayer;



void DisplayBoard()
{
    cout << board[0][0] << " " << char(179) <<" " << board[0][1] << " " << char(179) <<" "<< board[0][2] << endl;
    cout << "----------" << endl; 
    cout << board[1][0] << " " << char(179) <<" "<< board[1][1] << " " << char(179) <<" "<< board[1][2] << endl;
    cout << "----------" << endl;
    cout << board[2][0] << " " << char(179) <<" "<< board[2][1] << " " << char(179) <<" "<< board[2][2] << endl;

    
}

void PlaceMarker(int slot)
{
    int row = slot / 3;
    int column;

    if(slot % 3 == 0)
    {
        row = (slot / 3) - 1;
        column = 2;
    }
        else
        {
            column = (slot % 3) - 1;
        }
        

    board[row][column] = currentMarker;
       
}

int CheckWinner()
{
    for(int i = 0; i < 3; i++)
    {
        //check if row filled;

        if(board[i][0] == board[i][1] && board[i][1] == board[i][2])
        {
            return currentPlayer;
        }
          //check columns
        if(board[0][i] == board[1][i] && board[1][i] == board[2][i])
        {
            return currentPlayer;
        }
            //check diagonals
            if(board[0][0] == board[1][1] && board[1][1] == board[2][2])
            {
                return currentPlayer;
             }

            if(board[0][2] == board[1][1] && board[1][1] == board[2][0])
            {
                return currentPlayer;
            }
        // returns the winner
        
        return 0;
        
    }
}

void GamePlay()
{
    char playerMarker;
    
    cout << "Player 1. Choose your Marker: X or O :) : ";
    currentPlayer = 1;
    cin >> playerMarker;
    currentMarker = playerMarker;

    for (int i = 0; i < 9; i++)
    {
        DisplayBoard();
        cout <<  "It Is player " << currentPlayer <<"s turn. Enter a slot: ";
        int slot;
        cin >> slot;

        PlaceMarker(slot);

        
    }
}


int main(int argc, char* argv[])
{

    GamePlay();
    
   

    return 0;
    

 
}


