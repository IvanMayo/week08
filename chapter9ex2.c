#include <stdio.h>
#include <string.h>

char string1 [10];
char string2 [10];

int main(void)
{
    printf("please enter string1\n");
    fgets(string1, sizeof(string1), stdin);
    sscanf(string1, "%s", string1);

  printf("please enter string2\n");
  fgets(string2, sizeof(string2), stdin);
  sscanf(string2, "%s", string2);


if (strcmp(string1,string2) ==0 ){

printf("true");
}


else {
  printf("false");
}


}
