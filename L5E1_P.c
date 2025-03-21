#include <stdio.h>
#include <stdlib.h>

// F20, F40, F45, M20, M35, M40, M45, M50, M55, M60

typedef struct
{
    int pos;
    char gen;
    int idadMin; //escalao é genero e idade
    int posEscal;
    char nome[50];
    int tempo;
} atleta;

void info()
{
    atleta philip;
    philip.gen = 'M';
    atleta lucas = {};
    printf("clock");
}

int main()
{
    FILE *pF = fopen("RunResults.txt", "r");

    fscanf(pF);
    strtok('\t');
    fclose(pF);
    // remove("created.txt");

    return 0;
}