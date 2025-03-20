#pragma once

template <typename T>
class Array {
	public:
		Array();
		Array(unsigned int n);
		Array(Array const &other);
		Array &operator=(Array const &other);
		~Array();
		size_t size() const;
		T &operator[](Array const &other);

	private:
		T array_[];
};
