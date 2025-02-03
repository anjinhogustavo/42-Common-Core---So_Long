#include "so_long.h"

int	ver_empty_file(char *argv)
{
	int		fd;
	char	*line;

	fd = open(argv, O_RDONLY);
	line = get_next_line(fd);
	if (line == NULL)
	{
		close(fd);
		free(line);
		return (0);
	}
	close(fd);
	free(line);
	return (1);
}

int ver_retangular_map(char **map)
{
	int
}