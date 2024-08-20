#include <stdio.h>
int main ()
{
    int primo_numero;
    int secondo_numero;

    printf("\nInserisci primo numero");
    scanf ("%d", &primo_numero);
    
    printf("\nInserisci secondo numero");
    scanf("%d", &secondo_numero);

    int moltiplicazione;
    moltiplicazione = primo_numero*secondo_numero;
    
    printf("\nIl risultato della motiplicazione è: %d", moltiplicazione); 
    return 0;
}