/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcajee <tcajee@student.wethinkcode.co.za>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 14:24:02 by tcajee            #+#    #+#             */
/*   Updated: 2019/05/20 09:22:53 by tcajee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <unistd.h>
#include <stdlib.h>
#include <stddef.h>

typedef  struct  s_list
{
    void *content;
    size_t content_size;
    struct s_list *next;
}               t_list;

void    *memset(void *b, int c, size_t len);
void    bzero(void *s, size_t n);
void    *memcpy(void *restrict dst, const void *restrict src, size_t n);
void    *memccpy(void *restrict dst, const void *restrict src, int c, size_t n);
void    *memmove(void *dst, const void *src, size_t len);
void    *memchr(const void *s, int c, size_t n);
int memcmp(const void *s1, const void *s2, size_t n);
size_t  strlen(const char *s);
char    *strdup(const char *s1);
char    *strcpy(char * dst, const char * src);
char *strncpy(char * dst, const char * src, size_t len);
char    *strcat(char *restrict s1, const char *restrict s2);
char    *strncat(char *restrict s1, const char *restrict s2, size_t n);
size_t  strlcat(char * restrict dst, const char * restrict src, size_t dstsize);
char    *strchr(const char *s, int c);
char    *strrchr(const char *s, int c);
char    *strstr(const char *haystack, const char *needle);
char   *strnstr(const char *haystack, const char *needle, size_t len);
int strcmp(const char *s1, const char *s2);
int strncmp(const char *s1, const char *s2, size_t n);
int atoi(const char *str);
int isalpha(int c);
int isdigit(int c);
int isalnum(int c);
int isascii(int c);
int isprint(int c);
int toupper(int c);
int tolower(int c);
void    *ft_memalloc(size_t size);
void    ft_memdel(void **ap);
char    *ft_strnew(size_t size);
void    ft_strdel(char **as);
void    ft_strclr(char *s);
void    ft_striter(char *s, void (*f)(char *));
void ft_striteri(char *s, void (*f)(unsigned int, char *));
char    *ft_strmap(char const *s, char (*f)(char));
char    *ft_strmapi(char const *s, char (*f)(unsigned int, char));
int ft_strequ(char const *s1, char const *s2);
int ft_strnequ(char const *s1, char const *s2, size_t n);
char    *ft_strsub(char const *s, unsigned int start, size_t len);
char    *ft_strjoin(char const *s1, char const *s2);
char    *ft_strtrim(char const *s);
char    **ft_strsplit(char const *s, char c);
char    *ft_itoa(int n);
void    ft_putchar(char c);
void    ft_putstr(char const *s);
void    ft_putendl(char const *s);
void    ft_putnbr(int n);
void    ft_putchar_fd(char c, int fd);
void    ft_putstr_fd(char const *s, int fd);
void    ft_putendl_fd(char const *s, int fd);
void    ft_putnbr_fd(int n, int fd);
t_list  *ft_lstnew(void const *content, size_t content_size);
void    ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void    ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void    ft_lstadd(t_list **alst, t_list *new);
void    ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list  *ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));

#endif
