/* 2. Write a recursive program which accept number  from user and return largest digit.
 Input: 87983
 Output: 9
 */

 #include<stdio.h>

int Max (int iNo)
{
    static int iMax = 0;
    int iDigit = 0;

    if(iNo < 0)         
        iNo = -iNo;

    if(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit > iMax)
        {
            iMax = iDigit;
        }
        Max(iNo / 10);   
    }
    return iMax;

}
 int main()
 {
  int iValue=0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);  

    iRet = Max(iValue);

    printf("%d\n", iRet);

 }