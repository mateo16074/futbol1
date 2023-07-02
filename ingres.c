#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void nombredelequipo(){
     char nombreEquipo[50];  // Tamaño suficientemente grande para el nombre del equipo
    int nequip = 1;
    char terminar;
    
    printf("Ingrese los nombres de los equipos que van a participar \n SI DESEA FINALIZAR ESCRIBA terminar\n");

    while (strcmp(nombreEquipo, "terminar") != 0) //el bucle se ejecuta solo si el nombre es diferente a terminar
    {
        printf("Equipo %d: ", nequip++);
        scanf("%s",&nombreEquipo);
    
      if (strcmp(nombreEquipo, "terminar") == 0)//si ingresa terminar el bucle finaliza
      {
        break;
      }
     
    }
    
}

