/*
3. Write a recursive program which accept string from user and count number 
of characters.
Input : Hello
Output : 5
*/
#include<stdio.h>

// int Strlen(char *str)
// {
//     int iCnt=0;

//     while(*str!='\0')
//     {
//         iCnt++;
//         str++;
//     }
//     return iCnt;
// }

int Strlen(char *str)
{
    static int iCnt=0;

    if(*str!='\0')
    {
        iCnt++;
        str++;
        Strlen(str);
    }
    return iCnt;
}
int main()
{
    char Arr[20];

    printf("Enter the string : ");
    scanf("%[^'\n']s",Arr);

    int iRet=Strlen(Arr);
    printf("character in the string is : %d\n",iRet);
    return 0;
}