#include <stdio.h>
#include <stdlib.h>

int main(){
	char *name;
	name = malloc(32);

	printf("What is your name?\n");
	scanf("%s", name); // we actually don't need to use this declaration => scanf("%s", &name)
	printf("Hello %s\n", name);
	
	free(name);

	return 0;
}

/* 
   dynamic-memory ./dynamic 
What is your name?
Amal
Hello Amal
*/
