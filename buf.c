#include "holberton.h"

int binit(t_buf *buffer, int size)
{
	if (buffer)
	{
		buffer->buf = malloc(size);
		buffer->pos = 0;
		buffer->size = buffer->buf ? size : 0;
		_memset(buffer->buf, 0, buffer->size);
		return (buffer->size);
	}
	return (0);
}

void bfree(t_buf *buffer)
{
	if (buffer)
	{
		free(buffer->buf);
		buffer->buf = NULL;
		buffer->pos = 0;
		buffer->size = 0;
	}
}

int bwrite(t_buf *buffer, const char *src, int count)
{
	int n;

	if (src && buffer && buffer->buf && buffer->size)
	{
		for (n = 0; n < count; ++n)
		{
			if (bputchar(buffer, src[n]) < 0)
				return (-1);
		}
		return (n);
	}
	return (0);
}

int bputchar(t_buf *buffer, int c)
{
	if (buffer && buffer->buf && buffer->size)
	{
		if (buffer->pos == buffer->size && bflush(1, buffer) < 0)
			return (-1);

		buffer->buf[buffer->pos++] = c;
		return (1);
	}
	return (0);
}

int bflush(int fd, t_buf *buffer)
{
	if (buffer && buffer->buf && buffer->size)
	{
		if (write(fd, buffer->buf, buffer->pos) < 0)
			return (-1);

		_memset(buffer->buf, 0, buffer->pos);
		buffer->pos = 0;
		return (1);
	}
	return (0);
}
