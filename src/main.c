#include <stdio.h>
#include <stdlib.h>

char* read()
{
    char* expr = malloc(256);
    fgets(expr, 256, stdin);
    return expr;
}

int eval(char* expr)
{
    return 0;
}

int main(int argc, char* argv[])
{
    while (1)
    {
        eval(read());
    }
    return 0;
}
