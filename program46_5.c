/*
5. Write a recursive program which accept number from user and return its 
reverse number. 
Input : 523
Output : 325
*/
#include<stdio.h>

// int Reverse(int iNo)
// {
//     int iRev=0;
//     while(iNo!=0)
//     {
//         iRev=(iRev*10)+(iNo%10);
//         iNo=iNo/10;
//     }
//     return iRev;
// }

int Reverse(int iNo)
{
    static int iRev=0;
    if(iNo!=0)
    {
        iRev=(iRev*10)+(iNo%10);
        iNo=iNo/10;
        Reverse(iNo);
    }
    return iRev;
}
int main()
{
    int iValue=0,iRet=0;

    printf("Enter the Number : ");
    scanf("%d",&iValue);

    iRet=Reverse(iValue);
    printf("Reversed Number is :%d",iRet);
    return 0;
}