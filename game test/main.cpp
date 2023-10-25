#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;

string player_model = " O";
string path_model = " -";
string chest_model = " m";
string enemy_model = " X";
string finish_model = "[]";
string blank_model = " #";
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
                    cout << blank_model;

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
    int path [] = {0,1,2,3,4,5,6,7,8,9};
    int path_y [] = {0,1,2,3,4,5,6,7,8,9};
 // Make a path display shortly. have them follow the path 'in the dark'
 for (int y = 0; y < position_max; y++) {
            for (int x = 0; x < position_max; x++) {


                if (position_x == x && position_y == y){
                        cout << player_model;
                    }
                    else if (path[y] == 1 && path[x] < 6){
                        cout << path_model;
                    }
                    else if(path[y] == 2 && path[x] > 4){
                        cout << path_model;
                    }

                    else if (path[y] == 6 && path[x] > 1 && path[x < 7]){
                        cout << path_model;
                    }

                    else if (path[x] == 5 && path[y] < 8 && path[y] > 1){
                        cout << path_model;
                    }
                    else if (path[y] == 4 && path[x] > 3 && path[x] < 7){
                        cout << path_model;
                    }
                    else if (path[y] == 8 && path[x] > 0 && path[x] < 8){
                        cout << path_model;
                    }
                    else if (path[x] == 8 && path[y] < 9 && path[y] > 5){
                        cout << path_model;
                    }

                    else{
                        cout << blank_model;
                    }


            }
            cout << endl;
        }




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
               stage1();
                break;
            case 'A':
            case 'a':
                //cout << "A was pressed \n";
                position_x = position_x - 1;
                system("cls");
                stage1();
                break;
            case 's':
            case 'S':
                //cout << "S was pressed \n";
                position_y = position_y + 1;
                system("cls");
                stage1();
                break;
            case 'D':
            case 'd':
                //cout << "D was pressed \n";
                position_x = position_x + 1;
                system("cls");
                stage1();
                break;
            case 'l':
            case 'L':
                stage1();

        }

    }while (ch != 'Q' && ch!='q');

}



