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
	iter(intArr, intArrSize, print);
	PrintWithBlueColor("- After increment");
	iter(intArr, intArrSize, increment);
	iter(intArr, intArrSize, print);
	PrintWithBlueColor("- After decrement");
	iter(intArr, intArrSize, decrement);
	iter(intArr, intArrSize, print);

	double doubleArr[] = {1.2, 2.3, 3.4, 4.5};
	size_t doubleArrSize = size_t(sizeof(doubleArr)/sizeof(double));
	PrintWithBlueColor("\n<< double array >>");
	PrintWithBlueColor("- Before operation");
	iter(doubleArr, doubleArrSize, print);
	PrintWithBlueColor("- After increment");
	iter(doubleArr, doubleArrSize, increment);
	iter(doubleArr, doubleArrSize, print);
	PrintWithBlueColor("- After decrement");
	iter(doubleArr, doubleArrSize, decrement);
	iter(doubleArr, doubleArrSize, print);

	char charArr[] = {'a', 'b', 'c'};
	size_t charArrSize = (size_t)(sizeof(charArr) / sizeof(char));
	PrintWithBlueColor("\n<< char array >>");
	PrintWithBlueColor("- Before operation");
	iter(charArr, charArrSize, print);
	PrintWithBlueColor("- After increment");
	iter(charArr, charArrSize, increment);
	iter(charArr, charArrSize, print);
	PrintWithBlueColor("- After decrement");
	iter(charArr, charArrSize, decrement);
	iter(charArr, charArrSize, print);

	return 0;
}
