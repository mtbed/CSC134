#include <iostream>

int main() {
  using namespace std;



  double mealPrice = 5.99;
  double taxRate = 0.08;
  double taxAmount;
  double total;


  taxAmount = taxRate * mealPrice;


  cout << "Thank you for dining with us." << endl;
  cout << "Your meal total is $" << mealPrice << endl;
  cout << "The tax is $" << taxAmount << endl;


}
