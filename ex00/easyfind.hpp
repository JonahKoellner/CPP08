/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 15:49:17 by jkollner          #+#    #+#             */
/*   Updated: 2024/01/05 15:50:41 by jkollner         ###   ########.fr       */
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

