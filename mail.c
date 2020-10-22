#include "spm.h"
#include <stdio.h>

int main()
{   
    char str1[] = "   1 traBaLho pRAtico  2020   ";
    char str2[81] = "1 Trabalho Pratico 2020";
    char str3[] = "1 trabalho pratico";
    char str4[] = "1 TRABALHO PRATICO";
    
    printf("\"%s\"\n", capitalize(str1));
    
    printf("\"%s\"\n", center(str2, 80, '*'));
    
    if (isstrlower(str3)) {
        printf("\"%s\" tem todos os caracteres minusculos\n", str3);
    } 
    else {
        printf("\"%s\" NAO tem todos os caracteres minusculos\n", str3);
    } 
    if (isstrlower(str4)) {
        printf("\"%s\" tem todos os caracteres minusculos\n", str4);
    } 
    else {
        printf("\"%s\" NAO tem todos os caracteres minusculos\n", str4);
    }
    if (isstrupper(str3)) {
        printf("\"%s\" tem todos os caracteres maiusculos\n", str3);
    }
    else {
        printf("\"%s\" NAO tem todos os caracteres maiusculos\n", str3);
    }
    if (isstrupper(str4)) {
        printf("\"%s\" tem todos os caracteres maiusculos\n", str4);
    }
    else {
        printf("\"%s\" NAO tem todos os caracteres maiusculos\n", str4);
    } 
    return 0;
}