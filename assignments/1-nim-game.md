# Nim Game

- 2 Players
- 24 matches on the table
- players take turns to draw matches
- may draw 1, 2 or 3 matches (not more, not less)
- player who has to take last match loses (alternatively: wins)
- make an ASCII-Art Display of the remaining matches `||||||||||||||||`
- implement AI-Player :)




int SubtractMatches()
{
    int matches = 24;
    bool gameRunning = true;

    while(gameRunning)
    {
        cout << "Take matches. 1, 2 or 3." << endl;
        int input{};
        cin >> input;

        if(input > 3 || input < 1)
        {
            cout << "You can only take 1, 2 or 3 matches." << endl;
        }
        else
        {
            cout << matches - input;
            return matches;
        }
    }
  
    return matches;
}