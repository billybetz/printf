/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbetz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/26 14:14:18 by bbetz             #+#    #+#             */
/*   Updated: 2018/01/26 14:18:52 by bbetz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// Verifie la forme de la chaine et retourne le nombre de variables que contient cette chaine.
// retourne une valeure strictement négative en cas d'erreur. >=0 dans le cas contraire.

int		parse_chaine(const char *chaine)
{
	int		nb_var;
	int		i;

	i = -1;
	nb_var = 0;

	while (chaine[++i])

	return (nb_var);

}

int		ft_printf(const char * restrict chaine, ...)
{
	char		output[MAX_LENGTH];
	t_main		data;
	t_list_var	*var_list;

	va_start(data.args, chaine);
	va_copy(data.save, data.args);

	if ((data.nb_var = parse_chaine(chaine)) < 0)
		return (-1);

	transform_string(chaine, output, data, var_list);
	ft_putstr(output);

	return (t_strlen(output));
}
