#include <stdio.h>

int main()
{
    char c[5] = {'c', 'h', 'i', 'n', 'a'};
    for (int i = 0; i < 5; i++)
        printf(" %c ", c[i] + 4);
    return 0;
}
