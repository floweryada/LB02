#include <iostream>
#include <fstream>
#include <conio.h>
#include <windows.h>
#include <cstring>
#include "LB02.h"

void myMenu(Vector a, Vector b, Vector c);

using namespace std;

int main()
{
    Vector a, b, c;
    myMenu(a, b, c);
    return 0;
}

void myMenu(Vector a, Vector b, Vector c)
{
    char enterNumber;
    int scalar;

    while(true)
    {
        system("cls");
        cout << "Hello!\n " << endl;
        enterVector (a);
        enterVector (b);

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
            c = sumVectors (a, b);
            outVector (c);
            system("pause");
        }
        if( enterNumber == '2')
        {
            system("cls");
            c = subctractVectors (a, b);
            outVector (c);
            system("pause");
        }
        if( enterNumber == '3')
        {
            system("cls");
            int scalar;
            cout << "Enter the scalar: ";
            cin >> scalar;
            c = multiplyVectorByScalar (a, scalar);
            cout << "The First ";
            outVector(c);
            cout << endl;
            c = multiplyVectorByScalar (b, scalar);
            cout << "The Second ";
            outVector(c);
            cout << endl;
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
            c = vectorProductOfVectors (a, b);
            outVector (c);
            cout << endl;
            system("pause");
        }
    }
    system("pause");
}
