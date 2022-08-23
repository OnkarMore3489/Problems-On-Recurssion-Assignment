/*
2. Write a recursive program which accept number from user and return 
largest digit
Input : 87983
Output : 9
*/
#include<stdio.h>

// int Max(int iNo)
// {
//     int idigit=0;
//     int iMax=iNo%10;

//     while(iNo!=0)
//     {
//         idigit=iNo%10;
//         if(idigit > iMax)
//         {
//             iMax=idigit;
//         }
//         iNo=iNo/10;
//     }
//     return iMax;
// }

int Max(int iNo,int i)
{
    static int idigit1=i;
    static int idigit=0;

    if(iNo!=0)
    {
        idigit=iNo%10;
        if(idigit > idigit1)
        {
            idigit1=idigit;
        }
        iNo=iNo/10;
        Max(iNo,idigit1);
    }
    return idigit1;
}
int main()
{
    int iValue=0,iRet=0,idigit=0;

    printf("Enter the Number : ");
    scanf("%d",&iValue);

    int i=iValue%10;
    iRet=Max(iValue,i);
    printf("Maximum digit in the Number is : %d\n",iRet);
    return 0;
}