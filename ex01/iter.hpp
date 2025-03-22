#pragma once

template<typename T>
void iter(T *arr, size_t arr_size, void func(T &)){
	for (size_t i = 0; i < arr_size; i++){
		func(arr[i]);
	}
	return ;
};

template <typename T>
static void increment(T &src){
	src++;
	return;
};

template <typename T>
static void decrement(T &src){
	src--;
	return;
};

template <typename T>
static void print(T &src){
	std::cout << src << std::endl;
	return;
};
