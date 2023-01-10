/*Write a program to store information of 10 students and display them using structure.*/
#include<stdio.h>
struct student
{ char name[20];
  int roll_no;
};
int main()
{ struct student s[10];
  int i;
     printf("enter name and roll.no of 10 students: ");
      for(i=0;i<10;i++)
      { printf("\nenter %d student name: ",i+1);
        fflush(stdin);
        gets(s[i].name);
        printf("enter roll no of %s: ",s[i].name);
        scanf("%d",&s[i].roll_no);
      }
      printf("\n\n>>>>>>>>><<<<<<<<<<\n\n");
     for(i=0;i<10;i++)
     { printf("name = %s , roll no= %d\n",s[i].name,s[i].roll_no);
     }
 return 0;
}
