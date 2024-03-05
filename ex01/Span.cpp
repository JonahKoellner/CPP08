/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonahkollner <jonahkollner@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 16:00:41 by jkollner          #+#    #+#             */
/*   Updated: 2024/03/05 17:19:42 by jonahkollne      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() {
	this->N = 0;
}

Span::Span( unsigned int N ) {
	this->N = N;
	this->storage.reserve(N); //prealloc memory
}

Span::Span( Span &cpy ) {
	*this = cpy;
}

Span &Span::operator=( const Span &as ) {
	this->N = as.N;
	this->storage = as.storage;
	return (*this);
}

int Span::operator[]( unsigned int n ) {
	return (this->storage.at(n)); // at function will throw std::out_of_range itself
}

unsigned int Span::size( void ) {
	return (this->N);
}

void Span::addNumber( int number ) {
	if ((unsigned int)this->storage.size() < this->N) {
		this->storage.push_back(number);
	} else {
		throw std::out_of_range("Array is full");
	}
}

unsigned int Span::shortestSpan( void ) {
	if (this->storage.size() < 2) {
		throw std::out_of_range("Array has nothing or only one element.");
	}

	std::vector<int> sorted_storage(this->storage); // Create a copy of storage
	std::sort(sorted_storage.begin(), sorted_storage.end()); // Sort the copy

	int min_diff = std::numeric_limits<int>::max();

	for (size_t i = 0; i < sorted_storage.size() - 1; i++) {
		if (sorted_storage[i + 1] - sorted_storage[i] < min_diff) {
			min_diff = sorted_storage[i + 1] - sorted_storage[i];
		}
	}
	return ((unsigned int)min_diff);
}

unsigned int Span::longestSpan( void ) {
	if (this->storage.size() < 2) {
		throw std::out_of_range("Array has nothing or only one element.");
	}

	std::vector<int> sorted_storage(this->storage); // Create a copy of storage
	std::sort(sorted_storage.begin(), sorted_storage.end()); // Sort the copy

	return ((unsigned int)sorted_storage.back() - sorted_storage.front());
}

int Span::addRange( std::vector<int>::iterator begin, std::vector<int>::iterator end ) {
	if (this->storage.size() + std::distance(begin, end) > this->N) {
		throw std::out_of_range("Array is full");
	}
	this->storage.insert(this->storage.end(), begin, end);
	return (0);
}

Span::~Span() {
}
