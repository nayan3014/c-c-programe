#include <stdio.h>
int main()
{
    int customerorder,stock,credit;
    printf("input customerorder");
    scanf("%d", &customerorder);

    printf("input the stock");
    scanf("%d", &stock);

    printf("input credit (1 for OK, 0 for not OK):");
    scanf("%d", &credit);

    if(customerorder<=stock && credit==1) {
     printf("order is processed.Supplying %d units", customerorder);

    } else if (credit==0) {
      printf("order can't processed. Intimating the customer");

    } else if(credit==1 && stock < customerorder) {
      printf("supplying %d units from stock/n", stock);
      printf("Balance %d units will be shipped later" , customerorder-stock);
    }
      return 0;
}
