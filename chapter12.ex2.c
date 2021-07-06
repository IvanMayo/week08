#include<stdio.h>
#include <string.h>
// i tried using fgets and sscanf but it desnt work, gives 0 at the ends and here is the code 
/*
struct tiempo start, stop, diff;
char time[100];
printf("input the hours, minutes and seconds : ");
fgets(time, sizeof(time), stdin);
sscanf(time, "%d%d%d", &start.horas,&start.minutos, &start.segundos);


char time2[100];
printf("input the hours, minutes and seconds : ");
fgets(time2, sizeof(time2), stdin);
sscanf(time2, "%d%d%d", &stop.horas,&stop.minutos, &stop.segundos);

*/

void sas(int comp){


struct tiempo
{
int horas;   // my variables
int minutos;
int segundos;
};

// this is basically a previous excerise but with structures, the code speaks for its self
struct tiempo start, stop, diff;

printf("input the hours, minutes and seconds : ");
scanf("%d%d%d", &start.horas,&start.minutos, &start.segundos);

// i tried using fgets and sscanf but it desnt work

printf("input the hours, minutes and seconds : ");
scanf("%d%d%d", &stop.horas,&stop.minutos, &stop.segundos);

if(start.segundos > stop.segundos)
{
stop.segundos += 60;
--stop.minutos;
}


if(start.minutos > stop.minutos)
{
stop.minutos += 60;
--stop.horas;
}

//here is where the operations are make
diff.segundos = stop.segundos - start.segundos;
diff.minutos = stop.minutos - start.minutos;
diff.horas = stop.horas - start.horas;  
printf("the difference in time is = %d hours : %d minutes : %d seconds", diff.horas, diff.minutos, diff.segundos);  

      }


int main()
{
int comp;// here i call my function 
sas(comp);
return 0;
}
