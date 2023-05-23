#include <unistd.h>
#include <string.h>

int rand()
{
	static int ct = -1;

	ct++;

	if (ct == 0)
		return (8);
	else if (ct == 1)
		return (8);
	else if (ct == 2)
		return (7);
	else if (ct == 3)
		return (9);
	else if (ct == 4)
		return (23);
	else if (ct == 5)
		return (74);

	return (ct * ct % 30000);
}
