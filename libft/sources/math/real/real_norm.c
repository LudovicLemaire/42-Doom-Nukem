/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   real_norm.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: slopez <slopez@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/28 15:36:45 by qpupier      #+#   ##    ##    #+#       */
/*   Updated: 2020/01/29 18:01:43 by slopez      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

float	real_norm(t_real p)
{
	return (sqrtf(p.x * p.x + p.y * p.y));
}
