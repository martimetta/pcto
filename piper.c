#include <stdio.h>
    int main()
    {
        char sesso;

        printf ("quale è il tuo sesso\n");
        scanf (" %c", &sesso);
        if (sesso == 'm')
        {
        printf("sei maschio\n");
        }
        else if (sesso == 'f')
        {
        printf("sei femmina\n");
        }
        else if (sesso == 'n')
        {
            printf ("sei non identifcato\n");
        }
        else
        {
            printf ("érrore");
        }
    }