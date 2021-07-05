#include <stdio.h>
// this program adds two distances

void distances(int medium){
struct Distance

{
int feet;
float inch;
} 

dist1, dist2, sum;

printf("1st distance\n");
  {
  char feet1[100];
  printf("Enter feet: ");
  fgets(feet1, sizeof(feet1), stdin);
  sscanf(feet1, "%d", &dist1.feet);


  char inch1[100];
  printf("Enter inch: ");
  fgets(inch1, sizeof(inch1), stdin);
  sscanf(inch1, "%f", &dist1.inch);
  }

  {
  char feet2[100];
  printf("2nd distance\n");
  printf("Enter feet: ");
  fgets(feet2, sizeof(feet2), stdin);
  scanf("%d", &dist2.feet);
// there is a bug where i need to input a number and enter, then the program continues

  char inch2[100];
  printf("Enter inch: ");
  fgets(inch2, sizeof(inch2), stdin);
  scanf("%f", &dist2.inch);
  }

  // adding feet
  sum.feet = dist1.feet + dist2.feet;
  // adding inches
  sum.inch = dist1.inch + dist2.inch;

  // changing to feet if inch is greater than 12
  while (sum.inch >= 12) 
  {
  ++sum.feet;
  sum.inch = sum.inch - 12;
  }

  printf("Sum of distances = %d\'-%.1f\"", sum.feet, sum.inch);
}
int main()
{
int medium;
distances(medium); 
return 0;
}
