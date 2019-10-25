/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasimon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/05 17:24:06 by nasimon-          #+#    #+#             */
/*   Updated: 2019/10/06 09:17:07 by ramuarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	char s;

	s = '\n';
	if (c == 'S')
	{
		write(1, &s, 1);
	}
	else
	{
		write(1, &c, 1);
	}
}
