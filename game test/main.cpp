#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;

string player_model = " O";
string chest_model = " m";
string enemy_model = " X";
string finish_model = " #";
int position_x = 5;
int position_y = 5;

int position_max = 10;
int position_min = 0;


int coins = 0;

int print_screen() {



    //char input;
        for (int i = 0; i < position_max; i++) {
            for (int j = 0; j < position_max; j++) {
                if (j != position_x || i != position_y){
                    cout << " -";

                }
                else if (j == position_x && i == position_y){
                        cout << player_model;
                }
            }
            cout << endl;
        }

    return 0;
}

int stage1()
{




}



int main()
{
    char ch=0;
    cout << "Press Q to quit\n";

    do
    {
        ch = getch();

        switch(ch)
        {
            case 'W':
            case 'w':
               //cout << "W was pressed \n";
               position_y = position_y - 1;
               system("cls");
               print_screen();
                break;
            case 'A':
            case 'a':
                //cout << "A was pressed \n";
                position_x = position_x - 1;
                system("cls");
                print_screen();
                break;
            case 's':
            case 'S':
                //cout << "S was pressed \n";
                position_y = position_y + 1;
                system("cls");
                print_screen();
                break;
            case 'D':
            case 'd':
                //cout << "D was pressed \n";
                position_x = position_x + 1;
                system("cls");
                print_screen();
                break;
            case 'l':
            case 'L':
                print_screen();

        }

    }while (ch != 'Q' && ch!='q');

}



