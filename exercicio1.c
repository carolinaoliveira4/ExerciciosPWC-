#include <stdio.h>
#include <string.h>

void mudarOrdem(char * frase) {
    int comprimento = strlen(frase);
    char * palavras [comprimento];
    int cont = 0;

    char * palavra2 = strtok(frase, " ");
    while (palavra2 != NULL) {
        palavras[cont++] = palavra2;
        palavra2 = strtok(NULL, " ");
    }
        for(int i = cont - 1; i>= 0; i--) {
        printf("%s ", palavras[i]);
        }
}

int main(){
    char frase[100];

    printf("Digite a frase: ");
    fgets(frase, sizeof(frase), stdin);

    printf("Frase revertida: ");
    mudarOrdem(frase);

    return 0;
}