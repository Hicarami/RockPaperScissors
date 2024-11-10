#include <iostream>
  

using namespace std;

int ChosenItemByUser;
int Number;

void GameStartScreen()
{
    int width = 15;

    for (int x = 0; x < width; x++)
    {
        cout << "-";
    }
    cout << endl;

    cout << "Choose the Item:" << endl;
    cout << "[1]Rock" << "\n" << "[2]Paper" << "\n" << "[3]Scissors" << "\n";

    for (int x = 0; x < width; x++)
    {
        cout << "-";
    }
    cout << endl;

    cout << "Write the number ->";
    cin >> ChosenItemByUser;
}

void ChosenNumberbyComputer()
{
    Number = rand() % 3 + 1;  
}

int main()
{
    GameStartScreen();
    ChosenNumberbyComputer();

    if (ChosenItemByUser == Number)
    {
        cout << "It's a Draw!";
    }
    else
    {
        switch (ChosenItemByUser)
        {
        case 1:  // Rock
            if (Number == 3)
                cout << "You won by using Rock! Computer chose Scissors.";
            else
                cout << "You lost! Computer chose Paper.";
            break;

        case 2:  // Paper
            if (Number == 1)
                cout << "You won by using Paper! Computer chose Rock.";
            else
                cout << "You lost! Computer chose Scissors.";
            break;

        case 3:  // Scissors
            if (Number == 2)
                cout << "You won by using Scissors! Computer chose Paper.";
            else
                cout << "You lost! Computer chose Rock.";
            break;
        }
    }

    return 0;
}
