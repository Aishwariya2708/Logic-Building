// 3.Write  a program which accept number from user and print even factor of that number



#include<stdio.h>

void DisplayEvenFactors(int iNo)
{
    int i = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;  
    }

    for(i = 1; i < iNo; i++)  
    {
        if((iNo % i == 0) && (i % 2 == 0))  
        {
            printf("%d ", i);
        }
    }

    printf("\n");  
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    DisplayEvenFactors(iValue);

    return 0;
}
