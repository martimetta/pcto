#include <stdio.h>
int main()
{
    int x;
    int y;
    int z;
    printf ("inserisci tre numeri?\n");
    scanf ("%d", &x);
    scanf ("%d", &y);
    scanf ("%d", &z);
    if (((x+y > z) && (y+z > x) && (z+x>y)))
    {
    printf ("è un triangolo");
    if (((x==y && x!=z) ||(y==z && y!=x) || (x==z && y!=z)))
    {
        printf ("è un triangolo iscoscele");
    }
    if (((x==y) && (y==z) && (z==x)))
    {
        printf ("é un triangolo equilatero");
    } 
    if (((x!=y) && (y!=z) && (z!=x)))
    {
        printf ("è un traingolo scaleno");
    }
    }

    else
    {
        printf ("non è un triangolo");
    }
}