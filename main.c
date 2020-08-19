/*
 *  Actividad Hospital
 *
 *  Daniel Roa
 *  A01021960
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct camasHospitales{
    int noCama;
    int inUse;
}cama;

typedef struct{
    char nombre[30];
    char apellidoP[30];
    int edad;
    char noTel[15];
    struct camasHospitales camaActual;
    struct camasHospitales enUso;
} pacientes;

int main(int argc, char const *argv[])
{

    pacientes * hospital;
    pacientes * sup;

    int beds, menu = 0, mas = 0, i = 1, nuevos = 5;

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

        printf("Edad: ");
        scanf("%d", &sup->edad);

        printf("Número telefónico: ");
        scanf("%s", sup->noTel);

        printf("Cama en la que se encuentra: ");
        scanf("%d", &sup->camaActual.noCama);
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
            printf("\nDesea añadir mas pacientes?\nPresione 0 para no y 1 para si\n");
            scanf("%d", &mas);

            if (mas == 1){

                printf("\nAutomaticamente se van a añadir 5 lugares nuevos\n");

                hospital = (pacientes *) realloc(hospital, sizeof(pacientes) * (beds + nuevos));

                printf("Ingresa el nombre de los pacientes a insertar\n(deja un espacio en blanco si ya no hay pacientes por insertar)\n");

                fin = hospital + beds + nuevos;

                for (sup = hospital + beds; sup < fin; ++sup){
                    printf("Paciente #%d\n", i);

                    printf("Nombre: ");
                    scanf("%s", sup->nombre);

                    printf("Apellido paterno: ");
                    scanf("%s", sup->apellidoP);

                    printf("Edad: ");
                    scanf("%d", &sup->edad);

                    printf("Número telefónico: ");
                    scanf("%s", sup->noTel);

                    printf("Cama en la que se encuentra: ");
                    scanf("%d", &sup->camaActual.noCama);

                    i++;
                }
            }
            
            
            break;

        case 2:
            printf("Caso 2\n");
            break;

        case 3:
            printf("Caso 3\n");
            break;

        case 4:

            for (sup = hospital; sup < fin; ++sup){
                printf("Nombre: %s %s \t\t Cama en la que se encuentra:%d \n", sup->nombre, sup->apellidoP, sup->camaActual.noCama);
            }
            
            break;

        case 5:
            printf("Caso 5\n");
            break;

        default:
            printf("Porfavor, elija una opción valida\n");
            break;
        }
        

    } while (menu != 0);
    

    return 0;
}
