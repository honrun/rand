#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include "softRand.h"


int main(void)
{
    int32_t iValue = 0, iCnt = 64, i = 0;


    printf("\n\rsoft rand test.\r\n");

    for(i = 0; i < iCnt; ++i)
    {
        if(i % 8 == 0)
            printf("\r\n");

        iValue = uiSoftRand() % iCnt;

        printf("%03d\t", iValue);
    }

    printf("\r\n");


    return 0;
}
