#include <iostream>
#include <stdio.h>
#include <stdlib.h>    
#include <time.h>
#include <conio.h>
using namespace std;



char board[3][3] {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};

char currentMarker;
int currentPlayer;
int slot;



void DisplayBoard()
{
    cout << board[0][0] << " " << char(179) <<" " << board[0][1] << " " << char(179) <<" "<< board[0][2] << endl;
    cout << "----------" << endl; 
    cout << board[1][0] << " " << char(179) <<" "<< board[1][1] << " " << char(179) <<" "<< board[1][2] << endl;
    cout << "----------" << endl;
    cout << board[2][0] << " " << char(179) <<" "<< board[2][1] << " " << char(179) <<" "<< board[2][2] << endl;

    
}

bool PlaceMarker(int slot)
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
        
    if( board[row][column] != 'X' && board[row][column] != 'O')
    {
        board[row][column] = currentMarker;
        return true;
    }
    else
        return false;
     
       
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

void PlayerSwap()
{
    if(currentMarker == 'X')
        currentMarker = 'O';
    else
        currentMarker = 'X';

    if(currentPlayer == 1)
        currentPlayer = 2;
    else
        currentPlayer = 1;
}

void GamePlay()
{
    char playerMarker;
    int playerWin;
    
    cout << "Player 1. Choose your Marker: X or O :) : ";
    currentPlayer = 1;
    cin >> playerMarker;
    currentMarker = playerMarker;

    DisplayBoard();

    for (int i = 0; i < 9; i++)
    {
        cout <<  "It Is player " << currentPlayer <<"s turn. Enter a slot: ";
        int slot;
        cin >> slot;

        if(slot < 1 || slot > 9)
        {
            cout << "Please choose a slot from 1-9" << endl;
            i--;
            continue;
        }
        
        if(!PlaceMarker(slot))
        {
            cout << "This slot already has a marker! Choose Another slot!." << endl;
            i--;
            continue;
        }
        
        
        DisplayBoard();

        playerWin = CheckWinner();

        if(playerWin == 1)
        {
            cout << "Player 1 wins!";
            break;
        }
            
        if(playerWin == 2)
        {
            cout << "Player 2 wins!";
            break;
        }

        PlayerSwap();
        }   
        if (playerWin == 0)
        {
            cout << "Game was a tie!";
        }
            
    }




void GamePlayAI()
{
    char playerMarker;
    int playerWin;
    
    cout << "Player 1. Choose your Marker: X or O :) : ";
    currentPlayer = 1;
    cin >> playerMarker;
    currentMarker = playerMarker;
    

    DisplayBoard();

    for (int i = 0; i < 9; i++)
    {
        cout <<  "It Is player " << currentPlayer <<"s turn. Enter a slot: ";
        
        cin >> slot;
        if(currentPlayer == 2)
        {
            
           slot = rand() % 9 + 1;
            cin.ignore();
            
        }
        

        if(slot < 1 || slot > 9)
        {
            cout << "Please choose a slot from 1-9" << endl;
            i--;
            continue;
        }
        
        if(!PlaceMarker(slot))
        {
            cout << "This slot already has a marker! Choose Another slot!." << endl;
            i--;
            continue;
        }
        
        
        DisplayBoard();

        playerWin = CheckWinner();

        if(playerWin == 1)
        {
            cout << "Player 1 wins!";
            break;
        }
            
        if(playerWin == 2)
        {
            cout << "Computer wins!";
            break;
        }

        PlayerSwap();
    }   
    if (playerWin == 0)
    {
        cout << "Game was a tie!";
    }
            
}


int main(int argc, char* argv[])
{
    cout << "Welcome to Tic Tac Toe game" << endl;
    cout << "Press 1 for 2 players" << endl;
    cout << "Press 2 for playing against Computer" << endl;

    int choice;
    cin >> choice;

    switch(choice)
    {
    case 1:
        {
            GamePlay();

            break;

           
        }
    
    case 2:
        {
            GamePlayAI();
            break;
        }

    }


    return 0;
    

 
}


