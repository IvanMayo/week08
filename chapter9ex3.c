#include <stdio.h>

int count(int number, int *array, int length);

int main()
{
	int array[10] = {5, 4, 4, 3, 4, 1, 3, 2, 7, 8};
	int number;
// did my best to use the fgets and sscanf but i gain nothing
  printf("introduce an int number form 1 to 9\n");
  scanf("%d", &number);

	printf("there is %d times the number %d\n", count(number, array, 10), number);

	return 0;
}

int count(int number, int *array, int length)
{
	if (length == 0)
		return 0;

	return (*array == number) + count(number, array+1, length-1);
}
