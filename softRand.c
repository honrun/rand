/*
 * Author: honrun
 */

#include <stdint.h>



static uint32_t st_uiRandValue = 0;

/* ������������� */
void vSoftSRand(uint32_t uiSRandValue)
{
    st_uiRandValue = uiSRandValue;
}

/* ��ȡһ������� */
uint32_t uiSoftRand(void)
{
    const uint32_t uiMultiplier = 1103515245, uiIncrement = 1;

    /* Utility function to generate a pseudo random number. */
    st_uiRandValue = (uiMultiplier * st_uiRandValue) + uiIncrement;

    return st_uiRandValue;
}
