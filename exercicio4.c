#include <stdio.h>
#include <ctype.h>

void maiuscula(char* str) {
    int outrasLetras = 1;  
  
    for (int i = 0; str[i] != '\0'; i++) {
        if (outrasLetras && isalpha(str[i])) {
            str[i] = toupper(str[i]);  
           outrasLetras = 0;  
        } else if (str[i] == '.' || str[i] == '?' || str[i] == '!') {
            outrasLetras = 1;  
    }
}
}

int main() {
    char str[] = "hello. how are you? i'm fine, thank you.";
    printf("Input: %s\n", str);

    maiuscula(str);

    printf("Output: %s\n", str);

    return 0;
}
