/*
4. Write a recursive program which accept number from user and return 
smallest digit
Input : 87983
Output : 3
*/
#include<stdio.h>

// int Min(int iNo)
// {
//     int idigit=0;
//     int iMin=iNo%10;

//     while(iNo!=0)
//     {
//         idigit=iNo%10;
//         if(idigit < iMax)
//         {
//             iMin=idigit;
//         }
//         iNo=iNo/10;
//     }
//     return iMin;
// }

int Min(int iNo,int i)
{
    static int idigit1=i;
    static int idigit=0;

    if(iNo!=0)
    {
        idigit=iNo%10;
        if(idigit < idigit1)
        {
            idigit1=idigit;
        }
        iNo=iNo/10;
        Min(iNo,idigit1);
    }
    return idigit1;
}
int main()
{
    int iValue=0,iRet=0,idigit=0;

    printf("Enter the Number : ");
    scanf("%d",&iValue);

    int i=iValue%10;
    iRet=Min(iValue,i);
    printf("Minimum digit in the Number is : %d\n",iRet);
    return 0;
}