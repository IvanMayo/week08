#include <stdio.h>
//  Write a function that scans a character array for the character - and 
// replaces it with
void change(char aarray[]) {
	int i;  

	for (i = 0; i < sizeof(aarray); ++i) {
// th sizeof(char) is not completely correct but it works

		if (aarray[i] == '-') {
			aarray[i] = '_';  }
	
  }
}

int main(void) {
	int i;   
	char characters[10];
printf("introduce characters and -\n");
fgets(characters, sizeof(characters), stdin);
sscanf(characters, "%c", characters);



	change(characters);

	for (i = 0; i < sizeof(characters); ++i) {
		printf("%c\n", characters[i]);
	}

	return(0);
}
