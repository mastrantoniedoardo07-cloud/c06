/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emastran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 12:00:46 by emastran          #+#    #+#             */
/*   Updated: 2026/01/31 12:22:01 by emastran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	n;
	int	a;
//	char	c;

	n = 1;
	i = 0;
	a = 0;
	while(n < argc)
	{
		a++;
		n++;
	}
	n = 1;
	while (n < argc)
	{
		i = 0;
		while (argv[n][i])
		{
			write(1, &argv[a][i], 1);
			i++;
		}
		a--;
		write(1, "\n", 1);
		n++;
	}
	return (0);
}
