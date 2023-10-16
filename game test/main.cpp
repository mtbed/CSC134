#include <iostream>
#include <conio.h>
using namespace std;



int print_screen() {
    char input;
    do {
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                cout << " _";
            }
            cout << endl;
        }
        cout << "Press enter to continue or any other key to exit: ";
        cin.get(input);
    } while (input == '\n');

    return 0;
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
               cout << "W was pressed \n";
                break;
            case 'A':
            case 'a':
                cout << "A was pressed \n";
                break;
            case 's':
            case 'S':
                cout << "S was pressed \n";
                break;
            case 'D':
            case 'd':
                cout << "D was pressed \n";
                break;
            case 'l':
            case 'L':
                print_screen();

        }

    }while (ch != 'Q' && ch!='q');
}



