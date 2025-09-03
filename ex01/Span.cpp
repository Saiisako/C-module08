/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skock <skock@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 11:31:12 by skock             #+#    #+#             */
/*   Updated: 2025/09/03 11:31:40 by skock            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{
}

Span::~Span()
{
}

Span::Span(const Span &copy)
{
	*this = copy;
}

Span& Span::operator=(const Span &other)
{
	if (this != &other)
	{
	}
	return (*this);
}