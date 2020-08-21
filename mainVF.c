/*
 *  Actividad Hospital
 *
 *  Daniel Roa
 *  A01021960
 */
 #include <stdio.h>
 #include <stdlib.h>

typedef struct registroPacientes{
    char * nombre;
    char * apellido;
    int edad;
    char * noTel;
    int noCama;
    int enUso;
}pacientes;


int main(int argc, char const *argv[])
{
    
    int new = 0,\
    registro = 2,\
    menu = 0, \
    contUsadas = 0, \
    contVacias = 0;

    pacientes * hospital; 
    pacientes * sup;

    printf("\nPor favor, ingrese los datos de los dos pacientes a continuación.");

    hospital = (pacientes *) malloc(sizeof(pacientes)*registro);

    pacientes * fin = hospital + registro;

    for (sup = hospital; sup < fin; ++sup){
        printf("\nInserte los datos que se soliciten a continuación.\n");

        sup->nombre = (char *)malloc(sizeof(char) * 30);
        sup->apellido = (char *)malloc(sizeof(char) * 30);
        printf("Nombre y apellido: ");
        scanf("%s %s", sup->nombre, sup->apellido);

        printf("Edad: ");
        scanf("%d", &sup->edad);

        sup->noTel = (char *)malloc(sizeof(char) * 14);
        printf("Número telefónico: ");
        scanf("%s", sup->noTel);

        printf("Cama que se le asignó: ");
        scanf("%d", &sup->noCama);

        sup->enUso = 1;
    }

    printf("%d", registro);

    do{
        
        printf("\nEscoga alguna de las siguientes opciones:\n1) Añadir un paciente nuevo\n2) Buscar a un paciente usando el número de la cama\n3) Dar de alta a un paciente\n4) Ver el registro de pacientes\n5) Ver cuantas camas están disponibles\nO presione el 0 para salir\n");
        scanf("%d", &menu);

        switch (menu){
        case 0:
            break;

        case 1:
            printf("Primer caso\n");

            registro += 5;

            printf("%d", registro);

            break;

        case 2:
            printf("Segundo caso\n");
            break;

        case 3:
            printf("Tercer caso\n");
            break;

        case 4:
            // printf("Cuarto caso\n");
            printf("\nNombre y apellido\t \t\t cama asignada\n");

            for (sup = hospital; sup < fin; ++sup){
                printf("%s %s\t \t\t\t %d\n", sup->nombre, sup->apellido, sup->noCama);
            }
            
            break;

        case 5:
            // printf("Caso 5");

            for (sup = hospital; sup < fin; ++sup){
                
                if (sup->enUso == 1){
                    contUsadas++;
                }else if (sup->enUso == 0){
                    contVacias++;
                }

            }
            
            printf("\nCamas ocupadas: %d\nCamas vacías: %d\n", contUsadas, contVacias);

            break;

        default:
            break;
        }

    } while (menu != 0);
    
    for (sup = hospital; sup < fin; ++sup){
        free(sup->nombre);
        free(sup->apellido);
        free(sup->noTel);
    }
    
    free(hospital);

    return 0;
}
