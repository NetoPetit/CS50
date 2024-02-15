#include <locale.h>
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    setlocale(LC_ALL, "Portuguese_Brazil");
    int populacaoInicial, populacaoFinal;
    int ano = 0;

    do
    {
        populacaoInicial = get_int("Popula��o inicial: ");
    } 
    while (populacaoInicial < 9);
     
    do
    {
        populacaoFinal = get_int("Popula��o final: ");
    } 
    while (populacaoFinal < populacaoInicial);
    
    // TODO: Calcule o n�mero de anos at� o limite
    if (populacaoInicial == populacaoFinal)
    {
        printf("Anos: 0\n");
    }
    else
    {
        do
        {
            populacaoInicial = populacaoInicial + (populacaoInicial / 3) - (populacaoInicial / 4);
            ano++;
        } 
        while (populacaoInicial < populacaoFinal);
    
        // TODO: Imprima o n�mero de anos 
        printf("Anos: %i\n", ano);
    }  
    
}