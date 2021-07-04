#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// Write a function that takes a character array and returns a primitive 
// hash code by adding up the value of each character in the array.

char characters[100];

int array_hascon(char characters[])
{
int x;
int has = 0;
char *size = characters;

for (x = 0; x < sizeof(size); ++x){
  has += characters[x];
}

return has-10;
}

int main()
{
printf("Introduce characters: ");
fgets(characters,100,stdin);

printf("%d",array_hascon(characters));
	return 0;
} 
