/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skock <skock@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 11:31:14 by skock             #+#    #+#             */
/*   Updated: 2025/09/03 11:31:32 by skock            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

class Span
{
	private:
		/* data */
	public:
		Span();
		~Span();
		Span(const Span& copy);
		Span& operator=(const Span& other);
};

