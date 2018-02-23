#include <stdio.h>

// Program for R D Sharma Exercise 2.3 Problem No. 10

int main()
{
    float price_per_orange;
    float total_money;

    printf("Enter price per orange:\n");
    scanf("%f", &price_per_orange);

    printf("Enter total money earned:\n");
    scanf("%f", &total_money);

    float no_of_oranges = total_money/price_per_orange;

    float no_of_dozens = no_of_oranges/12.0;

    printf("%f %f\n", no_of_oranges, no_of_dozens);

    return 0;
}
