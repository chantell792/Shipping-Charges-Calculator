// Chantell Jenkins
// 10/26/2026
// Shipping Charges Project

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	std::cout << "Shipping Charges Calculator\n";

double packageWeight;
double shippingDistance;
double rate;
double rate1 = 1.10;
double rate2 = 2.20;
double rate3 = 3.70;
double rate4 = 4.80;

	std::cout << "Enter package weight in kilograms:";
	std::cin >> packageWeight;

	std::cout << "Enter shipping distance in miles:";
	std::cin >> shippingDistance;

	if (packageWeight <= 0 || packageWeight > 20)
	{
		std::cout << "Invalid weight. Please enter a weight between 0 and 20 kilograms.:";
	}
	if (shippingDistance < 10 || shippingDistance > 3000)
	{
		std::cout << "Invalid distance. Please enter a distance between 10 and 3000.:";
	}

	if (packageWeight <= 2)
	{
		rate = rate1;
	}
	else if (packageWeight > 2 && packageWeight <= 6)
	{
		rate = rate2;
	}
	else if (packageWeight > 6 && packageWeight <= 10)
	{
		rate = rate3;
	}
	else
	{
		rate = rate4;
	}

double shippingUnits = ceil(shippingDistance / 500);
double totalCharge = rate * shippingUnits;
std::cout << "Total shipping charge: $" << totalCharge << std::endl;
return 0;
}