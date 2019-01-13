#include <stdio.h>
#include <stdlib.h>

int eval(char* expr)
{
    return 0;
}

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
    if (argc == 1)
    {
        printf("The argument supplied is %s \n", argv[1]);
    }

    else
    {
        printf("One argument expected. \n");
        return 0;
    }

    while (1)
    {
        eval(read());
    }

    return 0;
}
