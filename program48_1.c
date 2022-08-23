/*
1. Write a recursive program which display below pattern. 
Input : 5
Output : * * * * *
*/
#include<stdio.h>

// void Display(int iNo)
// {
//     int i=1;
//     while(i<=iNo)
//     {
//         printf("*\t");
//         i++;
//     }
// }

void Display(int iNo)
{
    static int i=1;
    
    if(i<=iNo)
    {
        printf("*\t");
        i++;
        Display(iNo);
    }
}
int main()
{
    int iValue=0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;
}