#include <stdio.h>

// Program for R D Sharma Exercise 2.3 Problem No. 11

int main()
{
  unsigned int milk_per_child, total_milk;

  printf("Please enter milk per child in ml:\n");
  scanf("%u", &milk_per_child);

  printf("Enter total milk in ml\n");
  scanf("%u", &total_milk);

  printf("Total no. of students is %u\n", total_milk/milk_per_child);

  return 0;
}
