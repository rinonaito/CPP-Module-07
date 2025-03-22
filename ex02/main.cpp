#include "Array.hpp"
#include <cstdlib>

void PrintWithBlueColor(std::string message)
{
	const std::string kBulue = "\033[36m";
	const std::string kReset = "\033[0m";
	std::cout << kBulue << message << kReset << std::endl; 
}

static Array<int>	*createTestArrayForInt(size_t size){
	Array<int> *array = new Array<int>(size);
	int elem = 0;
	for (size_t index = 0; index < size; index++){
		(*array)[index] = elem;
		elem += 5;
	}
	return array;
}

static Array<char>	*createTestArrayForChar(size_t size){
	Array<char> *array = new Array<char>(size);
	char elem = 'a';
	for (size_t index = 0; index < size; index++){
		(*array)[index] = elem;
		elem++;
	}
	return array;
}

static Array<double>	*createTestArrayForDouble(size_t size){
	Array<double> *array = new Array<double>(size);
	double elem = 5.5;
	for (size_t index = 0; index < size; index++){
		(*array)[index] = elem;
		elem += 1.1;
	}
	return array;
}

int main(void){
	const size_t sizeForArrayInt = 5;
	const size_t sizeForArrayChar = 7;
	const size_t sizeForArrayDouble = 3;
	Array<int> *arrayInt = createTestArrayForInt(sizeForArrayInt);
	Array<char> *arrayChar = createTestArrayForChar(sizeForArrayChar);
	Array<double> *arrayDouble = createTestArrayForDouble(sizeForArrayDouble);
	
	PrintWithBlueColor("< After creating Arrays >");
	PrintWithBlueColor("- arrayInt");
	std::cout << *arrayInt << std::endl;
	PrintWithBlueColor("- arrayChar");
	std::cout << *arrayChar << std::endl;
	PrintWithBlueColor("- arrayDouble");
	std::cout << *arrayDouble << std::endl;

	PrintWithBlueColor("< After assigning arrayChar to arrayChar2 >");
	Array<char> arrayChar2 = (*arrayChar);
	PrintWithBlueColor("- arrayChar2");
	std::cout << arrayChar2 << std::endl;
	
	PrintWithBlueColor("< After constructing arrayChar3 from arrayChar2 >");
	Array<char> arrayChar3 = Array<char>(arrayChar2);
	PrintWithBlueColor("- arrayChar3");
	std::cout << arrayChar3 << std::endl;
	
	PrintWithBlueColor("< After changing arrayChar[1], arrayChar2[2], arrayChar3[3] >");
	(*arrayChar)[1] = '1';
	arrayChar2[2] = '2';
	arrayChar3[3] = '3';
	PrintWithBlueColor("- arrayChar");
	std::cout << *arrayChar << std::endl;
	PrintWithBlueColor("- arrayChar2");
	std::cout << arrayChar2 << std::endl;
	PrintWithBlueColor("- arrayChar3");
	std::cout << arrayChar3 << std::endl;

	PrintWithBlueColor("< access with invalid index >");
	try
	{
		char a = arrayChar2[100];
		(void)a;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	delete arrayInt;
	delete arrayChar;
	delete arrayDouble;

	return 0;
}

__attribute__((destructor))
static void destructor() {
	system("leaks -q template");
}
