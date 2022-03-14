/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 16:18:24 by lmarecha          #+#    #+#             */
/*   Updated: 2022/03/14 15:08:59 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_list	**a;
	t_list	**b;
	char	**args;
	int		cmpt;

	cmpt = 0;
	// printf("%d", argc);
	a = malloc(sizeof(a));
	if (argc == 2)
	{
		// printf("==2");
		args = ft_split(argv[1], ' ');
		while (args[cmpt])
			cmpt++;
		a = ft_build_a(a, args, cmpt, argc);
	}
	else if (argc > 2)
	{
		// printf(">2");
		args = NULL;
		cmpt = argc - 1;
		printf("cmpt = %d\n", cmpt);
		a = ft_build_a(a, argv, cmpt, argc);
	}
	ft_number_a(*a, cmpt);
	b = malloc(sizeof(b));
	if (cmpt > 5)
		sort_big_stack(a, b);
	// ft_print_tab(a);
	//ft_print_tab(b);
	return (0);
}