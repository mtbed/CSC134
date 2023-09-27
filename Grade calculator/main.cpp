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

    for (int i = 0; i <= 4; i++){
        if (grade_num >= 100 - i * POINT_SCALE){

            if (i <= 1){
             letter_grade = "A";
            }

            else if (i == 2){
             letter_grade = "B";
            }
            else if (i == 3){
             letter_grade = "C";
            }
            else if (i == 4){
             letter_grade = "D";
            }
        }
        else{
            letter_grade = "F";
        }
    }

/*
    if (grade_num >= 100 - POINT_SCALE){
        letter_grade = "A";
    }

    else if (grade_num >= 100 - POINT_SCALE * 2){
        letter_grade = "B";
    }

    else if (grade_num >= 100 - POINT_SCALE * 3){
        letter_grade = "C";
    }

    else if (grade_num >= 100 - POINT_SCALE * 4){
        letter_grade = "D";
    }

    else if (grade_num < 100 - POINT_SCALE * 4){
        letter_grade = "F";
    }

    else{
        cout << "INVALID GRADE\n\n";
    }

    */


    cout << "A grade of " << grade_num << " is " << letter_grade;


    return 0;
}
