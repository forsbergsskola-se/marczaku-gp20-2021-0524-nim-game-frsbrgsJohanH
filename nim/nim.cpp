#include <iostream>
#include <string>
using namespace std;

int matches = 24;
bool gameRunning = true;


bool CheckWin()
{
    if(matches < 1)
    {
        return gameRunning = false;
    }
}

void DisplayMatches()
{
    char match = (char)124;

    for(int i = 0; i < matches; i++)
    {
        cout << match;
    }
}

int playerOne(int remainingMatches)
{
    remainingMatches = matches;

    while(true)
        {
            cout << "There is " << + remainingMatches << " matches left!" << endl;
            DisplayMatches();
            cout << "\nPlayer 1. Take 1, 2 or 3 Matches." << endl;
            int input;
            cin >> input;

            if(!cin || input > 3 || input < 1)
            {
                cout << "You can only take 1, 2 or 3 matches." << endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            
            }
            else
            {
                matches -= input;
                return matches;
            }
         
        }
    }

int playerTwo(int remainingMatches)
{
    
    remainingMatches = matches;
    
    while(true)
    {
        cout << "There is " << + remainingMatches << " matches left!" << endl;
        DisplayMatches();
        cout << "\nPlayer 2. Take 1, 2 or 3 Matches." << endl;
        int input;
        cin >> input;

        if(!cin || input > 3 || input < 1)
        {
            cout << "You can only take 1, 2 or 3 matches." << endl;
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
        else
        {
            matches -= input;
            return matches;
        }
    }
}

int main(int argc, char* argv[])
{
    
    
    cout << "Welcome to the NIM-Game" << endl;

    while(gameRunning == true)
      
        
    {
        playerOne(matches);
        CheckWin();
        playerTwo(matches);
        CheckWin();
        
    }
    cout << "Thank you for playing." << endl;
   return 0;
}

// function which subtracts matches. If draw > 3 draw = false, return.
// cin subtractmatches(1-3) something
// display remaining
// loop until matches = 0.
    
