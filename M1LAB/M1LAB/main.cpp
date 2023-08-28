#include <iostream>

using namespace std;

int main()
{
   using namespace std;
  // VARIABLES
  /*CSC 134
  M1LAB
  Matthew Bedsole
  8/28/23
  */
  string orchard_name = "Matt";
  int apples_stocked = 100;
  float apples_price = 0.25;
  int amt_bought = 0;
  float payment;


  cout << "\nHello Welcome to " << orchard_name << "'s apple orchard." << endl;

  cout << "We have " << apples_stocked << " apples in stock" << endl;

  cout << "Apples are currently $" << apples_price << " each." << endl;

  // ASK FOR USER AMOUNT

  while (amt_bought < 1 || amt_bought > apples_stocked){
  cout << "\nHow many apples do you want?" << endl;
  cin >> amt_bought;


  if (amt_bought > apples_stocked){
    cout << "That's more than we have! We only have "<< apples_stocked << " apples." << endl;
  }
  if (amt_bought <= 0){
    cout << "You cannot buy less than 1 apple" << endl;
  }
  else if(amt_bought >= 1 && amt_bought <= apples_stocked){
    payment = apples_price * amt_bought;
    cout << "\nYou bought \n" << amt_bought << " apples\nat " << apples_price << " per apple." << "\n\nYour total is: $" << payment << endl;
  }
  }
}
