#include <iostream>

using namespace std;

int main()
{
    int num_pizza;
    int num_slices_per;
    int visitors;
    int total_slices;
    int slices_eaten;
    int amt_left;



    cout << "How many pizzas to order?" << endl;
    cin >> num_pizza;

    cout << "How many slices per pizza?" << endl;
    cin >> num_slices_per;

    cout << "How many visitors are coming?" << endl;
    cin >> visitors;


    total_slices = num_pizza * num_slices_per;
    cout << "\n\nTOTAL SLICES: " << total_slices << endl;

    slices_eaten = visitors * 3;
    amt_left = total_slices - slices_eaten;

    cout << "With " << num_pizza << " pizzas, and " << num_slices_per << " slices per pizza, we have a total of " << total_slices << " slices.\nIf each visitor eats 3 slices, we will have " << amt_left << " slices leftover.\n\n";
    return 0;
}
