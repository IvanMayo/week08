#include <stdio.h>


int maxnum(int val[10]){
 
  int maxnum;

  int x;

  maxnum = 0;

	for (x = 0; x < sizeof(100); ++x) {
	if (val[x] > maxnum) {	maxnum = val[x];    }

}
return maxnum; }


int main() // main code 
{
int val[] = {7, 5, 8, 9, 2, 6, 3};

printf("the max value of the array is: %d", maxnum(val));




return(0);
}
