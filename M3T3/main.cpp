#include <iostream>
/*
Today's assignment will get us started on the M3 homework, in a way that will provide some bonus points.

A text based menu can be used as the most basic UI (User Interface) for interactive programs. We'll set up our program to list three options, and then call code for the option that the user picks.

The program will look something like this:

Menu

1. Choice one

2. Choice 2

3. Choice 3

Your choice?



Once you've got this working, you can use it as the basis for your M3HW, which will let you fulfill the Bonus - Menu System objective for that assignment.

*/



    /*
    int selection = 0;
    cout << "Select a choice (Type 1, 2, or 3):\n\n";
    cout << "1. Choice\n";
    cout << "2. Choice\n";
    cout << "3. Choice\n\n";




    while (selection < 1 || selection > 3){
        cin >> selection;
            if (selection >= 1 && selection <= 3){
        cout << "You've selected choice " << selection <<".\n\n";
            }
            if (selection < 1 || selection > 3){
        cout << "Invalid choice. Please select a valid choice.\n";
            }
    }

    */

using namespace std;

int main()
{
    void Question1();
    void Question2();
    void Question3();


    cout << "WELCOME TO THE MENU!\n\n" << endl;



    int selection = 0;
    cout << "Select a choice (Type 1, 2, or 3):\n\n";
    cout << "1. Choice\n";
    cout << "2. Choice\n";
    cout << "3. Choice\n\n";

    while (selection < 1 || selection > 3){
        cin >> selection;
            if (selection >= 1 && selection <= 3){
        cout << "You've selected choice " << selection <<".\n\n";
            }
            if (selection < 1 || selection > 3){
        cout << "Invalid choice. Please select a valid choice.\n";
            }
    }






    if (selection == 1){
        Question1();
    }

    else if (selection == 2){
        Question2();
    }

    else if (selection == 3){
        Question3();
    }

}

void Question1(){
    cout << "Question 1\n\n";
}

void Question2(){
    cout << "Question 2\n\n";
}

void Question3(){
    cout << "Question 3\n\n";
}
