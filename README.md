# futbol1
necesito ayuda con este problema:
1.-El programa debe comenzar pidiendo al usuario que ingrese los nombres de los equipos participantes. Los nombres de los equipos se deben ingresar uno a la vez, y el usuario puede ingresar tantos equipos como desee hasta que ingrese la palabra 'terminar', momento en el cual el programa debe dejar de pedir más equipos. Todos los nombres de los equipos se deben almacenar en un archivo llamado "equipos.txt".

2.-Una vez que se hayan ingresado todos los equipos, el programa debe preguntar al usuario si desea ingresar manualmente los resultados de los partidos o si prefiere que estos se generen automáticamente de manera aleatoria.

3.-Si el usuario elige ingresar los resultados manualmente, el programa debe presentar todas las posibles combinaciones de partidos entre los equipos (cada combinación una vez) y pedir al usuario que ingrese el número de goles anotados por cada equipo en cada partido.

4.-Si el usuario elige que los resultados se generen automáticamente, el programa debe generar resultados aleatorios para cada posible combinación de partidos.

5.-Independientemente de cómo se obtengan los resultados, estos deben registrarse en un archivo de texto llamado "resultados.txt". Cada línea del archivo debe contener el nombre del primer equipo, el nombre del segundo equipo y el número de goles que anotó cada uno.

6.-El torneo se llevará a cabo en formato de liga, lo que significa que cada equipo juega contra todos los demás ida y vuelta. Se otorgarán 3 puntos por victoria, 1 punto por empate y 0 puntos por derrota.

7.-Después de que se hayan ingresado o generado todos los resultados, el programa debe leer el archivo de resultados y calcular el número total de puntos obtenidos por cada equipo.

8.-Finalmente, el programa debe mostrar dos tablas: una tabla con los resultados de cada partido y otra tabla con los nombres de los equipos ordenados de mayor a menor según la cantidad total de puntos obtenidos.
El programa además debe dividirse en 4 archivos, main (.c que será el principal para la ejecución), ingreso (.h y .c que tendrán un función para el ingreso de los equipos), torneo (.c y .h que se encarga de pedir el ingreso de los datos del torneo) y resultados (.c y .h que se encarga de leer los resultados del torneo e imprimirlos en las dos tablas mencionadas) 
