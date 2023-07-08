#include <stdio.h>
#include <string.h>

int palindromo(char * str, int esq, int dir){
     int len = strlen(str);
    while (esq >= 0 && esq < len && str[esq] == str[dir]) {
        dir++;
        esq--;
}
    return dir - esq - 1;
} 

void substring(char* str) {
    int len = strlen(str);
    int inicio = 0, fim = 0;

    for (int i = 0; i < len; i++) {
        int len1 = palindromo(str, i, i);
        int len2 = palindromo(str, i, i + 1);
        int maxLen = (len1 > len2) ? len1 : len2;

        if (maxLen > fim - inicio) {
            inicio = i - (maxLen - 1) / 2;
            fim = i + maxLen / 2;
        }
    }
    
    printf("Output: ");
    for (int i = inicio; i <= fim; i++) {
        printf("%c", str[i]);
    }
    printf("\n");
}

      