#include <stdio.h>
#include <stdlib.h>
#include "Vector3D.h"

#define TEST3DVEC_COUNTOF_COORDINATES   6   /* 2 vectors with x, y, z */

/* Fill vectors by user from keyboard 
    return 0 if OK, -1 if ERROR */
int Test3DVecFillVectors(SVector3D* psv1, SVector3D* psv2)
{
    unsigned i = 0;

    if(!psv1 || !psv2)
        return -1;

    int* mCoordinates[TEST3DVEC_COUNTOF_COORDINATES] = {&psv1->X, &psv1->Y, &psv1->Z,
                                                        &psv2->X, &psv2->Y, &psv2->Z};

    char msMsg[TEST3DVEC_COUNTOF_COORDINATES][25] = {"Enter x1:", "Enter y1:", "Enter z1:",
                                                            "Enter x2:", "Enter y2:", "Enter z2:"};

    for(i = 0; i < TEST3DVEC_COUNTOF_COORDINATES; ++i)
    {
        int val = 0;

        printf("%s",msMsg[i]);
        if(1 != scanf("%d", mCoordinates[i]))
        {
            scanf("%*s");
            return -1;
        }
    }

    return 0;
}

/* Print vector coordinates 
    return 0 if OK, -1 if ERROR */
int Test3DVecPrintCoordinates(SVector3D* psv)
{
    if(!psv)
        return -1;

    printf("Result: [%d, %d, %d] \n", psv->X, psv->Y, psv->Z);

    return 0;
}

/* test Sum 2 vectors */
int Test3DVecSum(void)
{
    SVector3D sv1;
    SVector3D sv2;
    SVector3D svRes;

    printf("*********************************\n");
    printf("*********************************\n");
    printf("*********************************\n");
     printf("Testing sum of 2 3D vectors with coordinates[x1, y1, z1] and [x2, y2, z2] \n"); 
     printf("User must enter coordinates both vectors\n");
     printf("from the keyboard. The result is calculated as:\n");
     printf("[x1+x2, y1+y2, z1+z2]\n");

    if(0 != Test3DVecFillVectors(&sv1, &sv2))
    {
        printf("!!! FATAL ERROR !!!\n");
        return -1;
    }

    if(0 != Vector3DSum(&sv1, &sv2, &svRes))
    {
        printf("Error in 3D vec module... \n");
        return -1;
    }

    if(0 != Test3DVecPrintCoordinates(&svRes))
    {
        printf("!!! FATAL ERROR !!!\n");
        return -1;
    }

    return 0;
    
}

int main()
{
    char nTestType = -1;

    printf("*********************************\n");
    printf("Simple test of 3D vector module\n");

    while(1)
    {
        printf("*********************************\n");
        printf("Enter type of operation: 0 - sum, 1 - sub, 2 - dot, 3 - cross, q - for close programm \n");

        nTestType = getchar();

        switch(nTestType)
        {
            case '0':
            {
                Test3DVecSum();
                break;
            }

            case '1':
            {
                break;
            }
            case '2':
            {

            }
            case '3':
            {

            }

            case 'q': return 0;
            case 10: continue; /* hande Enter key*/
            default: printf ("Unknown test type, try again... \n");
        }
    }

     return 0;
}