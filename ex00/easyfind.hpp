/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonahkollner <jonahkollner@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 15:49:17 by jkollner          #+#    #+#             */
/*   Updated: 2024/03/01 16:30:46 by jonahkollne      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template<typename T>
typename T::iterator easyfind(T &container, int value) {
	typename T::iterator it = container.begin();
	typename T::iterator ite = container.end();

	while (it != ite) {
		if (*it == value)
			return it;
		it++;
	}
	return ite;
}

