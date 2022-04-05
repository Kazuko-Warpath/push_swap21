/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: georgijvasilcikov <georgijvasilcikov@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 14:13:36 by georgijvasi       #+#    #+#             */
/*   Updated: 2022/02/17 14:15:58 by georgijvasi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_all *all, int flag)
{
	if (all->size_a > 1)
		all->stack_a = all->stack_a->prev;
	if (flag)
		write(1, "rra\n", 4);
}

void	rrb(t_all *all, int flag)
{
	if (all->size_b > 1)
		all->stack_b = all->stack_b->prev;
	if (flag)
		write(1, "rrb\n", 4);
}

void	rrr(t_all *all, int flag)
{
	if (all->size_a > 1 && all->size_b > 1)
	{
		rra(all, 0);
		rrb(all, 0);
		if (flag)
			write(1, "rrr\n", 4);
	}
}
