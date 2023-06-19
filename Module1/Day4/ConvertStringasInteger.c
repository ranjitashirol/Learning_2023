#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    printf("enter the string: ");
    scanf("%s",str);

    stringasInteger(str);
}

void stringasInteger(char str[])
{
    int length = strlen(str);
    int res=0;
    for(int i=0;i<length;i++)
    {
        if (str[i] >= '0' && str[i] <= '9')
        {
            res = res * 10 + (str[i] - '0');
        }
        else
        {
            printf("Invalid input. The string should contain only digits.\n");

        }
    }
    printf("Integer is: %d",res);
}
