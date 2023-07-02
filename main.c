#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ingres.h"
#include "resultados.h"

//Crear el archivo
//create the file
int main()
{
    FILE *archivo;
    char nombreEquipo[50];  // Tamaño suficientemente grande para el nombre del equipo
    int nequip = 1;
    archivo = fopen("equipos.txt", "w");  // Abrir el archivo en modo escritura

    if (archivo == NULL)
    {
        printf("No se puede crear el archivo\n");
        return 1;
    }
    void nombredelequipo();
    
       fprintf(archivo, "%s\n", nombreEquipo);
    

    fclose(archivo);

    printf("Se han guardado los nombres de los equipos en el archivo 'equipos.txt'.\n");

    FILE *archivo;
    // Tamaño suficientemente grande para el nombre del equipo

    archivo = fopen("resultados.txt", "w");  // Abrir el archivo en modo escritura

    if (archivo == NULL)
    {
        printf("No se puede crear el archivo\n");
        return 1;
    }
    void resultadosdelospartidos(int resultado1, int resultado2, int opcion);
    
       fprintf(archivo, "%s\n", nombreEquipo);
    

    fclose(archivo);

    printf("Se han guardado los nombres de los equipos en el archivo 'resultados'.\n");

    return 0;
}



