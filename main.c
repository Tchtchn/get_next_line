#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>
#include <string.h>

int main(int argc, char *argv[])
{
	int i = 3;
	int fd = open("text", O_RDONLY);

	char	*s = get_next_line(fd);
	while (*s)
	{
		printf("%s", s);
		s = get_next_line(fd);
	}
	return (0);
}
