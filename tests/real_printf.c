#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int ac, char **av)
{
	int ret;
	int	i;

	i = 1;
	char *var;

	var = malloc(sizeof(char) * 1024);

	/* Conversion */
	printf("\n\t------ convertion ------\n");
	
	var = "\"[%s] -> test\"";
	ret = printf("test %d :\t %-30s\t [%s] \n", i, var, "test");
	i++;

	var = "\"[%S] -> test\"";
	ret = printf("test %d :\t %-30s\t [%S] \n", i, var, "test");
	i++;

	var = "\"[%d] -> 42\"";
	ret = printf("test %d :\t %-30s\t [%d] \n", i, var, 42);
	i++;

	var = "\"[%D] -> 42\"";
	ret = printf("test %d :\t %-30s\t [%D] \n", i, var, 42);
	i++;

	/* NULL */
	printf("\n\t------ NULL ------\n");
	
	var = "\"[%c] -> null\"";
	ret = printf("test %d :\t %-30s\t [%c] \n", i, var, NULL);
	i++;

	var = "\"[%s] -> null\"";
	ret = printf("test %d :\t %-30s\t [%s] \n", i, var, NULL);
	i++;


	/* flag [-] */
	printf("\n\t------ flag [-] ------\n");
	var = "\"[\"%-10d] -> 42\"";
	ret = printf("test %d :\t %-30s\t [%-10d] \n", i, var, 42);
	i++;


	/* flag [+] */
	printf("\n\t------ flag [+] ------\n");
	
	var = "\"[\"%+d] -> 42\"";
	ret = printf("test %d :\t %-30s\t [%+d] \n", i, var, 42);
	i++;

	var = "\"[\"%+10d] -> 42\"";
	ret = printf("test %d :\t %-30s\t [%+10d] \n", i, var, 42);
	i++;


	/* flag [(space)] */
	printf("\n\t------ flag [(space)] ------\n");
	var = "\"[% d] -> 42\"";
	ret = printf("test %d :\t %-30s\t [% d] \n", i, var, 42);
	i++;

	var = "\"[%   d] -> 42\"";
	ret = printf("test %d :\t %-30s\t [%   d] \n", i, var, 42);
	i++;

	var = "\"[% d] -> -42\"";
	ret = printf("test %d :\t %-30s\t [% d] \n", i, var, -42);
	i++;


	/* flag [0] */
	printf("\n\t------ flag [0] ------\n");
	var = "\"[%0d] -> 42\"";
	ret = printf("test %d :\t %-30s\t [%0d] \n", i, var, 42);
	i++;

	var = "\"[%010d] -> 42\"";
	ret = printf("test %d :\t %-30s\t [%010d] \n", i, var, 42);
	i++;


	/* flag [#] */
	printf("\n\t------ flag [#] ------\n");
	var = "\"[%#x] -> 42\"";
	ret = printf("test %d :\t %-30s\t [%#x] \n", i, var, 42);
	i++;

	var = "\"[%#0x] -> 42\"";
	ret = printf("test %d :\t %-30s\t [%#0x] \n", i, var, 42);
	i++;

	var = "\"[%#o] -> 42\"";
	ret = printf("test %d :\t %-30s\t [%#o] \n", i, var, 42);
	i++;
	
	var = "\"[%#e] -> 42.00\"";
	ret = printf("test %d :\t %-30s\t [%#e] \n", i, var, 42.00);
	i++;

	var = "\"[%#E] -> 42.00\"";
	ret = printf("test %d :\t %-30s\t [%#E] \n", i, var, 42.00);
	i++;

	return (0);
}
