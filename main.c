/*
 *  Actividad Hospital
 *
 *  Daniel Roa
 *  A01021960
 */
#include <stdio.h>
#include <stdlib.h>
// #include <string.h>

typedef struct{
    char nombre[30];
    char apellidoP[30];
    char apellidoM[30];
    int edad;
    char noTel[15];
    int cama;
} pacientes;

int main(int argc, char const *argv[])
{

    pacientes * hospital;
    pacientes * sup;

    int beds;
    int menu = 0;

    printf("Cuántos pacientes tiene registrados? ");
    scanf("%d", &beds);

    hospital = (pacientes *) malloc(sizeof(pacientes)*beds);

    pacientes * fin = hospital + beds;

    for (sup = hospital; sup < fin; ++sup){
        printf("Inserte los datos del paciente\n");

        // sup->nombre = (char *) malloc(sizeof(char) * 30);

        printf("Nombre: ");
        scanf("%s", sup->nombre);

        printf("Apellido paterno: ");
        scanf("%s", sup->apellidoP);

        printf("Apellido materno: ");
        scanf("%s", sup->apellidoM);

        printf("Edad: ");
        scanf("%d", &sup->edad);

        printf("Número telefónico: ");
        scanf("%s", sup->noTel);

        printf("Cama en la que se encuentra: ");
        scanf("%d", &sup->cama);
    }
    
    do{

    printf("\n\nEscoga una de las siguientes opciones:\n1)Añadir un paciente nuevo\n2)Checar la disponibilidad de una cama\n3)Dar de alta a un paciente\n4)Ver a los pacientes registrados\n5)Ver la disponibilidad de las camas\nPara salir, presione el botón 0\n");
    scanf("%d", &menu);

        switch (menu)
        {
        case 0:
            printf("Adios\n");
            break;
        
        case 1:
            printf("Caso 1\n");
            break;

        default:
            printf("Porfavor, elija una opción valida\n");
            break;
        }
        

    } while (menu != 0);
    

    return 0;
}
