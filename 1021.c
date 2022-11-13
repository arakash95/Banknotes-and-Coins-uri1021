//Banknotes and Coins
#include<stdio.h>
main()
{
    double N;
    int inteiro, aux1, aux;
    scanf("%lf", &N);

    inteiro = N;
    N = 100*N;
    aux1 = N;

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", inteiro/100);
    aux = (inteiro%100);
    printf("%d nota(s) de R$ 50.00\n", aux/50);
    aux = (aux%50);
    printf("%d nota(s) de R$ 20.00\n", aux/20);
    aux = (aux%20);
    printf("%d nota(s) de R$ 10.00\n", aux/10);
    aux = (aux%10);
    printf("%d nota(s) de R$ 5.00\n", aux/5);
    aux = (aux%5);
    printf("%d nota(s) de R$ 2.00\n", aux/2);
    aux = (aux%2);

    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", aux/1);
    aux1 = aux1%100;
    printf("%d moeda(s) de R$ 0.50\n", aux1/50);
    aux1 = aux1%50;
    printf("%d moeda(s) de R$ 0.25\n", aux1/25);
    aux1 = aux1%25;
    printf("%d moeda(s) de R$ 0.10\n", aux1/10);
    aux1 = aux1%10;
    printf("%d moeda(s) de R$ 0.05\n", aux1/5);
    aux1 = aux1%5;
    printf("%d moeda(s) de R$ 0.01\n", aux1/1);
}
