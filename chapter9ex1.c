#include <stdio.h>
#include <string.h>
// : Write a procedure that counts the number of words in a string. (Your 
//documentation should describe exactly how you define a word.) Write a program to 
//test your new procedure.

char group[100];
char s[100];
int x;
int count = 0;

int main(void)
{
    
 
    printf("input words:\n");

    fgets(group, sizeof(group), stdin);

    sscanf(group,"%[^\n]s", s);
// counts the number of spaces there are
    
    for (x = 0;   s[x] != '\0';   x++)
    {
      if (s[x] == ' '   &&   s[x+1] != ' ')
      count++;    
    }
    printf("The number of words are %d\n", count+1);
} 
