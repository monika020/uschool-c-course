#include<stdio.h>
#include<conio.h>
struct employee
{ char name[20];
  char employeeid[30];
  float experience;
  float salary;
  };
void main()
{  clrscr();
   int i;
   puts("enter the details");
   for(i=1;i<=5;i++)
{  struct employee ei;
   printf("Name of employee%d\n",i);
   scanf("%s",&ei.name) ;
   printf("Employee Id of employee%d\n",i);
   scanf("%s",&ei.employeeid);
   printf("Experience of employee%d\n",i);
   scanf("%f",&ei.experience);
   printf("Enter the salary of employee%d\n",i);
   scanf("%f",&ei.salary);
 }
   for(i=1;i<=5;i++)
   { struct employee ei;
     printf("\nName of employee%d                = %s",i,ei.name);
     printf("\nEmployee ID of employee%d         = %s ",i,ei.employeeid);
     printf("\nExperience of employee%d(in years)= %.1f",i,ei.experience);
     printf("\nSalary of employee%d              = %.2f",i,ei.salary);
    }

   getch();
}
