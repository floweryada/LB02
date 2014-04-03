#ifndef LB02_H
#define LB02_H

struct Vector
{
    double coordinateX;
    double coordinateY;
    double coordinateZ;
};

void enterVectors (Vector  a, Vector  b);

void sumVectors (Vector  a, Vector  b, Vector c);
void outVectors(Vector c);
void subctractVectors (Vector a, Vector b, Vector c);
void multiplyVectorByScalar (Vector a, Vector b, int scalar, Vector c, Vector d);
void scalarProductOfVectors (Vector a,Vector b);
void vectorProductOfVectors (Vector a, Vector b, Vector c);

#endif // LB2_H
