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
    if (x-y==y-z)
   { 
    printf ("i numeri sono in prgressione aritmetica");
    }
    else
    {
        printf ("non è una  prpgressione aritmetica");
    }
}