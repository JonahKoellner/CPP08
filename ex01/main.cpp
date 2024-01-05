/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 16:26:18 by jkollner          #+#    #+#             */
/*   Updated: 2024/01/05 16:37:25 by jkollner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <cstddef>
#include <iostream>

int main ( void ) {
	Span sp( (unsigned int)10 );
	for ( size_t i = 0; i < 10; i++ ) {
		sp.addNumber(i);
	}
	for ( size_t i = 0; i < sp.size(); i++) {
		std::cout << sp[i] << std::endl;
	}
	return (0);
}
