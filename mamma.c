#include <stdio.h>

int main()
{
    int eta;
    printf ("quanti anni hai?\n");
    scanf ("%d", &eta);
    if (eta > 18)
    {
        printf("sei maggiorenne\n");
    }
    else
    {
        printf("sei minorenne\n");
    }
}