#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <math.h>
int main(int argc, char **argv)
{
    float a, b, c, delta, root1, root2;
    setlocale(LC_ALL, "");
    if (argc != 4) // Failture exit.
    {
        puts("Usage: ./program 'attribute-A' 'atribute-B' 'atribute-C'!\n");
    }
    else // Normal running
    {
        a = atof(argv[1]);
        b = atof(argv[2]);
        c = atof(argv[3]);
        delta = sqrt(b * b + -4 * a * c);
        if (delta > 0)
        {
            root1 = (-b + delta) / 2 * a;
            root2 = (-b - delta) / 2 * a;
            printf("\nRoot-1:%.2f\nRoot-2:%.2f\n", root1, root2);
        }
        else if (delta == 0)
        {
            root1 = (-b) / 2 * a;
            printf("\nRoot:%.2f\n", root1);
        }
        else
        {
            printf("\nNo real root!\n");
        }
    }

    return 0;
}