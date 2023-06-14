#include<stdio.h>

int ifelse(int number1, int number2);
int trenary(int number1,int number2);

int main()
{
    int number1,number2, big, biig;
    printf("Enter two numbers: ");
    scanf("%d %d",&number1,&number2);

    big = ifelse(number1, number2);
    biig = trenary(number1,number2);
    printf("Bigger number is(trenary): %d\n", biig);

    return 0;
}

int ifelse(int number1, int number2)    //using ifelse
{
    int ifelse;
    if(number1 > number2)
    {
        printf("Bigger number is(ifelse): %d\n",number1);
       ifelse = number1;
    }
    else
    {
        printf("Bigger number is(ifelse): %d\n",number2);
       ifelse = number2;
    }
    return ifelse;
}

int trenary(int number1,int number2)       //using trenary operator
{
    return (number1>number2?number1:number2);
}
