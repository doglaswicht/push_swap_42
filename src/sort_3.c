/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dleite-b <dleite-b@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 14:18:04 by dleite-b          #+#    #+#             */
/*   Updated: 2025/04/23 14:24:58 by dleite-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	case_min_on_top(t_node **a)
{
	ra(a);
	sa(a);
	rra(a);
}

static void	case_next_min_on_top(t_node **a)
{
	if ((*a)->next->index == get_min(a, (*a)->index))
		sa(a);
	else
		rra(a);
}

static void	case_max_on_top(t_node **a)
{
	if ((*a)->next->index == get_min(a, -1))
		ra(a);
	else
	{
		sa(a);
		rra(a);
	}
}

void	sort_3(t_node **a)
{
	t_node	*head;
	int		min;
	int		next_min;

	head = *a;
	min = get_min(a, -1);
	next_min = get_min(a, min);
	if (is_sorted(a))
		return ;
	if (head->index == min && head->next->index != next_min)
		case_min_on_top(a);
	else if (head->index == next_min)
		case_next_min_on_top(a);
	else
		case_max_on_top(a);
}
