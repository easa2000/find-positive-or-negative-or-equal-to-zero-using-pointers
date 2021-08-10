// find positive or negative or equal to zero
#include<stdio.h>
void main()
{
    int num, *pnum = &num;
    printf("\n Enter a number: ");
    scanf("%d",pnum);
    if(*pnum > 0)
       printf("\n %d is positive.",*pnum);
    else if(*pnum < 0)
       printf("\n %d is negative.",*pnum);
    else
       printf("%d is equal to zero",*pnum);
}
