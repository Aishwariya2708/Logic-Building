//3. Write a Recursive program which display below pattern.
// output: 5 4 3 2 1
#include<stdio.h>

void Display()
{
    static int i=5;   
     
    if(i>=1)
    {
        printf("%d ",i);
        i--;
        Display();
    }
}

int main()
{
    Display();
   

    return 0;
}