/*
2. Write a recursive program which accept number from user and return 
summation of its digits.
Input : 879
Output : 24
*/
#include<stdio.h>

// int Sum(int iNo)
// {
//     int iSum=0;

//     while(iNo!=0)
//     {
//         iSum+=iNo%10;
//         iNo=iNo/10;
//     }
//     return iSum;
// }

int Sum(int iNo)
{
    static int iSum=0;

    if(iNo!=0)
    {
        iSum+=iNo%10;
        iNo=iNo/10;
        Sum(iNo);
    }
    return iSum;
}
int main()
{
    int iValue=0,iRet=0;
    
    printf("Enter the Number : ");
    scanf("%d",&iValue);

    iRet=Sum(iValue);
    printf("Addition of digit is : %d\n",iRet);
    return 0;
}