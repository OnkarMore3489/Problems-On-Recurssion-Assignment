/*
4.Write a recursive program which display below pattern. 
Output : A B C D E F
*/
#include<stdio.h>

// void Display()
// {
//     int i=1;
//     char ch='A';
//     while(i<=5)
//     {
//         printf("%c\t",ch);
//         ch++;
//         i++;
//     }
// }

void Display()
{
    static int i=1;
    static char ch='A';
    if(i<=5)
    {
        printf("%c\t",ch);
        ch++;
        i++;
        Display();
    }
}
int main()
{
    Display();
    return 0;
}