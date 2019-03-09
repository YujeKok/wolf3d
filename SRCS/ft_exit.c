/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badhont <badhont@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/07 21:42:55 by badhont           #+#    #+#             */
/*   Updated: 2019/03/09 19:54:24 by sgalasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf3d.h"

void	ft_error_exit(char *str, t_env *env)
{
	if (env->surface)
		SDL_FreeSurface(env->surface);
	if (env->font)
		TTF_CloseFont(env->font);
	if (env->sdl.renderer)
		SDL_DestroyRenderer(env->sdl.renderer);
	if (env->sdl.window)
		SDL_DestroyWindow(env->sdl.window);
	TTF_Quit();
	SDL_Quit();
	ft_putendl_fd(str, 2);
	exit(EXIT_FAILURE);
}

void    ft_exit(t_env *env)
{
	if (env->surface)
		SDL_FreeSurface(env->surface);
	if (env->font)
		TTF_CloseFont(env->font);
	if (env->sdl.renderer)
		SDL_DestroyRenderer(env->sdl.renderer);
	if (env->sdl.window)
		SDL_DestroyWindow(env->sdl.window);
	TTF_Quit();
	SDL_Quit();
	exit(EXIT_SUCCESS);
}