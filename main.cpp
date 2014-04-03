#include <iostream>
#include <fstream>
#include <conio.h>
#include <windows.h>
#include <cstring>
#include "LB02.h"

void myMenu(Vector a, Vector b, Vector c, Vector d);

using namespace std;

int main()
{
    Vector a, b;
    Vector c, d;
    myMenu(a, b, c, d);
    return 0;
}

void myMenu(Vector a, Vector b, Vector c, Vector d)
{
    char enterNumber;
    int scalar;

    while(true)
    {
        system("cls");
        cout << "Hello!\n " << endl;
        enterVectors (a, b);

        cout << "If You want to: " << endl;
        cout << "   Exit, please, press <0>\n";
        cout << "   Sum two Vectors, please, press <1>\n";
        cout << "   Subtract two Vectors, please, press <2>\n";
        cout << "   Multiply Vector by scalar, please, press <3>\n";
        cout << "   Find scalar product of two Vectors, please, press <4>\n";
        cout << "   Find vector product of two Vectors, please, press <5>\n";

        cin >> enterNumber;

        if( enterNumber == '0')
        {
            system("cls");
            exit(0);
        }

        if( enterNumber == '1')
        {
            system("cls");
            sumVectors (a, b, c);
            system("pause");
        }
        if( enterNumber == '2')
        {
            system("cls");
            subctractVectors (a, b, c);

            system("pause");
        }
        if( enterNumber == '3')
        {
            system("cls");
            int scalar;
            cout << "Enter the scalar: ";
            cin >> scalar;
            multiplyVectorByScalar (a, b, scalar, c, d);

           system("pause");
        }
        if( enterNumber == '4')
        {
            system("cls");
            scalarProductOfVectors (a, b);
            cout << endl;
            system("pause");
        }
        if( enterNumber == '5')
        {
            system("cls");
            vectorProductOfVectors (a, b, c);
            cout << endl;
            system("pause");
        }
    }
    system("pause");


}
