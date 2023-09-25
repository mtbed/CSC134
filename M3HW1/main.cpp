// CSC 134
// M3HW1 - Gold + Bonus
// Matthew Bedsole
// 9/25/23



#include <iostream>

using namespace std;

int main()
{
    void Question1();
    void Question2();
    void Question3();
    void Question4();


    cout << "WELCOME TO THE MENU!\n\n" << endl;



    int selection = 0;
    cout << "Select a choice (Type 1, 2, or 3):\n\n";
    cout << "1. CHATBOT7000 \n";
    cout << "2. Receipt Calculator\n";
    cout << "3. Super Cool Epic Adventure\n";
    cout << "4. Addition practice\n\n";


    while (selection < 1 || selection > 4){
        cin >> selection;
            if (selection >= 1 && selection <= 4){
        cout << "You've selected choice " << selection <<".\n\n";
            }
            else{
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

    else if (selection == 4){
        Question4();
    }

}

void Question1(){
    char answer;

    cout << "HI! WELCOME TO CHATBOT7000!\n\n";
    cout << "Do you like me? Please type 'y' (for Yes) or 'n' (for No)\n";
    cin >>  answer;

    if (answer == 'y'){
        cout << "That's great! I'm sure we'll get along.\n";
    }
    else if (answer == 'n'){
        cout << "Aw, that's ok. I'll be nice anyways.\n";
    }
    else{
        cout << "Sorry, I couldn't understand you, but I'll assume you meant yes!\n";
    }
}

void Question2(){
    cout << "Question 2\n\n";
}

void Question3(){
    cout << "Question 3\n\n";
}

void Question4(){
    cout << "Question 4\n\n";
}
