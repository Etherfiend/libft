#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void *callocated;

	if(nmemb == 0 || size == 0)
		return (NULL);
	callocated = malloc(nmemb * size);
	if(callocated)
		ft_bzero(callocated, size * nmemb);
	return (callocated);
}

#include <stdio.h>
#include <string.h>

int	main()
{
	char *s = (char *)ft_calloc(sizeof(char), strlen(s));
	printf("%s", s);
}
