#ifndef FT_BSQ_H
# define FT_BSQ_H

# include <stdio.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>

# define BUF_SIZE 100000001

typedef struct s_map
{
	int		nb_l;
	int		nb_c;
	char	empty;
	char	obstacle;
	char	square;
	int		nb_char;
}				t_map;

int				ft_check_first_line(char *buf);
int				ft_is_printable(char c);

void			ft_init_res_nmax_emax(int **res);
void			ft_init_doubletab(int ***tab, int nb_c);
void			ft_init_tab(int **tab, int nb_c);
void			ft_switch_init_tab(int	**tab0, int **tab1);
void			ft_free_doubletab(int ***tab);

char			*ft_get_buf(char *path, int buf_size);
t_map			*get_map_info(char **buf);
int				ft_min_close(int **tab, int i, int j);
void			ft_fill_tab(char *buf, int *ij, t_map *data, int ***tab);
void			ft_fill_res(int **res, int ***tab, int *ij, t_map *data);

int				ft_atoi(char *str);
char			*ft_itoa(int nbr);
void			ft_fill_nbr(char **res, int nbr, int rang);
int				ft_str_is_numeric(char c);
int				ft_strlen(char *str);

void			ft_print_map(char *buf, int *res, t_map *data);
int				ft_print_global(char *buf);

char			*ft_get_buf_standard(void);
char			*ft_get_buf_file(char *path);

int				ft_map_error_int(void);
char			*ft_map_error_char(void);

void			ft_inits(char *buf, t_map *data, int *ij, int **res);

#endif
