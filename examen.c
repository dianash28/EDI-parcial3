/*
    Escriba un programa en C que dada la siguiente declaración de estructuras:

    typedef struct {
        char nombre[40];
        char pais[25];
    }DatosPersonales;

    typedef struct{
        DatosPersonales datos;
        char deporte[30];
        int numMedallas;
    }Deportista;

    1. Realice una función que lea de un archivo de TEXTO la información de los deportistas.
    2. Realice una función que reciba los deportistas leídos y calcule e imprima el número de medallas por
    deporte.

    Nota: Dentro del código existe un arreglo que contiene los nombres de todos los deportes que existen en el archivo.

        char deporte[6][30] = {"Natación", "Atletismo", "Ciclismo", "Gimnasia", "Equitacion", "Esgrima"};
*/

#include <stdio.h>
#include <string.h>

typedef struct {

    char nombre[40];
    char pais[25];

}DatosPersonales;

typedef struct{
    DatosPersonales datos;
    char deporte[30];
    int numMedallas;

}Deportista;

int main()
{
    FILE *deport;
    int cerrado;
    int i;
    Deportista deportistas[100];


    // Puede cambiar la declaración de este arreglo a donde lo considere necesario
    
    deport=fopen("deportistas.txt", "r");
    for (i=0; i<6; i++)
    {
        fscanf(deport, "%s", deportistas->datos.nombre );
        fscanf(deport, "%s", deportistas->datos.pais );
        fscanf(deport, "%s", deportistas->deporte );
        fscanf(deport, "%d", &deportistas->numMedallas);
    }

    cerrado=fclose(deport);

    if (cerrado==EOF)
    {
        printf("el archivo no cerro con exito");
    }
    
    deport=fopen("deportistas.txt", "w+");
    for (i=0; i<6; i++)
    {
        fscanf(deport, "%s", deportistas->deporte );
        fscanf(deport, "%d", &deportistas->numMedallas);
         char deporte[6][30] = {"Natación", "Atletismo", "Ciclismo", "Gimnasia", "Equitacion", "Esgrima"};
        deportistas->numMedallas=(6/ deportistas->numMedallas);
        fprintf(deport,"%d",deportistas->numMedallas );
    }


    fflush(stdin);
    getchar();
    return 0;
}

