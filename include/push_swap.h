/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: georgijvasilcikov <georgijvasilcikov@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 19:09:36 by georgijvasi       #+#    #+#             */
/*   Updated: 2022/02/17 19:10:46 by georgijvasi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include <stdlib.h>
# include <limits.h>

typedef struct s_node
{
	int				num;
	int				index;
	int				flag;
	struct s_node	*next;
	struct s_node	*prev;
}					t_node;

typedef struct s_all
{
	t_node			*stack_a;
	t_node			*stack_b;
	int				size_a;
	int				size_b;
	int				min;
	int				med;
	int				max;
	int				min_a;
}					t_all;

t_all	*parsing(char **argv);
void	sorting(t_all *all);
char	**get_line(char **av);
void	repeated_double(char **av);
void	check_arg(char **arr);
void	free_arr(char **arr, int flag);
void	error(void);
t_all	*init_struct(char **arr);
t_node	*new_list(int num, int index);
void	lstadd_back(t_node **stack_a, t_node *new);
void	free_stack(t_all *all);
void	add_to_stack(t_all *all, char **arr);
void	babble_sort(t_all *all, int *sort, int *not_sort, int len);
void	create_stack(t_all *all, int *sort, int *not_sort, int len);
void	pb(t_all *all, int flag);
void	pa(t_all *all, int flag);
void	push_b(t_all *all);
void	push_a(t_all *all);
void	sa(t_all *all, int flag);
void	sb(t_all *all, int flag);
void	ss(t_all *all, int flag);
void	ra(t_all *all, int flag);
void	rb(t_all *all, int flag);
void	rr(t_all *all, int flag);
void	rra(t_all *all, int flag);
void	rrb(t_all *all, int flag);
void	rrr(t_all *all, int flag);
int		sort_true(t_all *all);
void	sort_three_a(t_all *all);
void	sort_three_b(t_all *all);
void	sort_five(t_all *all);
int		short_cut(t_all *all);
int		search_min_b_to_a(t_all *all);
void	move_b_to_a(t_all *all);
void	move_a_to_b(t_all *all);
void	search_min_a_to_b(t_all *all);
void	push_down(t_all *all);
void	sort_a_to_b_five(t_all *all, int flag, int min, int i);
void	sort_b_to_a_five(t_all *all);
void	sort_three_a_to_b(t_all *all);
void	move_a_to_b_first(t_all *all);
void	min_max_med_a(t_all *all);
void	min_max_med_b(t_all *all);
void	move_down(t_all *all);

#endif
