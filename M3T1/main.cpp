#include <iostream>

using namespace std;
/*
Ask the user to enter the length and width of two rectangles, then display the area of both.

Part 2: Add Additional Features

Ask the user to enter the length and width of two rectangles, then display the area of both.

Tell the user which rectangle has the larger area, or if they are the same area. (Use the if statement for this.)




*/

int main()
{
    double length1;
    double width1;
    double length2;
    double width2;
    double area1;
    double area2;



    cout << "RECTANGLE THINGY\n" << endl;

    cout << "Enter the LENGTH of Rectangle #1: ";
    cin >> length1;

    cout << "Enter the WIDTH of Rectangle #1: ";
    cin >> width1;

    cout << "\n\n";


    cout << "Enter the LENGTH of Rectangle #2: ";
    cin >> length2;

    cout << "Enter the WIDTH of Rectangle #2: ";
    cin >> width2;
    cout << "\n\n--------------------------------------------\n\n";


    area1 = length1 * width1;
    area2 = length2 * width2;



    cout << "RECTANGLE #1:\n" << "Length: " << length1 << "\nWidth: " << width1 << "\nArea: " << area1;

    cout << "\n\n";

    cout << "RECTANGLE #2:\n" << "Length: " << length2 << "\nWidth: " << width2 << "\nArea: " << area2;

    cout << "\n\n";


    if (area1 > area2){
        cout << "Rectangle #1 has the larger area.";
    }

    if (area2 > area1){
        cout << "Rectangle #2 has the larger area.";
    }

    if (area1 == area2){
        cout << "Both Rectangles have the same area!";
    }

    return 0;
}
