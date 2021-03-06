/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbelo-so <gbelo-so@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 22:46:24 by gbelo-so          #+#    #+#             */
/*   Updated: 2022/02/27 15:50:28 by gbelo-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define MAX_FD 256
# include <unistd.h>
# include <stdlib.h>
# define BUFFER_SIZE 10000

char	*get_next_line(int fd);
char	*ft_substr(char const *s, size_t start, size_t len);
size_t	ft_strlen(const char *string);
char	*ft_strdup(const char *src);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strchr(const char *s, int c);

#endif