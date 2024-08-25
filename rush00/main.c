/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eteofilo <eteofilo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 15:46:35 by eteofilo          #+#    #+#             */
/*   Updated: 2024/07/23 12:30:30 by eteofilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
void	rush(int x, int y);

/*int	main(void)
{
	rush(16, 16);
	return (0);
}
*/
int	main(int argc,char **argv)
{
	if (argc > 3)
		write(1, "ERROR", 5);
	rush(atoi(argv[1]), atoi(argv[2]));
	return(0);
}
