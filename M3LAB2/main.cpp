// if statement example2
// standard header


// compiler directives
// (required for the program to run)
#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;




int roll(){
    int roll = rand() % 4 + 1;
    cout << "roll = " << roll << endl;
    return roll;
}


// beginning of the main() method
int main() {
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

if (pokeroll == 1){
    pokemon = "bidoof";
  }
else if (pokeroll == 2){
        pokemon = "squirtle";
    }
else if (pokeroll == 3){
        pokemon = "charizard";
    }
else if (pokeroll == 4){
        pokemon = "mewtwo";
    }

  // ask the question
  cout << "You've encountered a wild Pokemon!" << endl;
  cout << "It's a " << pokemon << "!\n\n";

  cout << "OPTIONS:\n1. Attack     2.Catch     3.Run\n\n";
  cout << "Type 1, 2, or 3:\n";
  cin >> choice;

  // using if, make a decision based on the user's choice

  if (1 == choice) {
  	cout << "You chose ATTACK!\n" << endl;
  	if (pokemon != "mewtwo" ){
        chance = roll();
        if (chance != 4){
            cout << "Nice! You won!\n\n";
        }
        else if (chance == 4){
            cout << "Oh no! you've missed and lost the battle!\n\n";
        }
  	}
    if (pokemon == "mewtwo"){
        cout << "YOU LOST\n\n";
    }
  }
  else if (2 == choice) {
  	if (pokemon == "bidoof" || pokemon == "squirtle"){
        chance = roll();
        if (chance == 4){
            chance = roll();
            if (chance ==4){
                cout << "Oh no! They got away!\n\n";
            }
            else{
            cout << "You caught a " << pokemon << "!!\n\n";
        }
        }
        else{
            cout << "You caught a " << pokemon << "!!\n\n";
        }
  	}
  	else if (pokemon == "charizard"){
        chance = roll();
        if (chance >= 3){
            cout << "You caught a " << pokemon << "!!\n\n";
        }
        else{
            cout << "Oh no! They got away!\n\n";
        }
  	}
  	else if (pokemon == "mewtwo"){
        chance = roll();
        if (chance == 4){
            chance = roll();
            if (chance == 4){
                cout << "No way! You caught a " << pokemon << "!!\n\n";
            }
            else{
                cout << "Agh! Almost had it!!";
            }
        }
        else{
            cout << "Oh no! They got away!\n\n";
        }
  	}


  }







  else if (choice < 1 || choice > 4){
  	cout << "I'm sorry, that is not a valid choice." << endl;
  }

  // finish up
  cout << "Thanks for playing!" << endl; // this runs no matter what they choose
  return 0; // exit without error

} // end of the main() method
