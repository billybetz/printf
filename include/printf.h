#ifndef PRINTF_H
# define PRINTF_H

# include <stdarg.h>

# define MAX_LENGTH

typedef struct	s_list_var
{
	// nombre de caractere definissant la variable dans la chaine
	int					var_size;

	char 				*flag;
	char 				*width;
	char 				*precision;
	char 				*modificator;
	char 				*type;

	struct s_list_var	*next;

}				t_list_var;

typedef struct 	s_list_data
{
	char	*da
};

typedef struct 	s_main
{
	int					nb_var;
	va_list				args;
	va_list				save;
}				t_main;

#endif 