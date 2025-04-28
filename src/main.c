/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dleite-b <dleite-b@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 12:56:34 by dleite-b          #+#    #+#             */
/*   Updated: 2025/04/23 23:36:59 by dleite-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	handle_split_error(char **args)
{
	write(2, "Error\n", 6);
	if (args)
		ft_free(args);
	exit(1);
}

static void	fill_stack_from_args(t_node **stack, char **args, int i, int flag)
{
	t_node	*new;

	while (args[i])
	{
		new = ft_lstnew(ft_atoi(args[i]));
		if (!new)
		{
			free_stack(&new);
			if (flag == 0)
				ft_free(args);
			ft_error("Error");
		}
		ft_lstadd_back(stack, new);
		i++;
	}
}

static void	init_stack(t_node **stack, int argc, char **argv)
{
	char	**args;
	int		i;
	int		flag;

	i = 0;
	if (argc == 2)
	{
		args = ft_split(argv[1], ' ');
		if (!args || !args[0] || args[0][0] == '\0')
			handle_split_error(args);
		flag = 0;
	}
	else
	{
		i = 1;
		args = argv;
		flag = 1;
	}
	fill_stack_from_args(stack, args, i, flag);
	index_stack(stack);
	if (argc == 2)
		ft_free(args);
}

static void	sort_stack(t_node **stack_a, t_node **stack_b)
{
	if (ft_lstsize(*stack_a) <= 5)
		simple_sort(stack_a, stack_b);
	else
		radix_sort(stack_a, stack_b);
}

int	main(int argc, char **argv)
{
	t_node	**stack_a;
	t_node	**stack_b;

	if (argc < 2)
		return (-1);
	ft_check_args(argc, argv);
	stack_a = (t_node **)malloc(sizeof(t_node));
	stack_b = (t_node **)malloc(sizeof(t_node));
	*stack_a = NULL;
	*stack_b = NULL;
	init_stack(stack_a, argc, argv);
	if (is_sorted(stack_a))
	{
		free_stack(stack_a);
		free_stack(stack_b);
		return (0);
	}
	sort_stack(stack_a, stack_b);
	free_stack(stack_a);
	free_stack(stack_b);
	return (0);
}
