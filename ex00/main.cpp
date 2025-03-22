#include <iostream>
#include "whatever.hpp"

static void PrintWithBlueColor(std::string message)
{
	const std::string kBulue = "\033[36m";
	const std::string kReset = "\033[0m";
	std::cout << kBulue << message << kReset << std::endl; 
}

int	main(void){
	int intA = 42;
	int intB = -42;
	PrintWithBlueColor("\n<< int >>");
	PrintWithBlueColor("- Before operation");
	std::cout << "intA: " << intA << ", intB: " << intB << std::endl;
	PrintWithBlueColor("- After swap");
	swap(intA, intB);
	std::cout << "intA: " << intA << ", intB: " << intB << std::endl;
	PrintWithBlueColor("- Result of max(intA, intB)");
	std::cout << max(intA, intB) << std::endl;
	PrintWithBlueColor("- Result of min(intA, intB)");
	std::cout << min(intA, intB) << std::endl;

	double doubleA = 42.42;
	double doubleB = -42.42;
	PrintWithBlueColor("\n<< double >>");
	PrintWithBlueColor("- Before operation");
	std::cout << "doubleA: " << doubleA << ", doubleB: " << doubleB << std::endl;
	PrintWithBlueColor("- After swap");
	swap(doubleA, doubleB);
	std::cout << "doubleA: " << doubleA << ", doubleB: " << doubleB << std::endl;
	PrintWithBlueColor("- Result of max(doubleA, doubleB)");
	std::cout << max(doubleA, doubleB) << std::endl;
	PrintWithBlueColor("- Result of min(doubleA, doubleB)");
	std::cout << min(doubleA, doubleB) << std::endl;

	char charA = 42;
	char charB = 43;
	PrintWithBlueColor("\n<< char >>");
	PrintWithBlueColor("- Before operation");
	std::cout << "charA: " << charA << ", charB: " << charB << std::endl;
	PrintWithBlueColor("- After swap");
	swap(charA, charB);
	std::cout << "charA: " << charA << ", charB: " << charB << std::endl;
	PrintWithBlueColor("- Result of max(charA, charB)");
	std::cout << max(charA, charB) << std::endl;
	PrintWithBlueColor("- Result of min(charA, charB)");
	std::cout << min(charA, charB) << std::endl;

	std::string stringA = "42";
	std::string stringB = "fortyTwo";
	PrintWithBlueColor("\n<< string >>");
	PrintWithBlueColor("- Before operation");
	std::cout << "stringA: " << stringA << ", stringB: " << stringB << std::endl;
	PrintWithBlueColor("- After swap");
	swap(stringA, stringB);
	std::cout << "stringA: " << stringA << ", stringB: " << stringB << std::endl;
	PrintWithBlueColor("- Result of max(stringA, stringB)");
	std::cout << max(stringA, stringB) << std::endl;
	PrintWithBlueColor("- Result of min(stringA, stringB)");
	std::cout << min(stringA, stringB) << std::endl;

	return 0;
}
