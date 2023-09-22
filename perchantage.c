#include<stdio.h>
int main()
{ float sub1,sub2,sub3,p;
printf("input mark of the sub1");
scanf("%f", &sub1);
printf("input mark of the sub2");
scanf("%f", &sub2);
printf("input mark of the sub3");
scanf("%f", &sub3);
p=(sub1+sub2+sub3)/3;
printf("the perchantage is: %f", p);
printf("\n");
if(p>=60) {
  printf("first division");
}else 
     if (p>=45) {
       printf("second division");}

return 1;
}