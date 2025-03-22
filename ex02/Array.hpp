#pragma once

#include <iostream>
#include <cstddef>
#include <stdexcept>

template <typename T>
class Array {
	private:
		size_t	size_;
		T	*array_;
	public:
		Array(): size_(0), array_(new T[this->size_]){};
		Array(unsigned int size) : size_(size), array_(new T[this->size_]){};
		~Array(){ delete[] array_; };
		Array(Array const &other) : size_(other.size()), array_(new T[this->size_]){
			for (size_t index = 0; index < this->size_; index++){
				this->array_[index] = other.array_[index];
			}
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
		T &operator[](size_t index){
			if (index < 0 || index >= this->size_ || this->array_ == NULL || this->size() == 0){
				throw std::out_of_range("index out of range");
			}
			return array_[index];
		};
		const T &operator[](size_t index) const{
			if (index < 0 || index >= this->size() || this->array_ == NULL || this->size() == 0){
				throw std::out_of_range("index out of range");
			}
			return array_[index];
		};
		size_t size() const{ return this->size_; };
};

template <typename T>
std::ostream& operator<<(std::ostream &os, Array<T> const &array){
	os << "size: " << array.size() << "\n";
	for (size_t index = 0; index < array.size(); index++){
		os << "[" << index << "]: " << array[index] << "\n";
	}
	return os;
};
