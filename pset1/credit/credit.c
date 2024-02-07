#include <stdio.h>
#include <cs50.h> 
#include <math.h>
#include <locale.h>

int num_digitos(long num_cartao);

int main(void)
{
    setlocale(LC_ALL, "Portuguese_Brazil");
    long num_cartao = get_long("Número: ");
    num_digitos(num_cartao);
}

int num_digitos(long num_cartao)
{
    int num_digitos = 0;
    while (num_cartao > 0)
    {
        num_cartao = num_cartao / 10;
        num_digitos ++;
    }

    return num_digitos;
}

int dois_primeiros(long num_cartao, int numeros_de_digitos)
{
    int dois_primeiros = num_cartao / pow(10, numeros_de_digitos);
    
    return dois_primeiros;
}
