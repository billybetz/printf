#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

int		test(char *test, ...)
{
	int i;

	int d;
	char c;
	va_list args;

	i = 0;
	d = 42;
	c = '4';
	va_start(args, test);

	printf("while !\n");
	while (test[i])
	{
    	switch(test[i])
    	{
    		case 'd':                       /* int */
    			d = va_arg(args, int);
    			printf("int %d\n", d);
    			break;
    		case 'c':                       /* char */
    			/* Note: char is promoted to int. */
    			c = va_arg(args, int);
    			printf("char %c\n", c);
    			break;
    		default:
    			printf("normal : %c\n", test[i]);
    			break;
		}
		i++;
    }
    return (1);
}

int main(int ac, char **av)
{
	test("abcddd", '4', 42);

	return (1);
}
