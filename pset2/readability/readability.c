#include <cs50.h>
#include <stdio.h>
#include <ctype.h>

int main(void)
{
    string text = get_string("Texto: ");
    printf("%s\n", text);
}