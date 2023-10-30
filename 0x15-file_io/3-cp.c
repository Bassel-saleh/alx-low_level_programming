#include "main.h"
/**
 * main - copies the content of a file to another file
 * @argc: the number of arguments
 * @argv: the array of arguments
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int m_file1, m_file2, m_read, a, b;
	char buff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	}
	m_file1 = open(argv[1], O_RDONLY);
	if (m_file1 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	m_file2 = open(argv[2], O_TRUNC | O_CREAT | O_WRONLY, 0664);
	while ((m_read = read(m_file1, buff, 1024)) > 0)
	{
		if (m_file2 < 0 || (write(m_file2, buff, m_read) != m_read))
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
		}
	}
	if (m_read < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	a = close(m_file1);
	if (a < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", m_file1), exit(100);
	}
	b = close(m_file2);
	if (b < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", m_file2), exit(100);
	}
	return (0);
}
