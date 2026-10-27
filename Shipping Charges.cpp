// Chantell Jenkins
// 10/26/2026
// Shipping Charges Project

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	std::cout << "Shipping Charges Calculator\n";
	int rate1 = 1.10;
	int rate2 = 2.20;
	int rate3 = 3.70;
	int rate4 = 4.80;

		std::cout << "Enter package weight in kilograms:";
	std::cin >> packageWeight;

	std::cout << "Enter shipping distance in miles:";
	std::cin >> shippingDistance;

	if (pairWeight <= 0 || packageWeight > 20)
	{
		std::cout >> "Invalid weight. Please eneter a weight between 0 and 20 kilograms.:";
	}
	if (shippingDistance < 10 || shippingDistance > 3000)
	{
		std::cout >> "Invalid distance. Please enter a distance between 10 and 3000.:";
	}

	if (packageWeight >= 2)
		int rate = rate1;
	else (packageWeight > 2 and <= 6)
		int rate = rate2
			else (packageWeight > 6 and <= 10)
				int rate = rate3
				else
					int rate = rate4
}

int shippingUnits = ceil(shippingUnits / 500);
int totalCharge = rate * shippingUnits;
std::cout << "Total shipping charge: $" << totalCharge << std::endl;
	return 0;
}