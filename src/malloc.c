//TODO header

#include <stdio.h> //TODO
#include "malloc.h"

void	*malloc(size_t size)
{
	return mmap(0, size, PROT_READ|PROT_WRITE, MAP_ANONYMOUS|MAP_PRIVATE, -1, 0);	
}

int	main()
{
	printf("Page size %i\n", getpagesize());
	/*char	*test =(char *) mmap(0, 36, PROT_READ|PROT_WRITE, MAP_ANONYMOUS|MAP_PRIVATE,
		-1, 0);*/
	char	*test = (char *)malloc(5);
	char	*test2 = (char *)malloc(5);
	for (int i = 0; i < 100; i++)
	{
		test[i] = i + 65;
		test2[i] = i + 66;
	}
	printf("Test %s\n", test);
	printf("Test2 %s\n", test2);
}
