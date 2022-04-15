#include <unistd.h>

char alpha(char c)
{
        return (write(1, &c, 1));
}

int main(void)
{
        char a;

        for (a = 97; a < 123; a++)
                alpha(a);
        alpha('\n');
        return (0);
}
