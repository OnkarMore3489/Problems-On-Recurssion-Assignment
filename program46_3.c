/*
3. Write a recursive program which accept string from user and count number 
of small characters.
Input : HElloWOrlD
Output : 5
*/
#include<stdio.h>

// int Small(char *str)
// {
//     int iCnt=0;
//     while(*str!='\0')
//     {
//         if((*str >='a') && (*str <='z'))
//         {
//             iCnt++;
//         }
//         str++;
//     }
//     return iCnt;
// }

int Small(char *str)
{
    static int iCnt=0;
    if(*str!='\0')
    {
        if((*str >='a') && (*str <='z'))
        {
            iCnt++;
        }
        str++;
        Small(str);
    }
    return iCnt;
}
int main()
{
    char Arr[20],iRet=0;

    printf("Enter the string : ");
    scanf("%[^'\n']s",Arr);

    iRet=Small(Arr);
    printf("Number of small characters int string is :%d\n",iRet);
    return 0;
}