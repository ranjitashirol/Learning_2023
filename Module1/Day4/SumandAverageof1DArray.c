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
    SumAndAverage(arr,size);

}
void SumAndAverage(int arr[], int size)
{
    int sum=0,average;
    for(int i=0;i<size;i++)
    {
        sum+=arr[i];
    }
    average = sum/size;
    printf("Sum of the array is %d and average is %d",sum,average);
}
