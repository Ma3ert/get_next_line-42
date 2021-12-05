/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yait-iaz <yait-iaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 12:45:05 by yait-iaz          #+#    #+#             */
/*   Updated: 2021/11/24 14:19:29 by yait-iaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include<stdlib.h>
# include<unistd.h>
# include <fcntl.h>
# include <stdio.h>

char	*ft_strdupi(const char *s1, int l);
size_t	ft_strlen(const char *s);
char	*get_next_line(int fd);
char	*ft_strjoin(char *s1, char *s2);
char	*get_new_line(char *buffer);
char	*get_rest(char *buffer);
char	*get_new_buffer(char *rest, char *buffer);
char	*ft_strchr(const char *s, int c);
char	*get_buffer(char *buffer, int fd, char *rest, int nbyte);

#endif