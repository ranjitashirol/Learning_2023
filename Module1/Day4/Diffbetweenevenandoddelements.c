#include<stdio.h>
int main()
{
    int arr[100],size;
    printf("enter the size of an array: ");
    scanf("%d",&size);
    printf("enter the elements of the array: ");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    diffEvenOdd(arr,size);
}
void diffEvenOdd(int arr[],int size)
{
    int even=0,odd=0,diff;
    for(int i=0;i<size;i++)
    {
        if(arr[i]%2==0)
            even=even+arr[i];
        else
            odd=odd+arr[i];
    }
    if(even>odd)
    {
       diff=even-odd;
    }
    else
    {
        diff=odd-even;
    }

    printf("sum of even elements: %d\n",even);
    printf("sum of odd elements: %d\n",odd);
    printf("diff between even and odd elements: %d\n",diff);
}
