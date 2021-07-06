#include <stdio.h>
// this program adds two distances

void distances(int medium){
struct Distance

{
int feet;
int inch;
} 

dist1, dist2, sum;

printf("1st distance\n");
  {
  char feet1[100];
  printf("Enter feet and inch 1: ");
  fgets(feet1, sizeof(feet1), stdin);
  sscanf(feet1, "%d %d", &dist1.feet, &dist1.inch);

  }
 
  

  {
  char feet2[100];
  printf("2nd distance\n");
  printf("Enter feet and inch 2: ");
  fgets(feet2, sizeof(feet2), stdin);
  sscanf(feet2, "%d %d", &dist2.feet, &dist2.inch);
// there is a bug where i need to input a number and enter, then the program continues
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

  printf("Sum of distances = %d\'-%.1d\"", sum.feet, sum.inch);

}
int main()

{
int medium;
distances(medium); 
return 0;
}
