#define KEY 'X';
#define CLEARTEXT 'A';

#include <stdio.h>

void printchar (char c, char *text){
    printf("%s = '%c' (0x%x)\n", text, c, c);
    return;
}

int main(){
    char cleartext = CLEARTEXT;
    printchar(cleartext, "cleartext");

    char key = KEY;
    printchar(key, "key");

    char ciphertext, newcleartext;

    ciphertext = cleartext ^ key;
    printchar(ciphertext, "ciphertext");

    newcleartext = ciphertext ^ key;
    printchar(newcleartext, "newcleartext");

    return 0;
}