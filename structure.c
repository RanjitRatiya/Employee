// C program to defines a Structure of Employees Organization
#include<stdio.h>
#include<conio.h>
struct employee     //A Structure of Employees
{
    int ph_num,age,salary;   //Declaration of variables of Phone Number, Age, and Salary
    char name[25];           //declaration of name variable
}    emp[100];              
 
void main()
{
    int i,n;
    printf("Enter the no of employees\n");
    scanf("%d",&n);                         //Take input from user how many employees
    printf("Enter employee info as Name , Age , Phone Number , Salary\n");
    for(i=0;i<n;i++)             //According to enterd no of Employees , the For Loop runs            
    {
        scanf("%s %d %d %d",&emp[i].name,&emp[i].age,&emp[i].ph_num,&emp[i].salary);   //Takes data from user such as Name, Age, Salary, Phone Number
    }
    printf("\nName\tAge\tph_num\t\tSalary\n");
    for(i=0;i<n;i++)          //For Loop for printing data taken from the user
    {
        printf("%s\t%d\t%d\t\t%d\n",emp[i].name,emp[i].age,emp[i].ph_num,emp[i].salary);   //Prints data taken from the User
    }
}
