// CSC 134
// M3HW1 - Gold + Bonus
// Matthew Bedsole
// 9/25/23



#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int roll()
{

int roll = rand() % 4 + 1;

//cout << "roll = " << roll << endl;

return roll;
}

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


    double mealPrice;

    double taxRate = 0.08;

    double taxAmount;

    double total;


    cout << "Thank you for dining with us." << endl;
    cout << "How much was your meal?\nFORMAT: [$0.00]\n"<< endl;
    cin >> mealPrice;

    taxAmount = taxRate * mealPrice;
    total = mealPrice + taxAmount;


    cout << "The tax is $" << taxAmount << endl;
    cout << "Your total is $" << total << endl;
    cout << "Please come again." << endl;
}

void Question3(){
    cout << "Question 3\n\n";

    int seed = time(0);

srand(seed);
 // this program will ask a question and respond to it.
 // You should run it, and test it by typing in different values.
 // Example test values: 1, 2, 3, banana (try all of them)
 // declare the variable we need
 int choice;
 int pokeroll = roll();
 string pokemon;
 int chance;
 bool in_battle = true;
if (pokeroll == 1)
{

pokemon = "bidoof";
 }
else if (pokeroll == 2)
{

pokemon = "squirtle";

}
else if (pokeroll == 3)
{

pokemon = "charizard";

}
else if (pokeroll == 4)
{

pokemon = "mewtwo";

}
 // ask the question
 cout << "You've encountered a wild Pokemon!" << endl;
 while (in_battle == true)
{
 cout << "It's a " << pokemon << "!\n\n";
 cout << "OPTIONS:\n1. Attack          2.Catch          3.Run\n\n";
 cout << "Type 1, 2, or 3:\n";
 cin >> choice;
 // using if, make a decision based on the user's choice
 if (1 == choice) {

cout << "You chose ATTACK!\n" << endl;

if (pokemon != "mewtwo" )
{

chance = roll();

if (chance != 4)
{

cout << "Nice! You won!\n";

in_battle = false;

if (pokemon != "charizard")
{

cout << "+ 43 EXP\n";

in_battle = false;

}

else{

cout << "+ 2143 EXP\n";

in_battle = false;

}

}

else if (chance == 4)
{

cout << "Oh no! you've missed and lost the battle!\n\n";

in_battle = false;

}

}

if (pokemon == "mewtwo")
{

chance == roll();

if (chance == 4)
{

if (chance == 4)
{

cout << "YOU WON!\n +16421 EXP";

in_battle = false;

}

else{

cout << "YOU LOST\n\n";

in_battle = false;

}

}

else{

cout << "YOU LOST\n\n";

in_battle = false;

}

}
 }
 else if (2 == choice) {

if (pokemon == "bidoof" || pokemon == "squirtle"){

chance = roll();

if (chance == 4)
{

chance = roll();

if (chance ==4)
{

cout << "Oh no! They got away!\n\n";

in_battle = false;

}

else{

cout << "You caught a " << pokemon << "!!\n\n";

in_battle = false;

}

}

else{

cout << "You caught a " << pokemon << "!!\n\n";

in_battle = false;

}

}

else if (pokemon == "charizard")
{

chance = roll();

if (chance >= 3)
{

cout << "You caught a " << pokemon << "!!\n\n";

in_battle = false;

}

else{

cout << "Oh no! They got away!\n\n";

in_battle = false;

}

}

else if (pokemon == "mewtwo")
{

chance = roll();

if (chance == 4)
{

chance = roll();

if (chance == 4)
{

cout << "No way! You caught a " << pokemon << "!!\n\n";

in_battle = false;

}

else{

cout << "Agh! Almost had it!!\n";

in_battle = false;

}

}

else{

cout << "Oh no! They got away!\n\n";

in_battle = false;

}

}
 }
 else if (choice == 3)
{

if (pokemon == "bidoof" || pokemon == "squirtle"){

cout << "Got away safely!\n";

in_battle = false;

}

else if (pokemon == "charizard")
{

chance == roll();

if (chance == 4)
{

cout << "Oh no! Can't escape!\n\n";

in_battle = true;

}

else{

cout << "Got away safely!\n";

in_battle = false;

}

}

else if (pokemon == "mewtwo")
{

chance == roll();

if (chance == 4)
{

cout << "Got away safely!\n";

in_battle = false;

}

else{

cout << "Oh no! Can't escape!\n\n";

in_battle = true;
 }
 }
 }
 else if (choice < 1 || choice > 3)
{

cout << "I'm sorry, that is not a valid choice." << endl;
 }
 }
 cout << "\nThanks for playing!" << endl;

}

void Question4(){
    cout << "Question 4\n\n";
}
