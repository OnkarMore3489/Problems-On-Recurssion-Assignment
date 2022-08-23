/*
1. Write a recursive program which accept string from user and count white 
spaces.
Input : HE llo WOr lD
Output : 3
*/
#include<stdio.h>

// int WhiteSpaces(char *str)
// {
//     int iCnt=0;

//     while(*str!='\0')
//     {
//         if(*str==' ')
//         {
//             iCnt++;
//         }
//         str++;
//     }
//     return iCnt;
// }
int WhiteSpaces(char *str)
{
    static int iCnt=0;

    if(*str!='\0')
    {
        if(*str==' ')
        {
            iCnt++;
        }
        str++;
        WhiteSpaces(str);
    }
    return iCnt;
}
int main()
{
    char Arr[20];
    int iRet=0;

    printf("Enter the String : ");
    scanf("%[^'\n']s",Arr);

    iRet=WhiteSpaces(Arr);
    printf("Number of white spaces int the string is : %d\n",iRet);
    return 0;
}