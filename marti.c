    #include  <stdio.h>

    int main()
    {
        int eta;
        char sesso;
        printf ("quanti anni hai?\n");
        scanf ("%d", &eta);
        printf ("quale è il tuo sesso?\n");
        scanf (" %c", &sesso);
        printf ("hai %d e sei %c", eta, sesso);
    }