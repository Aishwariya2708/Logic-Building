//3. write a program which  accept string from user and toggle  case.

#include<stdio.h>
void  strtogglex(char *str)
{

    while(*str !='\0')
    {
        
    if((*str>='a')&&(*str<='z'))
    {
     *str=*str- 32;
    }
    else if ((*str>='A')&&(*str<='Z'))
    {
     *str=*str+ 32;
    }

    str++;
  }
}
int main()
{
    char Arr[20];

    printf("Enter string:\n");
    scanf("%[^'\n']s",Arr);

    strtogglex(Arr);

    printf("Modified string is %s",Arr);

    return 0;
}