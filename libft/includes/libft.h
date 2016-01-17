/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvaude <mvaude@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 11:10:35 by mvaude            #+#    #+#             */
/*   Updated: 2015/04/21 22:28:00 by mvaude           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <wchar.h>
# include <inttypes.h>

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

int					ft_abs(int i);
int					ft_atoi(char *str);
void				ft_bzero(void *s, size_t n);
void				*ft_calloc(size_t count, size_t size);
size_t				ft_intlen(long long n);
int					ft_isalnum(int c);
int					ft_isalpha(int c);
int					ft_isascii(int c);
int					ft_isblank(int c);
int					ft_iscntrl(int c);
int					ft_isdigit(int c);
int					ft_isgraph(int c);
int					ft_islower(int c);
int					ft_isprint(int c);
int					ft_ispunct(int c);
int					ft_issign(int c);
int					ft_isspace(int c);
int					ft_isupper(int c);
int					ft_isxdigit(int c);
char				*ft_itoa(int n);
void				ft_lstadd(t_list **alst, t_list *new);
void				ft_lstdel(t_list **alst, void (*del)(void*, size_t));
void				ft_lstdelone(t_list **alst, void (*del)(void*, size_t));
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
size_t				ft_lstlen(t_list *lst);
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
t_list				*ft_lstnew(void const *content, size_t content_size);
void				*ft_memalloc(size_t size);
void				*ft_memccpy(void *d, const void *s, int c, size_t n);
void				*ft_memchr(const void *s, int c, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
void				*ft_memcpy(void *dst, const void *src, size_t n);
void				ft_memdel(void **ap);
void				*ft_memmove(void *dst, const void *src, size_t n);
void				*ft_memset(void*b, int c, size_t len);
double				ft_pow(double nb, int power);
void				ft_putchar(char c);
void				ft_putchar_fd(char c, int fd);
void				ft_putendl(char const *s);
void				ft_putendl_fd(char const *s, int fd);
void				ft_putnbr(int n);
void				ft_putnbr_fd(int n, int fd);
void				ft_putstr(char const *s);
void				ft_putstr_fd(char const *s, int fd);
void				*ft_realloc(void *ptr, size_t size);
int					ft_strcasecmp(char const *s1, char const *s2);
char				*ft_strcat(char *s1, char *s2);
char				*ft_strchr(char const *s, int c);
void				ft_strclr(char *s);
int					ft_strcmp(char const *s1, char const *s2);
size_t				ft_strcspn(char const *s1, char const *s2);
char				*ft_strcpy(char *dst, char const *src);
void				ft_strdel(char **as);
char				*ft_strdup(char const *s1);
int					ft_strequ(char const *s1, char const *s2);
int					ft_stricmp(char const *s1, char const *s2);
void				ft_striter(char *s, void (*f)(char*));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
char				*ft_strjoin(char const *s1, char const *s2);
size_t				ft_strlcat(char *dst, char const *src, size_t size);
size_t				ft_strlen(char const *s);
char				*ft_strmap(char const *s, char (*f)(char));
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int					ft_strncasecmp(char const *s1, char const *s2, size_t n);
char				*ft_strcasestr(char const *s1, char const *s2);
char				*ft_strncat(char *s1, char const *s2, size_t n);
int					ft_strncmp(char const *s1, char const *s2, size_t n);
char				*ft_strncpy(char *dst, char const *src, size_t n);
int					ft_strnequ(char const *s1, char const *s2, size_t n);
char				*ft_strnew(size_t size);
char				*ft_strnstr(char const *s1, char const *s2, size_t n);
char				*ft_strpbrk(char const *s1, char const *s2);
double				ft_sqrt(double nb);
char				*ft_strrchr(char const *s, int c);
char				*ft_strrev(char *str);
char				**ft_strsplit(char const *s, char c);
size_t				ft_strspn(char const *s1, char const *s2);
char				*ft_strstr(char const *s1, char const *s2);
char				*ft_strsub(char const *s, unsigned int start, size_t len);
char				*ft_strtrim(char const *s);
void				ft_swap(char *a, char *b);
int					ft_tolower(int c);
int					ft_toupper(int c);
size_t				ft_wordcount(char *s, char c);
void				*check_malloc(size_t len);
int					ft_wcslen(wchar_t *wstr);
int					ft_wcstombs(char *str, wchar_t *wstr, int n);
int					ft_itoa_wchar(char *str, wchar_t wc);
char				*ft_strndup(const char *s1, size_t n);
char				*ft_strjoin_s2_freed(char *s1, char *s2);
char				*ft_itoa_imax(intmax_t n);
char				*ft_itoa_l(long long n);

#endif
