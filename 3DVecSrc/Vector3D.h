#ifndef VECTOR_3D_H
#define VECTOR_3D_H

/* Vector coordinates in orthonormal basis */
typedef struct
{
    int X;
    int Y;
    int Z;
}SVector3D;

/*  Description: Sum of 2 3D vectors.
    psv1 - pointer to first vector
    psv2 - pointer to second vector
    psResult - pointer to result
    return: 0 if result is OK, -1 if ERROR
*/
int Vector3DSum(const SVector3D* psv1, const SVector3D* psv2, SVector3D* psResult);




#endif /* VECTOR_3D_H */