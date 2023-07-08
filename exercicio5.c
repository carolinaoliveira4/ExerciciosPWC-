#include <stdio.h>
#include <string.h>

int anagrama(const char* str) {
    int letras[26] = {0}; 

    int x = strlen(str);
    for (int i = 0; i < x; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            letras[str[i] - 'a']++;
        }
    }

    int cont = 0;
    for (int i = 0; i < 26; i++) {
        if (letras[i] % 2 != 0) {
            cont++;
        }
    }

    if (cont <= 1) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    const char* str = "racecar";
    int resultado = anagrama(str);
    printf("Output: %s\n", resultado ? "true" : "false");

    return 0;
}

