#include <iostream>

using namespace std;





int main(int argc, char* argv[])
{
   int matches = 24;
    bool gameRunning = true;
    
    cout << "Welcome to the NIM-Game" << endl;

    while(gameRunning == true)
    {
        cout << "Take matches. 1, 2 or 3." << endl;
        int input{};
        cin >> input;

        if(input > 3 || input < 1)
        {
            cout << "You can only take 1, 2 or 3 matches." << endl;
        }

        if (matches != 0)
        {
             
            cout << int (matches -= input);
           
            gameRunning = true;
        }
        else if(matches <= 0)
        {
            gameRunning = false;
        }
    }
    

        cout << "Thank you for playing." << endl;
   return 0;
}

// function which subtracts matches. If draw > 3 draw = false, return.
// cin subtractmatches(1-3) something
// display remaining
// loop until matches = 0.
    
