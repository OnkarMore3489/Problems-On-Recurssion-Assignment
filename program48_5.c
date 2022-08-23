/*
5.Write a recursive program which display below pattern. 
Input : 6
Output : a b c d e f
*/
#include<stdio.h>

// void Display(int iNo)
// {
//     int i=1;
//     char ch='a';

//     while(i<=iNo)
//     {

//         printf("%c\t",ch);
//         ch++;
//         i++;
//     }
// }

void Display(int iNo)
{
    static int i=1;
    static char ch='a';

    while(i<=iNo)
    {
        printf("%c\t",ch);
        ch++;
        i++;
        Display(iNo);
    }
}
int main()
{
    int iValue = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;
}