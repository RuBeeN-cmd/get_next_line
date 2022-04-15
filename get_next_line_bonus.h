/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrollin <rrollin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 09:51:24 by rrollin           #+#    #+#             */
/*   Updated: 2022/04/15 13:48:16 by rrollin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include<unistd.h>
# include<stdlib.h>

typedef struct s_dict_cell
{
	int					fd;
	int					ret;
	char				*buf;
	struct s_dict_cell	*next;
}	t_dict_cell;

char		*get_next_line(int fd);
t_dict_cell	*ft_lstget_cell(int fd, t_dict_cell **list);
t_dict_cell	*ft_lstnew(int fd);
void		ft_lstdel_one(t_dict_cell *cell, t_dict_cell **list);
int			ft_chr(char *str, char c);
int			ft_loop_read(int fd, t_dict_cell *cell);
char		*ft_strjoin(char *s1, char *s2);
char		*ft_sub(char *s, int start, int len);
int			ft_read(char *str, t_dict_cell *cell, int fd);
char		*ft_start_read(int fd, t_dict_cell **list, t_dict_cell **tp);

#endif
