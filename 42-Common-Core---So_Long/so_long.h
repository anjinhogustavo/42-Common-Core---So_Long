#ifndef SO_LONG_H
# define SO_LONG_H

# include "libft/libft.h"
# include "mlx/mlx.h"
# include <stdbool.h>
# include <stdio.h>
# include <X11/keysym.h>
# include <X11/Xlib.h>
# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>

// Key Code
# define ESC 65307
# define W_KEY 119
# define S_KEY 115
# define D_KEY 100
# define A_KEY 97
# define RIGHT_ARROW 65363
# define LEFT_ARROW 65361
# define UP_ARROW 65362
# define DOWN_ARROW 65364

typedef struct s_map_data
{
    int lines;
    int columns;
    int moves;
    int player_position[2];
    int	exit_position[2];
	char	**map;
	char	**dummy_map;
} t_map_data;

typedef struct s_content
{
	int		player;
	int		collectible;
	int		exit;
}			t_content;

typedef struct s_data
{
	t_map_data	*map_data;
	t_content	*content;
	void		*mlx;
	void		*win;
	void		*end_img;
	void		*end_win;
	void		**img;
	int			player_img_index;
}			t_data;