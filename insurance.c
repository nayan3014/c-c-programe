#include<stdio.h>
int main()
{ int age;
  char gender, maritialstatus, y;

  printf("input the gender");
  scanf("%c", &gender);

  printf("input the age");
  scanf("%d", &age);

  if(age>18)
     if(gender=='F')
       printf("Congratulations! you are elligible for insurance");
  else if (age>=30 && age<=75)

     printf("congratulations! you are elligible for insurance");
     else if (age>=25 && age<=30)

        if(gender=='M')
         printf("input maritialstatus");
         scanf("%c", &maritialstatus);

     if(maritialstatus=='y' || maritialstatus=='y')

      printf("Congratulations! you are elligible for insurance");
      else 
       printf("you are not elligible for insurance");
       return 0;
}