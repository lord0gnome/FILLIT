/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guiricha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 15:39:30 by guiricha          #+#    #+#             */
/*   Updated: 2016/01/04 16:19:31 by guiricha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

typedef struct		s_tetri
{
	int	x[4];
	int	y[4];
	int	height;
	int	length;
}					t_tetri;

typedef struct		s_data
{
	int	max;
	int	l;
	int	h;
}					t_data;

int					ft_atoi(const char *str);
void				ft_bzero(void *s, size_t n);
int					ft_isalnum(int c);
int					ft_isalpha(int c);
int					ft_isascii(int c);
int					ft_isdigit(int c);
int					ft_isprint(int c);
void				*ft_memalloc(size_t size);
void				*ft_memccpy(void *dst, void const *src, int c, size_t n);
void				*ft_memchr(const void *s, int c, size_t n);
void				*ft_memcpy(void *dst, void const *src, size_t n);
void				ft_memdel(void **ap);
void				*ft_memmove(void *dst, void const *src, size_t n);
void				*ft_memset(void *b, int c, size_t len);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
char				*ft_strnew(size_t size);
void				ft_putchar(char c);
void				ft_putnbr(int n);
void				ft_putstr(char const *s);
char				*ft_strcat(char *s1, const char *s2);
char				*ft_strchr(const char *s, int c);
void				ft_strclr(char *s);
char				*ft_strcpy(char *src, const char *dst);
void				ft_strdel(char **as);
char				*ft_strdup(const char *s1);
size_t				ft_strlcat(char *dst, const char *src, size_t size);
size_t				ft_strlen(const char *str);
char				*ft_strncat(char *s1, const char *s2, size_t n);
char				*ft_strncpy(char *src, const char *dst, size_t n);
char				*ft_strrchr(const char *s, int c);
char				*ft_strstr(const char *big, const char *little);
char				*ft_strnstr(const char *big, const char *little, size_t n);
int					ft_strcmp(const char *s1, const char *s2);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
int					ft_tolower(int c);
int					ft_toupper(int c);
char				**ft_strsplit(char const *s, char c);
char				*ft_strjoin(char const *s1, char const *s2);
void				ft_striter(char *s, void (*f)(char *));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
char				*ft_strmap(char const *s, char (*f)(char));
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int					ft_strequ(char const *s1, char const *s2);
int					ft_strnequ(char const *s1, char const *s2, size_t n);
char				*ft_strsub(char const *s, unsigned int start, size_t len);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strtrim(char const *s);
char				*ft_itoa(int n);
void				ft_putendl(char const *s);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char const *s, int fd);
void				ft_putendl_fd(char const *s, int fd);
void				ft_putnbr_fd(int n, int fd);
t_list				*ft_lstnew(void const *content, size_t content_size);
void				ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void				ft_lstadd(t_list **alst, t_list *new);
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list				*ft_lstmap(t_list *lst, t_list *(f)(t_list *elem));
int					ft_isspace(char c);
char				**ft_split(char *s);
int					ft_countw(char *str);
void				ft_lastword(char *str);
int					ft_max(int *tab, unsigned int len);
void				ft_strexpand(char *str);
size_t				ft_lstlen(t_list **first);
t_tetri				*ft_convert_list(char *str);
void				ft_lst_pushback(t_list **alst, void *c, size_t c_size);
int					ft_to_list(t_list **begin_list, int fd);
int					ft_check(t_list **begin_list);
t_data				*ft_data_init(void);
int					ft_check_form(char *s);
t_tetri				**ft_list_to_table(t_list **begin_list);
void				ft_print_tet_table(t_tetri **table);

#endif
