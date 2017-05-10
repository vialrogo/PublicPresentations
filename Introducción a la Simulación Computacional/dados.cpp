#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main()
{
    srand (time(NULL));
    int numeroLanzamientos = 1000;
    int frecuencia [12] = {};

    for(int i=0; i<numeroLanzamientos; i++)
    {
        int dado1 = rand()%6 + 1;
        int dado2 = rand()%6 + 1;
        int suma = dado1+dado2;

        frecuencia[suma-1] ++;
    }

    for(int i=0; i<12; i++)
        printf("%d -> %d\n", i+1, frecuencia[i]);

}

