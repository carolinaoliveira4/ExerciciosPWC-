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
