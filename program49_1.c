/*
1. Write a recursive program which accept number from user and display below 
pattern. 
Input : 5
Output : 5 * 4 * 3 * 2 * 1 *
*/
#include<stdio.h>

// void Display(int iNo)
// {
//     int i=iNo;

//     while(i>=1)
//     {
//         printf("%d  *  ",i);
//         i--;
//     }
// }

void Display(int iNo)
{
    if(iNo>=1)
    {
        printf("%d  *  ",iNo);
        iNo--;
        Display(iNo);
    }
}
int main()
{
    int iValue=0;
    
    printf("Enter the Number : ");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;
}