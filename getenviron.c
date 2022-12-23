/**
 * getenviron - static wrapper copy whole environ
 *
 * Description:
 * Return: environ address
 */
char ***getenviron()
{
	static char **environ;

	return (&environ);
}
