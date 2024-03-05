/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonahkollner <jonahkollner@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 10:44:33 by jkollner          #+#    #+#             */
/*   Updated: 2024/03/05 17:27:31 by jonahkollne      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <stack>

template<typename T>
class MutantStack : public std::stack<T> {
public:
	typedef typename std::stack<T>::container_type::iterator iterator;
	iterator begin();
	iterator end();

	MutantStack();
	MutantStack(MutantStack const &other);
	~MutantStack();
	MutantStack &operator=(MutantStack const &other);
};

#include "MutantStack.tpp"
