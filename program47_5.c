/*
5.Write a recursive program which display below pattern. 
Output : a b c d e f
*/
#include<stdio.h>

// void Display()
// {
//     int i=1;
//     char ch='a';
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
    static char ch='a';
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