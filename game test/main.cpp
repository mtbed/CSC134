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

int coin_amt = 0;


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

 // Make a path display shortly. have them follow the path 'in the dark'

 for (int y = 0; y < position_max; y++) {
            for (int x = 0; x < position_max; x++) {


                    if (position_x == x && position_y == y){
                        cout << player_model;
                    }
                    else if (path[x] == 8 && path[y] == 6){
                        cout << chest_model;
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

        cout << "COINS: " << coin_amt;
        cout << "POSITION.X: " << position_x << "\nPOSITION.Y: " << position_y << endl;


}

bool check_walkable(string direction){
bool walkable; //0 == false, 1 == true
int prev_position_x = position_x;
int prev_position_y = position_y;

// FAR BOUNDARIES

if (direction == "up" && position_y > position_min){
    walkable = true;
}

else if (direction == "down" && position_y < position_max -1){
    walkable = true;
}
else if (direction == "left" && position_x > position_min){
    walkable = true;
}
else if (direction == "right" && position_x < position_max -1){
    walkable = true;

}


if (walkable == true){

 // Make a path display shortly. have them follow the path 'in the dark'
 for (int y = 0; y < position_max; y++) {
            for (int x = 0; x < position_max; x++) {


                    if (position_y == 1 && position_x < 6){
                        walkable = true;
                    }
                    else if(position_y == 2 && position_x > 4){
                        walkable = true;
                    }

                    else if (position_y == 6 && position_x > 1 && position_x){
                        walkable = true;
                    }

                    else if (position_x == 5 && position_y < 8 && position_y > 1){
                        walkable = true;
                    }
                    else if (position_y == 4 && position_x > 3 && position_x < 7){
                       walkable = true;
                    }
                    else if (position_y == 8 && position_x > 0 && position_x < 8){
                        walkable = true;
                    }
                    else if (position_x == 8 && position_y < 9 && position_y > 5){
                        walkable = true;
                    }


                    else{
                        walkable = false;
                    }

                    if (position_x == 7 && position_y == 6){
                        walkable = false;
                    }
            }

        }




}


if (walkable == false){
        if (direction == "up")
            position_y = position_y + 1;



        if (direction == "down"){
            position_y = position_y - 1;

        }
        else if (direction == "left"){
            position_x = position_x + 1;

        }
        else if (direction == "right"){
            position_x = position_x - 1;
        }


}







// TODO
// FORCE CHARACTER ON THE PATH





return walkable;
}


int main()
{
    char ch=0;
    cout << "\nDARK CORN MAZE TYPE GAME\n\n\n\n";
    cout << "PRESS [ENTER] TO START\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    cout << "Press Q to quit";

    ch = getch();
    switch(ch)
    {
    case '\r':
        system("cls");
        stage1();
    }


    do
    {
        ch = getch();

        switch(ch)
        {
            case 'W':
            case 'w':
               //cout << "W was pressed \n";
               // only move if new pos is not <0 or >= MAX_Y
               if (check_walkable("up")){
                position_y = position_y - 1;
                system("cls");
                stage1();
               }




               if (check_walkable("up") == false){
                system("cls");
                stage1();
                cout << "YOU HIT A WALL!" << endl;
               }
                break;
            case 'A':
            case 'a':
                //cout << "A was pressed \n";
                if (check_walkable("left")){
                position_x = position_x - 1;
                system("cls");
                stage1();
               }



               if (check_walkable("left") == false){
                system("cls");
                stage1();
                cout << "YOU HIT A WALL!" << endl;
               }
                break;
            case 's':
            case 'S':
                //cout << "S was pressed \n";
                if (check_walkable("down")){
                position_y = position_y + 1;
                system("cls");
                stage1();
               }


               if (check_walkable("down") == false){
                system("cls");
                stage1();
                cout << "YOU HIT A WALL!" << endl;
               }

                break;
            case 'D':
            case 'd':
                //cout << "D was pressed \n";
                if (check_walkable("right")){
                position_x = position_x + 1;
                system("cls");
                stage1();
               }


                if (check_walkable("right") == false){
                system("cls");
                stage1();
                cout << "YOU HIT A WALL!" << endl;
               }
                break;
            case 'l':
            case 'L':
                stage1();

        }

    }while (ch != 'Q' && ch!='q');

}



