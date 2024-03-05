/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonahkollner <jonahkollner@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 15:55:04 by jkollner          #+#    #+#             */
/*   Updated: 2024/03/05 17:11:57 by jonahkollne      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <algorithm>
#include <stdexcept>
#include <vector>
class Span {
	private:
		Span();
		std::vector<int> storage;
		unsigned int N;
	public:
		Span( unsigned int N );
		Span( Span &cpy );
		Span &operator= ( const Span &as );
		int operator[] ( unsigned int n );
		unsigned int size( void );
		void addNumber( int number );
		unsigned int shortestSpan( void );
		unsigned int longestSpan( void );
		int addRange( std::vector<int>::iterator begin, std::vector<int>::iterator end );

		~Span();
};
