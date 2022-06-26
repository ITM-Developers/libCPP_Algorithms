# Algorithms
Este proyecto es una colección de los algoritmos más conocidos en una sola clase.  El proyecto consta de dos clases un 
Cronometro.cpp y Algoritmos.cpp, ambas clases debes de agregarlas a tu proyecto, la clase cronometro ya está incluida 
dentro de la clase algoritmos, para empezar a usar el código primero debes de importar la clase como se muestra a continuación:
```cpp
#include "Algoritmos.h"
```

Después solo basta con crear una instancia para poder usar la clase
```cpp
Algoritmos alg;
int tam = 10;
int a1[tam];

alg.fillArrayRandomly( &a1[0], tam);
alg.printArray( &a1[0], tam);
alg.bubbleSort( &a1[0], tam);
alg.printArray( &a1[0], tam);

cout << "Cantiadd de Pasos: " << alg.cantidadDeItineraciones << endl;
cout << "Tiempo (milisegundos): " << alg.tiempoDeEjecucion << endl;
```
