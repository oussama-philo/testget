#include "get_next_line.h"

size_t ft_strlen(const char *str)
{
	size_t i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

// void *ft_calloc(size_t nmemb, size_t size)
// {
// 	void *ptr;
// 	size_t total_n;
// 	unsigned char *tmp;

// 	total_n = size * nmemb;
// 	ptr = malloc(total_n);
// 	if (ptr == NULL)
// 		return (NULL);
// 	tmp = (unsigned char *)ptr;
// 	while (total_n)
// 	{
// 		*tmp++ = 0;
// 		total_n--;
// 	}
// 	return (ptr);
// }

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	const unsigned char *s;
	unsigned char *d;
	size_t i;

	s = (const unsigned char *)src;
	d = (unsigned char *)dest;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
char *ft_strjoin(char const *s1, char const *s2)
{
	size_t total_len;
	char *str_total;

	if (!s1 && !s2)
		return (NULL);
	if (!s1)
		return (ft_strdup(s2));
	if (!s2)
		return (ft_strdup(s1));
	total_len = ft_strlen(s1) + ft_strlen(s2);
	str_total = malloc((total_len + 1) * sizeof(char));
	if (!str_total)
		return (NULL);
	while (total_len)
	{
		*str_total++ = 0;
		total_len--;
	}
	ft_memcpy(str_total, s1, ft_strlen(s1));
	ft_memcpy(str_total + ft_strlen(s1), s2, ft_strlen(s2));
	return (str_total);
}
char *ft_strdup(const char *src)
{
	char *reserve;
	size_t len;
	size_t i;

	len = ft_strlen(src);
	reserve = (char *)malloc((len + 1) * sizeof(char));
	if (reserve == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		reserve[i] = src[i];
		i++;
	}
	reserve[len] = '\0';
	return (reserve);
}

char *ft_strchr(const char *s, int c)
{
	char target;
	const char *ptr;

	if (!s)
		return (NULL);
	target = (char)c;
	ptr = s;
	while (*ptr)
	{
		if (*ptr == target)
		{
			return ((char *)ptr);
		}
		ptr++;
	}
	if (*ptr == target)
	{
		return ((char *)ptr);
	}
	return (NULL);
}
