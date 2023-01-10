/*Write a function to sort employees according to their salaries*/
#include<stdio.h>
#include<stdlib.h>
struct employee
{ int salary;
  char name[20];
};

int main()
{ struct employee e[5];
  int i,max=0,j;
  struct employee t;

    for(i=0;i<5;i++)
   {
     printf("enter name of %d employee: ",i+1);
     fflush(stdin);
     gets(e[i].name);

     printf("enter salary of %s: ",e[i].name);
     scanf("%d",&e[i].salary);
   }
    for(i=0;i<4;i++)
   { for(j=i+1;j<5;j++){
       if(e[i].salary<e[j].salary){
          t.salary=e[i].salary;
          strcpy(t.name,e[i].name);
          e[i].salary=e[j].salary;
          strcpy(e[i].name,e[j].name);
          e[j].salary=t.salary;
          strcpy(e[j].name,t.name);
      }
    }
   }
   printf("\nemployee's data after sorting.......\n");
    for(i=0;i<5;i++)
    { printf("name=%s , salary=%d\n",e[i].name,e[i].salary);
    }

 return 0;
}
