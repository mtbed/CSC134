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

    for (int i = 0; grade_num <= 100 - i * POINT_SCALE; i++){

        if (i <= 1){
            letter_grade = "A";
        }

        else if (i == 2){
            letter_grade = "B";
        }

        else if (i == 3){
            letter_grade  = "C";
        }

        else if (i == 4){
            letter_grade = "D";
        }

        else if (i <= 5){
            letter_grade = "F";
        }

    }




    cout << "A grade of " << grade_num << " is " << letter_grade;


    return 0;
}
