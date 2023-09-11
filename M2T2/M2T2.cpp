#include <iostream>

int main() {
  using namespace std;
  // VARIABLES
  string orchard_name = "Matt";
  int apples_stocked = 100;
  float apples_price = 0.25;
  int amt_bought = 0;
  float payment;
  string customer_name;


  cout << "\nHello Welcome to " << orchard_name << "'s apple orchard.\n" << endl;

  cout << "What's your name?" << endl;
  getline (cin, customer_name);
  cout << "Welcome, " << customer_name << "\n" << endl;

  cout << "We have " << apples_stocked << " apples in stock" << endl;

  cout << "Apples are currently $" << apples_price << " each." << endl;

  // ASK FOR USER AMOUNT

  while (amt_bought < 1 || amt_bought > apples_stocked){
  cout << "\nHow many apples do you want?" << endl;
  cin >> amt_bought;


  if (amt_bought > apples_stocked){
    cout << "That's more than we have in stock!" << endl;
  }
  else if (amt_bought < 0){
    cout << "YOU CANNOT BUY LESS THAN 1" << endl;
  }
  else{
    payment = apples_price * amt_bought;
    cout << "\nYou bought \n" << amt_bought << " apples\nat " << apples_price << " per apple." << "\n\nYour total is: $" << payment << endl;
  }
  }
}
