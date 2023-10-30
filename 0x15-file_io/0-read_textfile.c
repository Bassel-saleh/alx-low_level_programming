#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: the name of the file to be processed
 * @letters: the number of letters it should read and print
 * Return: returns the actual number of letters it could read and print unless
 * return 0 if filename is NULL or
 * write fails or does not write the expected amount of bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	register int m_open, m_read, m_write;
	register char *buff = malloc(sizeof(char) * letters);

	if (!(buff))
	{
		free(buff);
		return (0);
	}
	if (!(filename))
		return (0);
	m_open = open(filename, O_RDONLY);
	m_read = read(m_open, buff, letters);
	m_write = write(STDOUT_FILENO, buff, m_read);
	if (m_open == -1 || m_read == -1 || m_write == -1 || !(m_write == m_read))
	{
		free(buff);
		return (0);
	}
	free(buff);
	close(m_open);
	return (m_write);
}
