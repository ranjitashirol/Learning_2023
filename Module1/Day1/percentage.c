#include<stdio.h>
int main()
{
    int Rollno, Physics, Math, Chemistry;
    float Total,Percentage;
    char name[100];

    printf("Enter the Rollno of the student: ");
    scanf("%d",&Rollno);
    printf("Enter the name of the student: ");
    scanf("%s",name);
    printf("enter the marks obtained in Physics, Math and Chemistry: ");
    scanf("%d %d %d",&Physics,&Math,&Chemistry);

    Total = Physics+Math+Chemistry;
    Percentage = ((float)Total/300)*100;

    printf("\nSummery\n");
    printf("Rollno: %d\n",Rollno);
    printf("Name: %s\n",name);
    printf("Total Marks obtained is: %0.2f\n",Total);
    printf("Percentage obtained is: %0.2f%%\n",Percentage);


}
