/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjacquel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 13:55:10 by hjacquel          #+#    #+#             */
/*   Updated: 2022/08/04 15:18:07 by hjacquel         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_numbers(void)
{
	write (1, "0123456789", 10);
}
