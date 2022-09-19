/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intro.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkomeno <tkomeno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 16:49:16 by tkomeno           #+#    #+#             */
/*   Updated: 2022/09/19 17:26:29 by tkomeno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libraries/mlx/mlx.h"
#include <stdio.h>
#include <stdlib.h>

#define WINDOW_WIDTH 600
#define WINDOW_HEIGHT 300

int	main(void)
{
	void	*mlx_ptr;
	void	*win_ptr;

	mlx_ptr = mlx_init();
	win_ptr = mlx_new_window(mlx_ptr, WINDOW_WIDTH, WINDOW_HEIGHT, "Hello!");
	mlx_destroy_window(mlx_ptr, win_ptr);
	while (1)
		;
	free(mlx_ptr);
	return (0);
}
