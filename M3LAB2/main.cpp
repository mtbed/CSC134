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
    return roll;
}


// beginning of the main() method
int main() {

  // this program will ask a question and respond to it.
  // You should run it, and test it by typing in different values.
  // Example test values: 1, 2, 3, banana (try all of them)

  // declare the variable we need
  int choice;
  string pokemon;


  if (roll() == 1){
    pokemon = "pikachu";
  }
    else if (roll() == 2){
        pokemon = "squirtle";
    }
    else if (roll() == 3){
        pokemon = "ditto";
    }
    else if (roll() == 4){
        pokemon = "mewtwo";
    }

  // ask the question
  cout << "You've encountered a wild Pokemon!" << endl;
  cout << "It's a " << pokemon << "!\n";
  cout << "Type 1 or 2: ";
  cin >> choice;

  // using if, make a decision based on the user's choice

  if (1 == choice) {
  	cout << "You chose Door 1" << endl;
  }
  else if (2 == choice) {
  	cout << "You chose Door 2" << endl;
  }
  else {
  	cout << "I'm sorry, that is not a valid choice." << endl;
  }

  // finish up
  cout << "Thanks for playing!" << endl; // this runs no matter what they choose
  return 0; // exit without error

} // end of the main() method
