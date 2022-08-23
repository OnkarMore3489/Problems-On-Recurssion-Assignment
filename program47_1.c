/*
1. Write a recursive program which display below pattern. 
Output : * * * * *
*/
#include<stdio.h>

// void Display()
// {
//     int i=0;

//     while(i<5)
//     {
//         printf("*\t");
//         i++;
//     }
// }

void Display()
{
    static int i=0;

    if(i<5)
    {
        printf("*\t");
        i++;
        Display();
    }
}
int main()
{
    Display();
    return 0;
}