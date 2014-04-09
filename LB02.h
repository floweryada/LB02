#ifndef LB02_H
#define LB02_H

struct Vector
{
    double coordinateX;
    double coordinateY;
    double coordinateZ;
};

void enterVector (Vector  a);

Vector sumVectors (Vector  a, Vector  b);
Vector outVector(Vector c);
Vector subctractVectors (Vector a, Vector b);
Vector multiplyVectorByScalar (Vector a, int scalar);
Vector scalarProductOfVectors (Vector a,Vector b);
Vector vectorProductOfVectors (Vector a, Vector b);

#endif // LB2_H
