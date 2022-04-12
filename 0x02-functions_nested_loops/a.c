#include <unistd.h>

void print_alphabet(void)
{
        return (write(1, &c, 1));
}

int main(void)
{
        char a;

        for (a = 97; a < 123; a++)
                print_alphabet(a);
        print_alphabet('\n');
        return (0);
}
