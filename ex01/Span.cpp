/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 16:00:41 by jkollner          #+#    #+#             */
/*   Updated: 2024/01/05 16:37:03 by jkollner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <stdexcept>

Span::Span( unsigned int N ) {
	this->N = N;
	this->storage = new int[N];
	this->new_spot = storage;
	this->end = this->storage + N - 1;
}

//Span::Span( Span &cpy) {
//	//this->
//}

//Span &Span::operator=( Span &as ) {
//	//
//}

int Span::operator[]( unsigned int n ) {
	if (this->N <= n) {
		throw std::out_of_range("Out of bounce");
	}
	return (this->storage[n]);
}

unsigned int Span::size( void ) {
	return (this->N);
}

void Span::addNumber( int number ) {
	if (this->new_spot != this->end + 1) {
		*this->new_spot = number;
		this->new_spot++;
	} else {
		throw std::out_of_range("Array is full");
	}
}

Span::~Span() {
	delete this->storage;
}
