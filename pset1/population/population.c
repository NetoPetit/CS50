#include <locale.h>
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    setlocale(LC_ALL, "Portuguese_Brazil");
    int populacaoInicial, populacaoFinal, populacaoAtual;
    
    do
    {
        populacaoInicial = get_int("Popula��o inicial: ");
    } while (populacaoInicial < 9);
     
    do
    {
        populacaoFinal = get_int("Popula��o final: ");
    } while (populacaoFinal < populacaoInicial);
    
    // TODO: Calcule o n�mero de anos at� o limite
    populacaoAtual = populacaoInicial + (populacaoInicial / 3) - (populacaoInicial / 4);
    
    int ano = 0;
    while (populacaoAtual < populacaoFinal)
    {
        populacaoAtual = populacaoAtual + (populacaoInicial / 3) - (populacaoInicial / 4);
        ano++;
    }
    
     // TODO: Imprima o n�mero de anos 
    printf("Anos: %i\n", ano);
}