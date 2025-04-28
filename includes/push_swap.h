/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dleite-b <dleite-b@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 18:33:22 by shovsepy          #+#    #+#             */
/*   Updated: 2025/04/23 14:27:00 by dleite-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"

// Stack
typedef struct s_node
{
	int				value;
	int				index;
	struct s_node	*next;
}				t_node;

// Util functions
t_node	*ft_lstnew(int value);
t_node	*ft_lstlast(t_node *head);
void	ft_lstadd_front(t_node **stack, t_node *new);
void	ft_lstadd_back(t_node **stack, t_node *new);
void	print_list(t_node *head);
int		ft_lstsize(t_node *head);

void	ft_error(char *msg);
void	ft_check_args(int argc, char **argv);
int		is_sorted(t_node **stack);
int		get_distance(t_node **stack, int index);
void	make_top(t_node **stack, int distance);
void	free_stack(t_node **stack);
void	ft_free(char **str);

// Algorithm utils
void	radix_sort(t_node **stack_a, t_node **stack_b);
void	simple_sort(t_node **stack_a, t_node **stack_b);
void	index_stack(t_node **stack);
void	sort_5(t_node **stack_a, t_node **stack_b);
void	sort_3(t_node **a);
int		get_min(t_node **stack, int skip);

// Instruction functions
int		swap(t_node **stack);
int		push(t_node **stack_to, t_node **stack_from);
int		rotate(t_node **stack);
int		reverse_rotate(t_node **stack);

int		sa(t_node **stack_a);
int		sb(t_node **stack_b);
int		ss(t_node **stack_a, t_node **stack_b);
int		pa(t_node **stack_a, t_node **stack_b);
int		pb(t_node **stack_b, t_node **stack_a);
int		ra(t_node **stack_a);
int		rb(t_node **stack_b);
int		rr(t_node **stack_a, t_node **stack_b);
int		rra(t_node **stack_a);
int		rrb(t_node **stack_b);
int		rrr(t_node **stack_a, t_node **stack_b);

#endif