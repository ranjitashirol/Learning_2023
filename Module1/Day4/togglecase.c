#include <stdio.h>
#include <string.h>


int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%[^\n]",str);

    toggleCase(str);
    return 0;
}
void toggleCase(char str[])
{
    int i,length = strlen(str);
    for(int i=0;i<length;i++)
    {
        if(islower(str[i]))
        {
            str[i] = toupper(str[i]);
        }
        else if(isupper(str[i]))
        {
            str[i] =tolower(str[i]);
        }
    }
    printf("string is: %s",str);
}



