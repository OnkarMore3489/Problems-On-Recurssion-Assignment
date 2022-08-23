/*
4. Write a recursive program which accept number from user and return its 
factorial. 
Input : 5
Output : 120
*/
#include<stdio.h>

// int Fact(int iNo)
// {
//     int iFact=1;
//     int i=iNo;

//     while(i>=1)
//     {
//         iFact*=i;
//         i--;
//     }
//     return iFact;
// }

int Fact(int iNo)
{
    static int iFact=1;

    if(iNo!=0)
    {
        iFact*=iNo;
        iNo--;
        Fact(iNo);
    }
    return iFact;
}
int main()
{
    int iValue=0,iRet=0;

    printf("Enter the Number : ");
    scanf("%d",&iValue);

    iRet=Fact(iValue);
    printf("Factorial of Number is : %d\n",iRet);
    return 0;
}