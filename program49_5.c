/*
5. Write a recursive program which accept number from user and return its 
product of digits. 
Input : 523
Output : 30
*/
#include<stdio.h>

// int Mult(int iNo)
// {
//     int iMult=1;

//     while(iNo!=0)
//     {
//         iMult*=iNo%10;
//         iNo=iNo/10;
//     }
//     return iMult;
// }

int Mult(int iNo)
{
    static int iMult=1;

    if(iNo!=0)
    {
        iMult*=iNo%10;
        iNo=iNo/10;
        Mult(iNo);
    }
    return iMult;
}
int main()
{
    int iValue=0,iRet=0;
    
    printf("Enter the Number : ");
    scanf("%d",&iValue);

    iRet=Mult(iValue);
    printf("Multiplication of digit is : %d\n",iRet);
    return 0;
}