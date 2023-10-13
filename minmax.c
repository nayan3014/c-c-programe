#include<stdio.h>
void minmax(int a,int b, int c, int *max, int *min)

{ *min=a<b&&a<c?a:b<c?b:c;
  *max=a>b&&a>c?a:b>c?b:c;
  }
  int main()
  { int a,b,c,min,max;

    printf("input three numbers");
    scanf("%d%d%d", &a,&b,&c);

    minmax(a,b,c,&max,&min);

    printf("\n maximum = %d" , max);
    printf("\n minimum = %d" , min);

    return 0;
    }