/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 15:55:04 by jkollner          #+#    #+#             */
/*   Updated: 2024/01/05 16:33:16 by jkollner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class Span {
	private:
		Span();
		int *storage;
		int *new_spot;
		int *end;
		unsigned int N;
	public:
		Span( unsigned int N );
		Span( Span &cpy );
		Span &operator= (Span &as);
		int operator[] ( unsigned int n );
		unsigned int size( void );
		void addNumber( int number );

		~Span();
};
