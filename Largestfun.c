#include<stdio.h>
int largest(int a,int b);
int main()
{ int x,y,z;
  printf("input two numbers");
  scanf("%d%d",&x,&y);
z=largest(x,y);
printf("the largest number is:%d",z);
}

int largest(int a,int b)
{if(a>b)
  return a;
  else
  return b;
  }

  