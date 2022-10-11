#ifndef LIBFT_H
#define LIBFT_H
#include <unistd.h>
#include <stdlib.h>
void ft_bzero(void *s, size_t n);
int ft_isalnum(int c);
int ft_isalpha(int c);
int ft_isascii(int c);
int ft_isdigit(int c);
int ft_isprint(int c);
void *ft_memcpy(void *dest , void *src , size_t n);
void *ft_memset(void *k, int c, size_t l);
char *ft_strchr(const char *s, int c);
size_t ft_strlen(char *str);
int ft_strncmp(const char *q, const char *w, size_t n);
char *ft_strnstr(const char *hay, const char *ned,size_t l );
int ft_tolower(int c);
int ft_toupper(int c);
char *ft_strrchr(const char *s, int c);
void ft_putchar_fd(char c, int fd);
char *ft_substr(char const *s, unsigned int start,size_t len);
char *ft_strtrim(char const *s1, char const *set);
#endif