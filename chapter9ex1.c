#include <stdio.h>
#include <string.h>


char group[100];
char s[100];
int x;
int count = 0;

int main(void)
{
    
 
    printf("input words:\n");

    fgets(group, sizeof(group), stdin);

    sscanf(group,"%[^\n]s", s);

    
    for (x = 0;   s[x] != '\0';   x++)
    {
      if (s[x] == ' '   &&   s[x+1] != ' ')
      count++;    
    }
    printf("The number of words are %d\n", count+1);
} 
