/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfranco- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 10:25:04 by nfranco-          #+#    #+#             */
/*   Updated: 2019/10/22 10:31:57 by nfranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int *ft_range(int min, int max);

int	main(void)
{
	int *tb;
	int size;
	
	tb = ft_range(2, 7);
	size = 7 - 2;
	while(size > 0)
	{
		printf("tab %d\n", *tb);	
		size--;
		tb++;
	}
}
