#include "Vector3D.h"

/* ******************************************************************************* */
int Vector3DSum(const SVector3D* psv1, const SVector3D* psv2, SVector3D* psResult)
{
    if(!psv1 || !psv2 || psResult)
        return -1;

    psResult->X = psv1->X + psv2->X;
    psResult->Y = psv1->Y + psv2->Y;
    psResult->Z = psv1->Z + psv2->Z;

    return 0;
}
/* ******************************************************************************* */
int Vector3DSub(const SVector3D* psv1, const SVector3D* psv2, SVector3D* psResult)
{
     if(!psv1 || !psv2 || psResult)
        return -1;
    
    psResult->X = psv1->X - psv2->X;
    psResult->Y = psv1->Y - psv2->Y;
    psResult->Z = psv1->Z - psv2->Z;

    return 0;
}
/* ******************************************************************************* */
int Vector3DDot(const SVector3D* psv1, const SVector3D* psv2, int* pResult)
{
     if(!psv1 || !psv2 || pResult)
        return -1;

    *pResult = psv1->X*psv2->X + psv1->Y*psv2->Y + psv1->Z*psv2->Z;

    return 0;
}
/* ******************************************************************************* */