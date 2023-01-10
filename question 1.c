/*Define a structure Employee with member variables id, name, salary*/
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

 return 0;
}
