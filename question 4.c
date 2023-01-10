/*Write a function to find the highest salary employee from a given array of 10
employees.*/
#include<stdio.h>
#include<stdlib.h>
struct employee
{ int salary;
  char name[20];
};
int main()
{ struct employee e[10];
  int i,max=0,temp;

    for(i=0;i<10;i++)
   {
     printf("enter name of the employee: ");
     fflush(stdin);
     gets(e[i].name);

     printf("enter salary of %s: ",e[i].name);
     scanf("%d",&e[i].salary);
   }
    for(i=0;i<10;i++)
   { if(max<e[i].salary){
       max=e[i].salary;
        temp=i;
    }
   }
     printf("\n%s got highest salary of %d",e[temp].name,max);

 return 0;
}
