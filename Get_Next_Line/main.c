#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include "get_next_line.h"

int		main(int argc, char **argv)
{
	int		fd;
	char	*line;

	(void)argc;
	while (*++argv)
		if ((fd = open(*argv, O_RDONLY)) != -1)
		{
			while (get_next_line(fd, &line))
			{
				printf("%s\n", line);
				free(line);
			}
		}

	return (0);
}
