#include "LB02.h"
#include <fstream>
#include <iostream>
#include <conio.h>
#include <windows.h>
#include <cstring>

using namespace std;

void enterVectors (struct Vector a, struct Vector b)

{
    cout << "Enter Coordinates of two Vectors: \n";
    cin.ignore(1,'\n');

        cout << "X Coordinate Of Vector: ";
        cin >> a.coordinateX;

        cout << "Y Coordinate Of Vector: ";
        cin >> a.coordinateY;

        cout << "Z Coordinate Of Vector: ";
        cin >> a.coordinateZ;
        cout << endl;

        cout << "X Coordinate Of Vector: ";
        cin >> b.coordinateX;

        cout << "Y Coordinate Of Vector: ";
        cin >> b.coordinateY;

        cout << "Z Coordinate Of Vector: ";
        cin >> b.coordinateZ;
        cout << endl;
}

void sumVectors ( Vector a, Vector b, Vector c)
{
            c.coordinateX = a.coordinateX + b.coordinateX,
            c.coordinateY = a.coordinateY + b.coordinateX,
            c.coordinateZ = a.coordinateZ + b.coordinateX;
            outVectors(c);
}

void outVectors(Vector c)
{
    cout << "Coordinates of new Vector: \n";
    cout << c.coordinateX << " " << c.coordinateY << " " << c.coordinateX << endl;
}

void subctractVectors (Vector a, Vector b, Vector c)
{
            c.coordinateX = a.coordinateX;
            c.coordinateY = a.coordinateY;
            c.coordinateZ = a.coordinateZ;
            c.coordinateX = a.coordinateX - b.coordinateX;
            c.coordinateY = a.coordinateY - b.coordinateX;
            c.coordinateZ = a.coordinateZ - b.coordinateX;
            outVectors(c);
}

void multiplyVectorByScalar (Vector a, Vector b, int scalar, Vector c, Vector d)
{
    c.coordinateX = scalar * a.coordinateX,
    c.coordinateY = scalar * a.coordinateY,
    c.coordinateZ = scalar * a.coordinateZ,
    d.coordinateX = scalar * b.coordinateX,
    d.coordinateY = scalar * b.coordinateY,
    d.coordinateZ = scalar * b.coordinateZ;

    cout << "Coordinates of new Vectors: \n" << "The First: ";
    outVectors(c);
    cout << endl;
    cout << "The Second: ";
    outVectors(d);
}

void scalarProductOfVectors (Vector a, Vector b)
{
    cout << "scalar product of two Vectors: ";
    cout << a.coordinateX * b.coordinateX + a.coordinateY * b.coordinateY + a.coordinateZ * b.coordinateZ;
}

void vectorProductOfVectors (Vector a, Vector b, Vector c)
{
    c.coordinateX = a.coordinateY * b.coordinateZ - b.coordinateY * a.coordinateZ;
    c.coordinateY = a.coordinateX * b.coordinateZ - b.coordinateX * a.coordinateZ;
    c.coordinateZ = a.coordinateX * b.coordinateY - b.coordinateX * a.coordinateY;
    outVectors(c);
}
