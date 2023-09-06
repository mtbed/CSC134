#include <iostream>
// M2T1
// Receipt Calculator
// Matthew Bedsole
// 9/6/23



int main() {
    using namespace std;



    double mealPrice = 5.99;
    double taxRate = 0.08;
    double taxAmount;
    double total;


taxAmount = taxRate * mealPrice;
total = mealPrice + taxAmount;


  cout << "Thank you for dining with us." << endl;
  cout << "Your meal total is $" << mealPrice << endl;
  cout << "The tax is $" << taxAmount << endl;
  cout << "Your total is $" << total << endl;
  cout << "Please come again." << endl;


}
