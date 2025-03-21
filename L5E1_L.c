#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "library.h"



int main(int argc, char const *argv[])
{
    if (argc = !3)
    {
        printf("Uso: %s <arquivo_corredores> <arquivo_organizado>\n", argv[0]);
        return 1;
    }

    carregar_arquivo(argv[1]);
    escreve(argv[2]);

    return 0;
}
