/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dleite-b <dleite-b@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 12:57:49 by dleite-b          #+#    #+#             */
/*   Updated: 2025/04/23 23:33:53 by dleite-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_contains(int num, char **argv, int i)
{
	i++;
	while (argv[i])
	{
		if (ft_atoi(argv[i]) == num)
			return (1);
		i++;
	}
	return (0);
}

static int	ft_isnum(char *num)
{
	int	i;

	i = 0;
	if (num[0] == '-')
		i++;
	while (num[i])
	{
		if (!ft_isdigit(num[i]))
			return (0);
		i++;
	}
	return (1);
}

static void	check_value(char **args, int i)
{
	long	tmp;

	tmp = ft_atoi(args[i]);
	if (!ft_isnum(args[i]) || ft_contains(tmp, args, i)
		|| tmp < -2147483648 || tmp > 2147483647)
	{
		ft_free(args);
		ft_error("Error");
	}
}

void	ft_check_args(int argc, char **argv)
{
	int		i;
	char	**args;

	i = 0;
	if (argc == 2)
		args = ft_split(argv[1], ' ');
	else
	{
		i = 1;
		args = argv;
	}
	while (args[i])
	{
		check_value(args, i);
		i++;
	}
	if (argc == 2)
		ft_free(args);
}
