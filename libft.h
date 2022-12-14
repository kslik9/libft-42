/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kslik <kslik@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 10:27:47 by kslik             #+#    #+#             */
/*   Updated: 2022/10/21 19:15:13 by kslik            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>

void	ft_bzero(void *s, size_t n);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memset(void *k, int c, size_t l);
char	*ft_strchr(const char *s, int c);
size_t	ft_strlen(char *str);
int		ft_strncmp(const char *q, const char *w, size_t n);
char	*ft_strnstr(const char *hay, const char *need, size_t len);
int		ft_tolower(int c);
int		ft_toupper(int c);
char	*ft_strrchr(const char *s, int c);
void	ft_putchar_fd(char c, int fd);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strtrim(char const *s1, char const *set);
void	ft_putstr_fd(char *s, int fd);
void	*ft_calloc(size_t num, size_t size);
void	*ft_memmove(void *dst, const void *src, size_t l);
void	*ft_memchr(const void *k, int c, size_t n);
int		ft_memcmp(const void *f, const void *s, size_t n);
char	*ft_strdup(const char *s1);
size_t	ft_strlcat(char *dest, char *src, size_t n);
size_t	ft_strlcpy(char *d, char *s, size_t dsize);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_itoa(int n);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
char	**ft_split(char const *s, char c);
int		ft_atoi(const char *str);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
#endif
