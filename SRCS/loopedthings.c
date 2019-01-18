/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   loopedthings.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asamir-k <asamir-k@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/09 10:18:59 by asamir-k          #+#    #+#             */
/*   Updated: 2019/01/18 16:56:32 by asamir-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INCLUDES/wolf3d.h"

void	ft_looped(int *quit, t_env *env)
{
	SDL_Texture *texture = NULL;
	while (!*quit)
	{
		if (SDL_PollEvent(&(env->sdl.event)) == 1)
		{
			events(quit, env);
            ft_display_player(env);
			ft_set_player_dir(env);
			SDL_CreateTextureFromSurface(env->sdl.renderer, env->surface);
			SDL_RenderCopy(env->sdl.renderer, texture, NULL, NULL);
            SDL_RenderPresent(env->sdl.renderer);
		}
	}
}
