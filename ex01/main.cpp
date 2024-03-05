/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonahkollner <jonahkollner@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 16:26:18 by jkollner          #+#    #+#             */
/*   Updated: 2024/03/05 17:22:00 by jonahkollne      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <cstddef>
#include <iostream>
#include <unordered_set>
#include <random>

int main ( void ) {
	Span sp(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distr(1, 100000);

    std::unordered_set<int> unique_numbers;
    while(unique_numbers.size() < 10000) {
        unique_numbers.insert(distr(gen));
    }

    std::vector<int> vec(unique_numbers.begin(), unique_numbers.end());
	Span sp2(10000);
	sp2.addRange(vec.begin(), vec.end());
	std::cout << "Filled" << std::endl;
	std::cout << sp2.shortestSpan() << std::endl;
	std::cout << sp2.longestSpan() << std::endl;
	return (0);
}
