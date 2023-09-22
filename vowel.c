#include<stdio.h>
int main()
{ int a;
   printf("input a character");
   scanf("%c", &a);
   switch (a)
   {
   case 'a':
   case 'e':
   case 'i':
   case 'o':
   case 'u':
   case 'A':
   case 'E':
   case 'I':
   case 'O':
   case 'U':
      printf("%c is a vowel", a); 
    break;
    default:
       printf("%c is a consonant", a);
   }
    return 1;
    }