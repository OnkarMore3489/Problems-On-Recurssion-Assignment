/*
4.Write a recursive program which display below pattern. 
Input : 6
Output : A B C D E F
*/
#include<stdio.h>

// void Display(int iNo)
// {
//     int i=1;
//     char ch='A';

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
    static char ch='A';

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