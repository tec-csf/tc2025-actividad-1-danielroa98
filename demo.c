#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct
{
    char * nombre;
}paciente;

int main(int argc, char const *argv[])
{
    char * cmp[30];

    paciente * registro;
    paciente * aux;

    registro = (paciente *) malloc(sizeof(paciente) * cmp);

    printf("Cuál es el nombre del paciente?")
    scanf("&s", );

    return 0;
}
