#include <iostream>
#include <cmath>
//M5HW1
//Matthew Bedsole
//11/6/23
//CSC-134


using namespace std;



int menu()
{
    int selection;
    bool keep_going = true;
    bool bad_selection;


    while (keep_going == true)
    {
        cout << "M5HW1 PROGRAM\n" << endl;
        cout << "Please select an application:\n\n\n";

        cout << "1. Rainfall Calculator\n2. Box Volume\n3. Roman Numeral\n4. Geometry Calculator\n5. Distance Traveled\n6. Quit\n\n";

        if (bad_selection){
            cout << "INVALID SELECTION\n\nPlease make a selection 1-6" << endl;
        }

        cin >> selection;

        if (selection < 1 || selection > 6){

            system("cls");
            keep_going = true;
            bad_selection = true;



        }
        else{
            keep_going = false;
        }


    }


    return selection;
}


int rainfall()
{
string month1;
string month2;
string month3;

double inches1;
double inches2;
double inches3;

double avg;


    cout << "RAINFALL CALCULATOR\n\n\n\n";


    cout << "Enter month 1: ";
    cin >> month1;
    cout << "Enter rainfall for " << month1 << " in inches: ";
    cin >> inches1;


    cout << "Enter month 2: ";
    cin >> month2;
    cout << "Enter rainfall for " << month2 << " in inches: ";
    cin >> inches2;

    cout << "Enter month 3: ";
    cin >> month3;
    cout << "Enter rainfall for " << month3 << " in inches: ";
    cin >> inches3;


    avg = (inches1 + inches2 + inches3)/3;
    cout << "\n\n";
    cout << "The average rainfall for " << month1 << ", " << month2 << ", and " << month3 << " is " << avg << " inches.";


}


int box()
{
    double length;
    double width;
    double height;

    double volume;
    cout << "BOX CALCULATOR\n\n\n";



    cout << "Enter length of box: \n";
    cin >> length;

    while (length <= 0){
        cout << "Invalid length!\nPlease enter a value above 0\n";
        cout << "Enter length of box: \n";
        cin >> length;
    }


    cout << "Enter width of box: \n";
    cin >> width;

    while (width <= 0){
        cout << "Invalid width!\nPlease enter a value above 0\n";
        cout << "Enter width of box: \n";
        cin >> width;
    }


    cout << "Enter height of box: \n";
    cin >> height;

    while (height <= 0){
        cout << "Invalid height!\nPlease enter a value above 0\n";
        cout << "Enter height of box: \n";
        cin >> height;
    }


    volume = length * width * height;

    cout << "Volume: " << volume;


}


int roman_numeral()
{
int num1;
string rn_1 = "I";
string rn_2 = "II";
string rn_3 = "III";
string rn_4 = "IV";
string rn_5 = "V";
string rn_6 = "VI";
string rn_7 = "VII";
string rn_8 = "VIII";
string rn_9 = "IX";
string rn_10 = "X";

string numeral;

    cout << "ROMAN NUMERAL";


    cout << "\n\n\nEnter a number (1 - 10): ";
    cin >> num1;
    cout << "\n\n";

    while (num1 < 1 || num1 > 10)
    {
        cout << "Invalid number. Select a number (1 - 10): ";
        cin >> num1;
        cout << "\n\n";
    }

    if (num1 == 1)
    {
        numeral = rn_1;
    }
    else if (num1 == 2)
    {
        numeral = rn_2;
    }
    else if (num1 == 3)
    {
        numeral = rn_3;
    }
    else if (num1 == 4)
    {
        numeral = rn_4;
    }
    else if (num1 == 5)
    {
        numeral = rn_5;
    }
    else if (num1 == 6)
    {
        numeral = rn_6;
    }
    else if (num1 == 7)
    {
        numeral = rn_7;
    }
    else if (num1 == 8)
    {
        numeral = rn_8;
    }
    else if (num1 == 9)
    {
        numeral = rn_9;
    }
    else if (num1 == 10)
    {
        numeral = rn_10;
    }




    cout << "The Roman numeral version of " << num1 << " is " << numeral << ".";

}

int geometry()
{
    int selection;
    bool keep_going = true;
    double area;


    while (keep_going){
        cout << "GEOMETRY CALCULATOR\n\n\n";

        cout << "1. Calculate the Area of a Circle\n";
        cout << "2. Calculate the Area of a Rectangle\n";
        cout << "3. Calculate the Area of a Triangle\n";
        cout << "4. Quit\n";
        cout << "Enter your choice (1-4): ";
        cin >> selection;

        if (selection >= 1 && selection <= 4){
            keep_going = false;
        }
        else{
            keep_going = true;
        }

    }


    if (selection == 1){
        double radius;
        double pi =  atan(1)*4;
        cout << "\nEnter radius: ";
        cin >> radius;

        area = pi * pow(radius, 2);
        cout << "\nArea: " << area;

    }

    else if (selection == 2){
        double length, width;
        cout << "\nEnter length: ";
        cin >> length;

        cout << "\nEnter width: ";
        cin >> width;

        area = length * width;
        cout << "\nArea: " << area;
    }

    else if (selection == 3){
        double length, width;
        cout << "\nEnter length: ";
        cin >> length;

        cout << "\n\nEnter width: ";
        cin >> width;

        area = (length * width)/2;
        cout << "\nArea: " << area;
    }

    else if (selection == 4){

    }


}

int distance_calc()
{
    double speed;
    double time;
    double distance;

    cout << "DISTANCE TRAVELED";


    cout << "\n\n\nWhat is the speed of the vehicle in mph? ";
    cin >> speed;

    cout << "\nHow many hours has it traveled? ";
    cin >> time;

    distance = speed * time;



    cout << "\nMPH\t\tHOURS\t\tMILES TRAVELED\n";
    cout << "---------------------------------------------------\n";

    cout << speed << "\t\t" << time << "\t\t" << distance;

}

bool repeat()
{
    char selection;
    bool keep_going = true;

    while (keep_going)
        {
            cout << "\n\nContinue to main menu? (Y/N):";
            cin >> selection;


            if (selection == 'y' || selection == 'Y'){
                keep_going = false;
                return true;
            }
            else if (selection == 'n' || selection == 'N'){
                keep_going = false;
                return false;
            }
            else {
                cout << "\nPlease enter a valid selection.";
            }

        }
}




int main()
{
bool keep_going = true;

while (keep_going == true){

    system("cls");

    int selection = menu();

    system("cls");
    if (selection == 1){
            rainfall();
        }
        else if (selection == 2){
            box();
        }
        else if (selection == 3){
            roman_numeral();
        }
        else if (selection == 4){
            geometry();
        }
        else if (selection == 5){
            distance_calc();
        }
    keep_going = repeat();
}
    return 0;
}
