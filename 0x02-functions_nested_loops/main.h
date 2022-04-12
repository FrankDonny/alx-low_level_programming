#include <unistd.h>

int _putchar(char c);
char alpha(char a)
{
        return (write(1, &a, 1));
}
