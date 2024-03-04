#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    //ver se o comando é diferente de 2
    if (argc != 2)
    {
        printf("./substitution KEY");
        return 1;
    }//ver se a chave é diferente de 26
    else if (strlen(argv[1]) != 26 )
    {
        printf("./substitution KEY");
        return 1;
    }
    //ver se tem algum caracter na chave que não seja letra
    for (int i = 0, n = strlen(argv[1]); i < n; i++)
    {
        if (!isalpha(argv[1][i]))
        {
            printf("./substitution KEY");
            return 1;
        }
    }
    //ver se algum caracter na chave é repetido
    for (int i = 0, n = strlen(argv[1]); i < n; i++)
    {
        for (int j = i + 1, n = strlen(argv[1]); j < n; j++)
        {
            if (toupper(argv[1][i]) == toupper(argv[1][j]))
            {
                printf("./substitution KEY");
                return 1; 
            }
        }
    }
    
    string plaintext = get_string("plaintext: ");

    for (int i = 0, n = strlen(argv[1]); i < n; i++)
    {
        if (islower(argv[1][i]))
        {
            argv[1][i] = argv[1][i] - 32;
        }
    }
    
    printf("ciphertext: ");

    for (int i = 0, n = strlen(plaintext); i < n; i++)
    {
        if (isupper(plaintext[i]))
        {
            int letter = plaintext[i] - 65;
            printf("%c", argv[1][letter]);
        }
        else if (islower(plaintext[i]))
        {
            int letter = plaintext[i] - 97;
            printf("%c", argv[1][letter] + 32);
        }
        else 
        {
            printf("%c", plaintext[i]);
        }
        
    }

    printf("\n");

}