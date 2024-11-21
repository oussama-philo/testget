#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 5
#endif

/*-------------Includes----------------*/

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stddef.h>
# include <string.h>

# include <stdio.h>

/*-------------Func---------------------*/

char *get_next_line(int fd);

/*-------------Utiles Func---------------*/

char	*ft_strjoin(char const *s1, char const *s2);
void	*ft_memcpy(void *dest, const void *src, size_t n);
char	*ft_strdup(const char *src);
size_t	ft_strlen(const char *str);
char	*ft_strchr(const char *s, int c);

#endif
