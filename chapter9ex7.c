#include <stdio.h>
// this function will send yes is the input is 1 or no if the input is different
char aaa[10];
int numero;
void operación(int numero, char aaa[]) 
{
fgets(aaa, sizeof(aaa), stdin);
sscanf(aaa, "%d", &numero);

if (numero == 1)
printf("yes");

else 
printf("no");
}

int main() {
operación(numero, aaa);

return 0;
}
