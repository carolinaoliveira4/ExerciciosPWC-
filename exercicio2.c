#include <stdio.h>
#include <string.h>

void duplicados(char * frase) {
   int i, y, j;
   int comprimento = strlen(frase);
   

    for (i = 0; i < comprimento; i++) {
        for (j = i + 1; j < comprimento; j++) {
            if (frase[i] == frase[j]) {
                for (y = j; y < comprimento; y++) {
                    frase[y] = frase[y + 1];
                }
                comprimento--;
                j--;
            }
        }
    }
}

int main() {

    char frase[] = "Hello World";
    duplicados(frase);
    printf("%s\n", frase);
   
    return 0;
}
