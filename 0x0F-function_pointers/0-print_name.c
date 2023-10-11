/**
 * print_name - prints a name
 * @name: the to be printed
 * @f: a function to execute
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != 0 && f != 0)
		f(name);
}
