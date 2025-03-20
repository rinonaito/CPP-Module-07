#include "Array.hpp"


Array::Array(){
}

Array::Array(unsigned int n){}

Array::Array(Array const &other){
	*this = other;
}

Array::~Array(){
	
}

Array &Array::operator=(Array const &other){
	*this = other;
	return *this;
}

size_t Array::size() const{
	return sizeof(this->array_) / sizeof(T);
}
