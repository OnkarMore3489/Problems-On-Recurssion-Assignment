/*
3.Write a recursive program which display below pattern. 
Input : 5
Output : 5 4 3 2 1
*/
#include<stdio.h>

// void Display(int iNo)
// {
//     int i=iNo;
//     while(i>=1)
//     {
//         printf("%d\t",i);
//         i--;
//     }
// }

void Display(int iNo)
{
    if(iNo>=1)
    {
        printf("%d\t",iNo);
        iNo--;
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