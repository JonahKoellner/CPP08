/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonahkollner <jonahkollner@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 10:57:13 by jkollner          #+#    #+#             */
/*   Updated: 2024/03/05 17:27:34 by jonahkollne      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

template<typename T>
MutantStack<T>::MutantStack() : std::stack<T>() {}

template<typename T>
MutantStack<T>::MutantStack(MutantStack const &other) : std::stack<T>(other) {}

template<typename T>
MutantStack<T>::~MutantStack() {}

template<typename T>
MutantStack<T> &MutantStack<T>::operator=(MutantStack const &other) {
	if (this != &other) {
		std::stack<T>::operator=(other);
	}
	return *this;
}

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin() {
	return this->c.begin();
}

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::end() {
	return this->c.end();
}
