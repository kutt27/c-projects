#define CLEARTEXT 'A';

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generate_random(){
    srand(time(NULL));
    char random_key = rand() % 256;
    return random_key;
}

void printchar(char c, char *text){
    printf("%s = '%c' (0x%x)\n", text, c, c);
}

int main(){
    char cleartext = CLEARTEXT;
    printchar(cleartext, "cleartext");

    char random_key = generate_random();

    char ciphertext, new_cleartext;

    ciphertext = cleartext ^ random_key;
    printchar(ciphertext, "ciphertext");

    new_cleartext = ciphertext ^ random_key;
    printchar(new_cleartext, "cleartext");
}