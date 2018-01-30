/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_tranform.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbetz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/27 17:58:52 by bbetz             #+#    #+#             */
/*   Updated: 2018/01/27 17:58:55 by bbetz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// retourne la chaine en fonction de la variable de la chaine et de la valeur actuel de stdarg
// met la variable is_var a true si la chaine a bien ete transforme
char	*get_converted_string(t_main data, t_list_var var_list)
{
	
}

void	tranform_string( const char *chaine, char *output, t_main data, t_list_var *var_list)
{
	int 	i;
	char	*converted_string;
	bool	is_var;

	i = 0;
	while (chaine && chaine[i])
	{
		is_var = false;
		if (chaine[i] == '%')
		{
			converted_string = get_converted_string(data, var_list, &is_var);
			i += var_list->var_size;
			var_list = var_list->next;
			ft_stradd(converted_string);
		}
		if (is_var == false)
		{
			ft_stradd(output, chaine[i])
			i++;
		}
	}
}
