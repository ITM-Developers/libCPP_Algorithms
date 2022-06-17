#ifndef ALGORITMOS_H
#define ALGORITMOS_H

#include <iostream>
#include <iomanip>
#include "Cronometro.h"

using namespace std;

class Algoritmos
{
private:
    Cronometro cronometro;
    size_t MINIMO = 0;
    size_t MAXIMO = 65000;
public:
    size_t cantidadDeItineraciones; // Cantidad de veces que se itinera en el algoritmo
    double tiempoDeEjecucion;       // Tiempo que tarda en ejecutarse en milisegundos

    Algoritmos();

    void printArray(int* arreglo, size_t TAM);
    void fillArrayRandomly(int* arreglo, size_t TAM);

    /**
     * @brief bubbleSort
     * Es considerado uno de los algoritmos mas simples de comprender he implementar, su complejidad es O(N^2) lo cual significa
     * que su eficiencia disminuye en listas demasiado grandes.
     *
     * Complexity: O(N^2)
     */
    void bubbleSort(int* arreglo, size_t TAM);

    /**
     * @brief shellSort
     *
     * Complexity: O(N^2)
     */
    void shellSort();

    /**
     * @brief insertionSort
     * Tiempo: O(N^2)
     */
    void insertionSort();

    /**
     * @brief heapSort
     * Tiempo: O(N logN)
     */
    void heapSort();

    /**
     * @brief mergeSort
     * Tiempo: O(N logN)
     */
    void mergeSort();

    /**
     * @brief quickSort
     * Tiempo AVG:          O(N logN)
     * Tiempo Worst Case:   O(N^2)
     */
    void quickSort();
};

#endif // ALGORITMOS_H
