/*Write a function to display employee data.*/
#include<stdio.h>
#include<stdlib.h>
struct employee
{ int id,salary;
  char name[20];
};
int main()
{ struct employee e;
    printf("enter name of the employee: ");
    fflush(stdin);
    fgets(e.name,20,stdin);
    printf("enter id of %s: ",e.name);
    scanf("%d",&e.id);
    printf("enter salary of %s: ",e.name);
    scanf("%d",&e.salary);

    printf("employee name = %s",e.name);
    printf("\n salary of employee=%d",e.salary);
    printf("\n id of the employee=%d",e.id);

 return 0;
}
