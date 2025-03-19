#include <iostream>
#include "iter.hpp"

static void PrintWithBlueColor(std::string message)
{
	const std::string kBulue = "\033[36m";
	const std::string kReset = "\033[0m";
	std::cout << kBulue << message << kReset << std::endl; 
}

int	main(void){
	int intArr[] = {1, 2, 3, 4, 5};
	size_t intArrSize = size_t(sizeof(intArr)/sizeof(int));
	PrintWithBlueColor("<< int array >>");
	PrintWithBlueColor("- Before operation");
	printArray(intArr, intArrSize);
	PrintWithBlueColor("- After increment");
	iter(intArr, intArrSize, increment);
	printArray(intArr, intArrSize);
	PrintWithBlueColor("- After decrement");
	iter(intArr, intArrSize, decrement);
	printArray(intArr, intArrSize);

	double doubleArr[] = {1.2, 2.3, 3.4, 4.5};
	size_t doubleArrSize = size_t(sizeof(doubleArr)/sizeof(double));
	PrintWithBlueColor("\n<< double array >>");
	PrintWithBlueColor("- Before operation");
	printArray(doubleArr, doubleArrSize);
	PrintWithBlueColor("- After increment");
	iter(doubleArr, doubleArrSize, increment);
	printArray(doubleArr, doubleArrSize);
	PrintWithBlueColor("- After decrement");
	iter(doubleArr, doubleArrSize, decrement);
	printArray(doubleArr, doubleArrSize);

	char charArr[] = {'a', 'b', 'c'};
	size_t charArrSize = (size_t)(sizeof(charArr) / sizeof(char));
	PrintWithBlueColor("\n<< char array >>");
	PrintWithBlueColor("- Before operation");
	printArray(charArr, charArrSize);
	PrintWithBlueColor("- After increment");
	iter(charArr, charArrSize, increment);
	printArray(charArr, charArrSize);
	PrintWithBlueColor("- After decrement");
	iter(charArr, charArrSize, decrement);
	printArray(charArr, charArrSize);	

	return 0;
}