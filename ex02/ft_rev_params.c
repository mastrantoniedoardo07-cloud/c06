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
	int	a;

	a = 0;
	i = argc - 1;
	if (argc >= 1)
	{
		while (i > 0)
		{
			a = 0;
			while(argv[i][a])
			{
				write(1, &argv[i][a], 1);
				a++;
			}
			write(1, "\n", 1);
			i--;
		}
	}
	return (0);
}
