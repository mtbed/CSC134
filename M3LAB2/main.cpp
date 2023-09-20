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
  bool in_battle = true;


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



  while in_battle{
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
            cout << "Nice! You won!\n";
            in_battle = false;
            if (pokemon != "charizard"){
                cout << "+ 43 EXP\n";
                in_battle = false;
            }
            else{
                cout << "+ 2143 EXP\n";
                in_battle = false;
            }
        }
        else if (chance == 4){
            cout << "Oh no! you've missed and lost the battle!\n\n";
            in_battle = false;
        }
  	}
    if (pokemon == "mewtwo"){
        chance == roll();
        if (chance == 4){
            if (chance == 4){
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
        if (chance == 4){
            chance = roll();
            if (chance ==4){
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
  	else if (pokemon == "charizard"){
        chance = roll();
        if (chance >= 3){
            cout << "You caught a " << pokemon << "!!\n\n";
            in_battle = false;
        }
        else{
            cout << "Oh no! They got away!\n\n";
            in_battle = false;
        }
  	}
  	else if (pokemon == "mewtwo"){
        chance = roll();
        if (chance == 4){
            chance = roll();
            if (chance == 4){
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

  else if (choice == 3){
    if (pokemon == "bidoof" || pokemon == "squirtle"){
        cout << "Got away safely!\n";
        in_battle = false;
    }
    else if (pokemon == "charizard"){
        chance == roll();
        if (chance == 4){
            cout << "Oh no! Can't escape!\n\n";
            in_battle = true;
        }
        else{
            cout << "Got away safely!\n";
            in_battle = false;
        }
    }
    else if (pokemon == "mewtwo"){
        chance == roll();
        if (chance == 4){
            cout << "Got away safely!\n";
            in_battle = false;
        }
        else{
            cout << "Oh no! Can't escape!\n\n";
            in_battle = true;
        }
    }

  }
}






  else if (choice < 1 || choice > 4){
  	cout << "I'm sorry, that is not a valid choice." << endl;
  }

  // finish up
  cout << "\nThanks for playing!" << endl; // this runs no matter what they choose
  return 0; // exit without error

} // end of the main() method
