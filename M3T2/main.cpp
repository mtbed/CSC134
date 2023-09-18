#include <iostream>
#include <stdlib.h>
#include <time.h>

/*
(At the beginning, we can ask the user to tell us what the dice rolls are, and then we'll use rnd(). )

We'll start with the very basics:

The player rolls two 6-sided dice (abbreviated 2d6.)
7 or 11 -> instant win
2, 3, or 12 -> instant loss
The program should ask for the dice rolls, then use if statements to tell the user the result.

Additional Features

We'll add this in class:

rnd() function used to roll the dice -- so we'll change the user input to something like "press any key to roll."
Specific response messages for the losses (for example, 2 = "snake eyes")



*/
using namespace std;

int die1, die2, total;




int roll(){
    int roll = rand() % 6 + 1;
    return roll;
}






int main()
{
    //cout << "What are the 2 rolls?" << endl;
    //cin >> die1 >> die2;

    int seed = time(0);

    srand(seed);

    die1 = roll();
    die2 = roll();
    total = die1 + die2;

    cout << "Die 1: " << die1 << endl;
    cout << "Die 2: " << die2 << endl;
    cout << "\nYou rolled: " << total << endl;





    if (total == 7 || total == 11){
        cout << "You Win!!";
    }

    else if (total == 2 || total == 3 || total == 12){
        cout << "LOSER!!!";
    }

    else {
        cout << "Roll again.";
    }
    return 0;
}
