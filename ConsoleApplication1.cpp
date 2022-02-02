#include <iostream>
#include <cmath>

int main()
{
	//input numbers
	const int Size = 20;
	float numbers[Size];
	int count = 0;
	std::cout << "Submit a value and press enter. When you are done, submit anything else. A letter is enough." << "\n";
	for (int i = 0; i < Size; i++) {
		if (std::cin >> numbers[i]) {
			count++;
		}
		else {
			break;
		}
	}

	std::cout << "amount: " << count << "\n";

	//min
	float min = numbers[0];
	// search num in inputArray from index 0 to elementCount-1 
	for (int i = 1; i < count; i++) {
		if (numbers[i] < min) {
			min = numbers[i];
		}
	}
	std::cout << "minimum: " << min << "\n";


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


	//quadratic
	total = 0;
	for (int i = 0; i < count; i++) {
		total += pow(numbers[i],2);
		//std::cout << total << "\n";
	}
	average = sqrt(total / count);
	//std::cout << average << "\n";
	std::cout << "quadratic average: " << average << "\n";


	//max
	float max = numbers[0];
	// search num in inputArray from index 0 to elementCount-1 
	for (int i = 1; i < count; i++) {
		if (numbers[i] > max) {
			max = numbers[i];
		}
	}
	std::cout << "maximum: " << max << "\n";
}
