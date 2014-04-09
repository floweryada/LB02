#include "LB02.h"
#include <fstream>
#include <iostream>
#include <conio.h>
#include <windows.h>
#include <cstring>

using namespace std;

void enterVector (Vector a)

{
    cout << "Enter Coordinate of Vector: \n";
    cin.ignore(1,'\n');

        cout << "X Coordinate Of Vector: ";
        cin >> a.coordinateX;

        cout << "Y Coordinate Of Vector: ";
        cin >> a.coordinateY;

        cout << "Z Coordinate Of Vector: ";
        cin >> a.coordinateZ;
        cout << endl;

}

Vector sumVectors (Vector a, Vector b)
{
            Vector c;
            c.coordinateX = a.coordinateX + b.coordinateX,
            c.coordinateY = a.coordinateY + b.coordinateX,
            c.coordinateZ = a.coordinateZ + b.coordinateX;
            return c;
}

Vector outVector(Vector c)
{
    cout << "Coordinates of new Vector: \n";
    cout << c.coordinateX << " " << c.coordinateY << " " << c.coordinateX << endl;
}

Vector subctractVectors (Vector a, Vector b)
{
            Vector c;
            c.coordinateX = a.coordinateX - b.coordinateX;
            c.coordinateY = a.coordinateY - b.coordinateX;
            c.coordinateZ = a.coordinateZ - b.coordinateX;
            return c;
}

Vector multiplyVectorByScalar (Vector a, int scalar)
{
    Vector c;
    c.coordinateX = scalar * a.coordinateX,
    c.coordinateY = scalar * a.coordinateY,
    c.coordinateZ = scalar * a.coordinateZ;
    return c;
}

Vector scalarProductOfVectors (Vector a, Vector b)
{
    cout << "scalar product of two Vectors: ";
    cout << a.coordinateX * b.coordinateX + a.coordinateY * b.coordinateY + a.coordinateZ * b.coordinateZ;
}

Vector vectorProductOfVectors (Vector a, Vector b)
{
    Vector c;
    c.coordinateX = a.coordinateY * b.coordinateZ - b.coordinateY * a.coordinateZ;
    c.coordinateY = a.coordinateX * b.coordinateZ - b.coordinateX * a.coordinateZ;
    c.coordinateZ = a.coordinateX * b.coordinateY - b.coordinateX * a.coordinateY;
    return c;
}
