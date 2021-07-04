#include <stdio.h>

//Write a function count(number, array, length) that counts the 
//number of times number appears in array. The array has length elements. The 
//function should be recursive. Write a test program to go with the function
int count(int num, int *array, int lenght);


int main()
{

// this is the array from it will search the repeated times of a number
	int array[10] = {5, 4, 4, 3, 4, 1, 3, 2, 7, 8};
	char number[10];
  int numb;
  printf("please introduce an int number from 1 to 9\n");
  fgets(number, sizeof(number), stdin);
  sscanf(number, "%d", &numb);

  

printf("there is %d times the number %s\n", count( numb, array, 10), number);

	return 0;
}


int count(int number, int *array, int length)
{
	if (length == 0)
		return 0;

	return (*array == number) + count(number, array+1, length-1);
}
