#include<stdio.h>
int main()
{
    int i,arr[100],size;
    printf("enter size of an array: ");
    scanf("%d",&size);
    printf("enter the array to find sum of every alternate elements: ");
    for(int i=0;i<size;i++)
    {
       scanf("%d",&arr[i]);
    }
    sumAlternate(arr,size);
}

void sumAlternate(int arr[], int size)
{
  int sum=0;
  for(int i=0;i<size;i+=2)
  {
      sum+= arr[i];
  }
  printf("Sum of every alternate elements is %d",sum);
}

