#include <iostream>

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

	//normal
	int total = 0;
	for (int i = 0; i < count; i++) {
		total += numbers[i];
		//std::cout << total << "\n";
	}
	int average = total / count;
	//std::cout << average << "\n";
	std::cout << "normal average: " << average << "\n";



}
