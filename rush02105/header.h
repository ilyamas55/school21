/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktiong <ktiong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 12:24:03 by ktiong            #+#    #+#             */
/*   Updated: 2021/04/11 13:41:44 by ktiong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H
# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>
# include <stdio.h>

char	*read_dict(char *d);
int		error_check(int argc, char *str);
void	print_error(char *err);
int		ft_is_number(char *str);

int		dict(char *dic, char *str);
char	**allocation(char *a);
char	**do_your_job(char *arg, char **arr, int leng, int first);
char	**copy_dict(char *dic);
int		validate_word(char *str);

char	**creation_arr(char *buf);
int		row_count(char *buf);
int		ft_strcmp(char *s1, char *s2);
char	*ft_strdup(char *src);
void	typeord(char **a, int count, int max, int i);

void	validate_data(char *n, char **word, int count);
void	validate_1(char **arr, char digit, int count);
void	validate_2(char **arr, char *digits, int count);
void	validate_3(char **arr, char digit, int count);
int		calculate(char *s);

char	*ft_atoi(char **a, int leng, char *find);
int		ft_strlen(char *str);
char	*ft_strcpy(char *dest, char *src);

#endif
