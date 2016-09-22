//**************************
// Written by.: Michael Dews
// Written on.: 09/19/2016
// Written for: Calculates Shipping prices
//**************************

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include<math.h>

main() {
	float miles, weight;
	printf("Please input the weight of your package in pounds: ");
	scanf("%f", &weight);

	float weightCost, milesCost, totalCost;
	printf("\nPlease input the miles your package is being shipped: ");
	scanf("%f", &miles);

	if (weight <= 15) weightCost = 15;
	else weightCost = (weight - 15) / 2 + 10;

	milesCost = miles / 500;
	milesCost = ceil(milesCost);
	milesCost = milesCost * 10;

	totalCost = weightCost + milesCost;
	printf("\nThe total cost to ship your package is: $%.2f\n\n", totalCost);

	system("pause");
} //end of main.