#include "main.h"
/**
 * create_file - creates a file
 * @filename: the file to be processed
 * @text_content: the content that will be in the created file
 * Return: 1 if success, -1 if it fails
 */
int create_file(const char *filename, char *text_content)
{
	register int m_file, m_write, len = 0;

	if (!(filename))
		return (-1);
	m_file = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (m_file == -1)
		return (-1);
	if (text_content)
	{
		while (text_content[len])
		{
			len++;
		}
		m_write = write(m_file, text_content, len);
		if (m_write == -1)
			return (-1);
	}
	close(m_file);
	return (1);
}
