#include <iostream>
using namespace std;

int main()
{
    string username;
    double amt_deposit;
    double amt_withdraw;
    double account_num;



    cout << "Hello, Welcome to the Totally Legitimate Banking Co.\n\n" << endl;

    cout << "Please enter your name: ";
    getline(cin,username);

    cout << "Welcome, " << username<< endl;

    cout << "Please enter amount of deposit: $";
    cin >> amt_deposit;

    cout << "Please enter amount of withdrawal: $";
    cin >> amt_withdraw;

    cout << "\n\n\n\n";
    cout << "NAME: " << username << "\nDEPOSIT: $" << amt_deposit << "\nWITHDRAWAL: $" << amt_withdraw << endl;
    return 0;
}
