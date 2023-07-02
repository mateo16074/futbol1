#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>


void resultadosdelospartidos(int resultado1, int resultado2, int opcion){
   int nequip = 1;
    
    printf("¿Deseas ingresar manualmente los resultados de los partidos?, en caso de elegir no tendra que ingresar los datos manualmente\n");
    printf("1. Sí\n");
    printf("2. No\n");
    printf("Ingrese su opción: ");
    scanf("%d", &opcion);
    
    for (size_t i = 0; i < nequip; i++)
    {
       if (opcion == 1) {

        printf("ingrese los puntos del equipo 1\n");
        scanf("%d",resultado1);
        printf("ingrese los puntos del equipo 2\n");
        scanf("%d",resultado2);
    } else if (opcion == 2) {
       srand(time(NULL));
       resultado1=rand()%11;
       resultado2=rand()%11;
        
    } else {
       printf("Opción inválida.\n");
    }
    
    }
    
        
}