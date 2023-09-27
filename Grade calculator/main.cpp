#include <iostream>

using namespace std;

int main()
{
    const int POINT_SCALE = 10;

    cout << "Number Grade to Letter Grade\n" << endl;

    int grade_num;
    string letter_grade = "NO GRADE";

    cout << "Enter your number grade: ";
    cin >> grade_num;


    if (grade_num >= 100 - POINT_SCALE){
        letter_grade = "A";
    }

    else if (grade_num >= 100 - 2 * POINT_SCALE){
        letter_grade = "B";
    }

    else if (grade_num >= 100 - 3 * POINT_SCALE){
        letter_grade = "C";
    }

    else if (grade_num >= 100 - 4 * POINT_SCALE){
        letter_grade = "D";
    }

    else if (grade_num < 100 - 4 * POINT_SCALE){
        letter_grade = "F";
    }

    else{
        cout << "INVALID GRADE\n\n";
    }


    cout << "A grade of " << grade_num << " is " << letter_grade;


    return 0;
}
