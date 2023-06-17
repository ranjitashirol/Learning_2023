#include<stdio.h>
int main()
{
    int arr[100],size;
    printf("Enter the size of an array: ");
    scanf("%d",&size);
    printf("Enter the elements of the array: ");
    for(int i=0;i<size;i++)
    {
        scanf("%d\n",&arr[i]);
    }
    ReversetheArray(arr,size);

}
void ReversetheArray(int arr[], int size)
{
    int i;
    printf("Reversed array is: ");
    for(int i=size-1;i>=0;i--)
    {
        printf("%d\n",arr[i]);
    }

}
