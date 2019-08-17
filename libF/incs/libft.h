/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_libft.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcajee <tcajee@student.wethinkcode.co.za>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 12:27:09 by tcajee            #+#    #+#             */
/*   Updated: 2019/08/15 08:10:45 by tcajee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <string.h>
#include <unistd.h>


/* F */
/* _ */
/* _F */
/* F_ */
/* _F_ */
/* F__ */



#define _(x, y) else (x)
#define F(x, y) if (x) y

#define FF(x, y, z) if (x && y) z
#define _F(x, y) else if (x) y
#define __(x) else return x
#define F_(x, y) if (x) return y

#define _F_(x, y) else if (x) return y
#define F__(x, y) F_(x, y)__(x) // y else return y
#define FF_(x, y, z) if (x && y) return z
#define _FF(x, y, z) else if (x && y) z
#define F_F(x, y, z) F(x, y)_F(x, z) // if (x) z else if (y) z

#define FFF(x, y, z) (x) ? y : z // F(F(F(x, y), y ), z) ||   if (x && y && z)
#define ___(x, y, z) (x) ? return y : return z
#define __F(x, y) else F(x, y) return _F(x, y) // if (y)



/* # define F_(x, y) if (x) y */
/* # define _F(x, y) else if (x) y */
/* # define _(x) else (x) */
/* # define FT_(x, y) if (x) return y */
/* # define _FT(x, y) else if (x) return y */

# define FT__(x, y, z) if (x) y = z
# define FT_B(x) if (x) break;
# define FT_X(x) return (x);

# include "get_next_line.h"
# include "ft_ls.h"
# include "sysinfo.h"

typedef	struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

void				ft_bzero(void *s, size_t n);
void				*ft_memset(void *b, int c, size_t n);
void				*ft_memcpy(void *dst, const void *src, size_t n);
void				*ft_memccpy(void *dst, const void *src, int c, size_t n);
void				*ft_memmove(void *dst, const void *src, size_t n);
void				*ft_memchr(const void *s, int c, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
void				*ft_memalloc(size_t size);
void				ft_memdel(void **ap);

size_t				ft_strlen(const char *s);
char				*ft_strdup(const char *s1);
char				*ft_strcpy(char *dst, const char *src);
char				*ft_strncpy(char *dst, const char *src, size_t n);
char				*ft_strcat(char *s1, const char *s2);
char				*ft_strncat(char *s1, const char *s2, size_t n);
size_t				ft_strlcat(char *dst, const char *src, size_t dstsize);
char				*ft_strchr(const char *s, int c);
char				*ft_strrchr(const char *s, int c);
char				*ft_strstr(const char *hstack, const char *needle);
char				*ft_strnstr(const char *hstack, const char *needle,
		size_t n);
int					ft_strcmp(const char *s1, const char *s2);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
char				*ft_strnew(size_t size);
void				ft_strdel(char **as);
void				ft_strclr(char *s);
void				ft_striter(char *s, void (*f)(char *));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
char				*ft_strmap(char const *s, char (*f)(char));
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int					ft_strequ(char const *s1, char const *s2);
int					ft_strnequ(char const *s1, char const *s2, size_t n);
char				*ft_strsub(char const *s, unsigned int start, size_t n);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strtrim(char const *s);
char				**ft_strsplit(char const *s, char c);
size_t				ft_strwcount(const char *s, int c);
const char			*ft_strwnext(const char *s, int c);
size_t				ft_strwlen(const char *s, int c);
char				*ft_strrev(char *s);

int					ft_atoi(const char *str);
char				*ft_itoa(int n);

int					ft_isalpha(int c);
int					ft_isdigit(int c);
int					ft_isalnum(int c);
int					ft_isascii(int c);
int					ft_isprint(int c);
int					ft_toupper(int c);
int					ft_tolower(int c);
int					ft_isspace(int c);

void				ft_putchar(char c);
void				ft_putstr(char const *s);
void				ft_putendl(char const *s);
void				ft_putnbr(int n);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char const *s, int fd);
void				ft_putendl_fd(char const *s, int fd);
void				ft_putnbr_fd(int n, int fd);

t_list				*ft_lstnew(void const *content, size_t content_size);
void				ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void				ft_lstadd(t_list **alst, t_list *nw);
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));

#endif
