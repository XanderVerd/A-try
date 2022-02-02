#include <iostream>
#include <cmath>

int main()
{
	//input numbers
	const int Size = 20;
	int numbers[Size];
	int count = 0;
	for (int i = 0; i < Size; i++) {
		if (std::cin >> numbers[i]) {
			count++;
		}
		else {
			break;
		}
	}

	//harmonic
	float total = 0;
	for (int i = 0; i < count; i++) {
		total += 1.0/numbers[i];
		//std::cout << total << "\n";
	}
	float average = count / total;
	std::cout << "harmonic average: " << average << "\n";

	//geometric
	total = 1;
	for (int i = 0; i < count; i++) {
		total *= numbers[i];
		//std::cout << total << "\n";
	}
	average = pow(total, (1.0/count));
	std::cout << "geometric average: " << average << "\n";

	//normal
	total = 0;
	for (int i = 0; i < count; i++) {
		total += numbers[i];
		//std::cout << total << "\n";
	}
	average = total / count;
	//std::cout << average << "\n";
	std::cout << "normal average: " << average << "\n";
}
