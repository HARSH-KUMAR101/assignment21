/*Write a program to calculate the difference between two time periods.*/
#include<stdio.h>
#include<stdlib.h>
struct time
{ int hr;
  int min;
  int sec;

};
int main()
{ struct time t1,t2,t3;
    printf("enter 1st time in format hh/mm/ss: ");
    scanf("%d/%d/%d",&t1.hr,&t1.min,&t1.sec);
    printf("enter 2nd time in format hh/mm/ss: ");
    scanf("%d/%d/%d",&t2.hr,&t2.min,&t2.sec);
     if(t1.sec<t2.sec)
     { t1.min--;
       t1.sec=t1.sec+60;
     }
      t3.sec=t1.sec-t2.sec;
     if(t1.min<t2.min)
     { t1.hr--;
       t1.min=t1.min+60;
     }
      t3.min=t1.min-t2.min;
      t3.hr=t1.hr-t2.hr;

      printf("time difference is %d:%d:%d",t3.hr,t3.min,t3.sec);

 return 0;
}
