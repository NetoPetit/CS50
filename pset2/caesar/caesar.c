#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    setlocale(LC_ALL, "Portuguese_Brazil");
    
    if(argc != 2)
    {
        printf("Usage: ./caesar key");
        return 1;
    }   
    
    for(int k = 0, n = strlen(argv[1]); k < n; k++ )
    {
        if(isalpha(argv[1][k]))
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }

    int k = atoi(argv[1]) % 26;
    string plaintext = get_string("plaintext: ");

    printf("ciphertext: ");

    for(int i = 0, n = strlen(plaintext); i < n; i++)
    {
        if(!isalpha(plaintext[i]))
        {
            printf("%c", plaintext[i]);
            continue;
        }

        int ascii_offset = isupper(plaintext[i]) ? 65 : 97;

        int pi = plaintext[i] - ascii_offset;
        int ci = (pi + k) % 26;

        printf("%c", ci + ascii_offset);
    }

    printf("\n");
    return 0;
}