/************************************************
** Author: Andrea Hayes
** Date: Apri 10,2020
** Purpose: Rock Paper Scissors Game
** Input: choice of user
** Processing: random number, user choice compared to computer choice
** Output: Game of Rock Paper Scissors vs computer
*************************************************/
#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;
int random();  // Function Headers
int choice();
void game(int, int);
bool inputValidation(int);
int main() {
    int humanChoice=-1, computerChoice;
    do {
        computerChoice = random(); // Calls random number function

        humanChoice = choice(); // Calls for user input

        game(humanChoice, computerChoice); // Calls for game function
    } while (humanChoice != 0); // Exits game
    return 0;
}

int random() // Function for random number
{
    int computer;
    unsigned seed = time(0);

    srand(seed);  // Seeds number generator

    const int MIN_VALUE = 1; // Minimum value for number
    const int MAX_VALUE = 3; // Maximum value for number

    computer = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE; // Formula for random number
    return computer;
}
int choice() // Function to get user choice
{
    int human;
    bool status;
    do {
        cout << "Let's play Rock, Paper, Scissors." << endl;
        cout << "Which do you chose? (1=Rock, 2=Paper, 3=Scissors, 0=Exit): ";
        cin >> human;
        status = inputValidation(human); // Function for input validation
    } while (status == false);
    return human;
}
void game(int human, int computer) // Function for game
{
        if (human == 1 && computer == 1)
        {
            cout << "Computer chose ROCK..." << endl;
            cout << "You chose ROCK. It's a tie!" << endl;
        }
        else if (human == 1 && computer == 2)
        {
            cout << "Computer chose PAPER..." << endl;
            cout << "You chose ROCK. You Lose!" << endl;
        }
        else if (human == 1 && computer == 3)
        {
            cout << "Computer chose SCISSORS... " << endl;
            cout << "You chose ROCK. You Win!" << endl;
        }
        if (human == 2 && computer == 2)
        {
            cout << "Computer chose PAPER..." << endl;
            cout << "You chose PAPER It's a tie!" << endl;
        }
        else if (human == 2 && computer == 1)
        {
            cout << "Computer chose ROCK..." << endl;
            cout << "You chose PAPER. You Win!" << endl;
        }
        else if (human == 2 && computer == 3)
        {
            cout << "Computer chose SCISSORS..." << endl;
            cout << "You chose PAPER. You Lose!" << endl;
        }
        if (human == 3 && computer == 3)
        {
            cout << "Computer chose SCISSORS..." << endl;
            cout << "You chose SCISSORS. It's a tie!" << endl;
        }
        else if (human == 3 && computer == 1)
        {
            cout << "Computer chose ROCK..." << endl;
            cout << "You chose SCISSORS. You Lose!" << endl;
        }
        else if (human == 3 && computer == 2)
        {
            cout << "Computer chose PAPER..." << endl;
            cout << "You chose SCISSORS. You Win" << endl;
        }
}
bool inputValidation(int human) // Function for input validation
{
    bool status;
        
    if (human == 1 || human == 2 || human == 3 || human==0) {
        status = true;
    }
    else {
        status = false;
        cout << "Enter 1,2, 3 or 0 to exit" << endl;
    }
    return status;
}