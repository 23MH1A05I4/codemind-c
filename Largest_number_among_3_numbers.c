#include<stdio.h>
int main()
{
    int Num1,Num2,Num3;
    scanf("%d%d%d",&Num1,&Num2,&Num3);
    if((Num3>Num1)&&(Num3>Num2))
    printf("%d",Num3);
    else if((Num1>Num2)&&(Num1>Num3))
    printf("%d",Num1);
    else
    {
        printf("%d",Num2);
    }
}