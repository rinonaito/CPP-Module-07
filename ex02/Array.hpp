#pragma once

#include <iostream>
#include <cstddef>
#include <stdexcept>

template <typename T>
class Array {
	public:
		Array(): size_(0){
			this->array_ = new T[this->size_];
		};
		Array(unsigned int size) : size_(size){
			this->array_ = new T[this->size_];
		};
		~Array(){
			delete[] array_;	
		};
		Array(Array const &other){
			*this = other;
		};
		Array &operator=(Array const &other){
			if (this->array_ != NULL){
				delete[] array_;
			}
			this->size_ = other.size();
			this->array_ = new T[this->size_];
			for (size_t index = 0; index < this->size_; index++){
				this->array_[index] = other.array_[index];
			}
			return *this;
		};
		size_t size() const{
			return this->size_;
		};
		T &operator[](size_t index){
			if (index < 0 || index >= this->size_
				|| this->array_ == NULL || this->array_.size() == 0){
				throw new IndexOutOfRangeException();
			}
			return array_[index];
		};

	private:
		T *array_;
		size_t size_;
		class IndexOutOfRangeException : public std::runtime_error{
			public:
				IndexOutOfRangeException() :
					runtime_error("the given index is out of range"){};
		};
};

template <typename T>
std::ostream& operator<<(std::ostream &os, Array<T> const &array){
	os << "[Array]:  - size: " << array.size() << "\n";
	for (size_t index = 0; index < array.size(); index++){
		os << "\t[" << index << "]: " << array[index] << "\n";
	}
	return os;
}
