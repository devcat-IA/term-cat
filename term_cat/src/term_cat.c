#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../include/term_cat.h"

void	print_usage(void)
{
	printf("Usage: ./term-cat [-n] <file>\n");
	printf("  -n : display line numbers\n");
}

void	print_file(FILE *file, int number_lines)
{
	char	*line = NULL;
	size_t	len = 0;
	ssize_t	read;
	int		line_number = 1;

	while ((read = getline(&line, &len, file)) != -1)
	{
		if (number_lines)
			printf("\033[1;36m%4d |\033[0m %s", line_number++, line);
		else
			printf("%s", line);
	}
	free(line);
}

int	main(int argc, char **argv)
{
	FILE	*file;
	int		number_lines = 0;
	char	*filename;

	if (argc < 2 || argc > 3)
		return (print_usage(), 1);
	if (argc == 3 && strcmp(argv[1], "-n") == 0)
	{
		number_lines = 1;
		filename = argv[2];
	}
	else if (argc == 2)
		filename = argv[1];
	else
		return (print_usage(), 1);

	file = fopen(filename, "r");
	if (!file)
	{
		perror("Error opening file");
		return (1);
	}
	print_file(file, number_lines);
	fclose(file);
	return (0);
}
