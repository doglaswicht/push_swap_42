/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   rotate.c                                            :+:    :+:           */
/*                                                      +:+                   */
/*   By: dleite-b <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2025/04/23 13:49:25 by dleite-b       #+#    #+#                */
/*   Updated: 2025/04/23 13:49:27 by dleite-b       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*Shift up all elements of a stack by 1.
The first element becomes the last one | ra and rb*/

int	rotate(t_node **stack)
{
	t_node	*head;
	t_node	*tail;

	if (ft_lstsize(*stack) < 2)
		return (-1);
	head = *stack;
	tail = ft_lstlast(head);
	*stack = head->next;
	head->next = NULL;
	tail->next = head;
	return (0);
}

int	ra(t_node **stack_a)
{
	if (rotate(stack_a) == -1)
		return (-1);
	ft_putendl_fd("ra", 1);
	return (0);
}

int	rb(t_node **stack_b)
{
	if (rotate(stack_b) == -1)
		return (-1);
	ft_putendl_fd("rb", 1);
	return (0);
}

int	rr(t_node **stack_a, t_node **stack_b)
{
	if ((ft_lstsize(*stack_a) < 2) || (ft_lstsize(*stack_b) < 2))
		return (-1);
	rotate(stack_a);
	rotate(stack_b);
	ft_putendl_fd("rr", 1);
	return (0);
}
