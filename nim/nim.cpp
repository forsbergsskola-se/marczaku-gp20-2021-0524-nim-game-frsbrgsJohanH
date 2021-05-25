#include <iostream>
#include <string>
using namespace std;

int matches = 24;


int playerOne(int remainingMatches)
{
    remainingMatches = matches;
    
    cout << "There is " << + remainingMatches << " matches left!" << endl;
    cout << "Player 1. Take 1, 2 or 3 Matches." << endl;
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

int playerTwo(int remainingMatches)
{
    remainingMatches = matches;
    
    cout << "There is " << + remainingMatches << " matches left!" << endl;
    cout << "Player 2. Take 1, 2 or 3 Matches." << endl;
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


int main(int argc, char* argv[])
{
    bool gameRunning = true;
    
    cout << "Welcome to the NIM-Game" << endl;

    while(gameRunning == true)
        
    {
        playerOne(matches);

        playerTwo(matches);
        
    }
    cout << "Thank you for playing." << endl;
   return 0;
}

// function which subtracts matches. If draw > 3 draw = false, return.
// cin subtractmatches(1-3) something
// display remaining
// loop until matches = 0.
    
