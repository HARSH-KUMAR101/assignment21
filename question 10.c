#include<stdio.h>
#include<stdlib.h>
struct marks
{ char name[20];
  int roll_no;
  int chemistry,math,physics;
};
int main()
{ int i;
  struct marks s[5];
  float percent;
    printf("enter data of 5 students....\n\n");
      for(i=0;i<5;i++)
      { printf("enter name of %d student: ",i+1);
        fflush(stdin);
        gets(s[i].name);
        printf("enter roll no of %s: ",s[i].name);
        scanf("%d",&s[i].roll_no);
        printf("enter marks in chemistry, math and physics out of 100: ");
        scanf("%d %d %d",&s[i].chemistry,&s[i].math,&s[i].physics);
      }
      printf("\n\ndata after calculating percentage of all the students......\n\n");
         for(i=0;i<5;i++)
         { percent=(s[i].chemistry+s[i].math+s[i].physics)/3.0;
             printf("%s got %.2f percent\n",s[i].name,percent);
         }

 return 0;
}
