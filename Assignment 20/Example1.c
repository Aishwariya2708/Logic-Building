//1. Accpet N number from user and accept One Another  Number  As No ,check whether No is present or not.


#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0

typedef int bool;

bool Check(int Arr[],int iLength ,int iNo)
{
    int i=0;
for ( i = 0; i < iLength; i++)
    {
        if (Arr[i] == iNo)
        {
            return TRUE;
        }
    }
    return FALSE;

}

int main()
{
 int iSize=0,iRet=0,iCnt=0,iValue=0;
 int * p=NULL;
 bool bRet=FALSE;

 printf("Enter number of elements:\n");
 scanf("%d",&iSize);

 printf("Enter the number:\n");
 scanf("%d",&iValue);

 p=(int *)malloc (iSize * sizeof(int));

 if(p==NULL)
 {
    printf("Unable to allocate the memory ");
    return -1;
 }

 printf("Enter %d elements\n",iSize);
 
 for(iCnt=0;iCnt<iSize;iCnt++)
 {
    printf("Enter element :%d",iCnt+1);
    scanf("%d",&p[iCnt]);
 }

 bRet=Check(p,iSize,iValue);

 if(bRet == TRUE)
 {
    printf("Number is Present");

 }
 else
 {
    printf("Number is not present");
 }
 free(p);

 return 0;

}
