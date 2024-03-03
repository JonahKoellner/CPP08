/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonahkollner <jonahkollner@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 16:26:18 by jkollner          #+#    #+#             */
/*   Updated: 2024/03/01 17:38:25 by jonahkollne      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <cstddef>
#include <iostream>

int main ( void ) {
	//Span spa( (unsigned int)10 );
	//for ( size_t i = 0; i < 10; i++ ) {
	//	spa.addNumber(i);
	//}
	//for ( size_t i = 0; i < spa.size(); i++) {
	//	std::cout << spa[i] << std::endl;
	//}

	//Span sp = Span(5);
	Span sp(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;


	return (0);
}
