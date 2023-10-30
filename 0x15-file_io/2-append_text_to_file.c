#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: the name of the file to be processed
 * @text_content: the text to be appended
 * Return: 1 (success), -1 (fails)
 */
int append_text_to_file(const char *filename, char *text_content)
{
	register int m_file, m_write, len = 0;

	if (!(filename))
		return (-1);
	m_file = open(filename, O_WRONLY | O_APPEND);
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
