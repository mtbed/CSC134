#include <iostream>

using namespace std;

int main()
{
double length;
double width;
double height;
double volume;

const double COST_PER_CUBIC_FOOT = 0.3;
const double PRICE_PER_CUBIC_FOOT = 0.52;

double cost;
double price;
double profit;

    cout << "Hello, this program will calculate the following:\n" << endl;
    cout << "-Volume (in feet) \n-Cost \n-Customer price \n-Profit of any crate GCI builds \n\n" << endl;


    cout << "Enter the dimensions of your crate (in feet):\n";
    cout << "Length: ";
    cin >> length;
    cout << "Width: ";
    cin >> width;
    cout << "Height: ";
    cin >> height;

    volume = length * width * height;
    cost = volume * COST_PER_CUBIC_FOOT;
    price = volume * PRICE_PER_CUBIC_FOOT;
    profit = price - cost;

    cout << "\n\n ----------------------------- \n\n";
    cout << "CALCULATIONS: \n\n";


    cout << "Volume: " << volume << "ft" << endl;
    cout << "Cost: $" << cost << endl;
    cout << "Price: $" << price << endl;
    cout << "Profit: $" << profit << endl;





    return 0;
}
