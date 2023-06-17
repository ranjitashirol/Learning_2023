#include<stdio.h>
int main()
{
    int arr[100],size;
    printf("enter size of an array: ");
    scanf("%d",&size);
    printf("enter the elements of the array: ");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    max(arr,size);
    min(arr,size);
}
void max(int arr[],int size)
{
    int max;
    for(int i=0;i<size;i++)
    {
        max=arr[0];
        if(arr[i]>max)
            max=arr[i];
    }
    printf("\nMaximum element in the array is: %d\n",max);
}
void min(int arr[],int size)
{
    int min;
    for(int i=0;i<size;i++)
    {
        min=arr[0];
        if(arr[i]<min)
            min=arr[i];
    }
     printf("Minimum element in the array is: %d\n",min);
}
