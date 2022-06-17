#include "Algoritmos.h"

Algoritmos::Algoritmos()
{

}

void Algoritmos::printArray(int* arreglo, size_t TAM)
{
    cout << "+----------+----------+" << endl;
    cout << "+  Indice  |  Valor   |" << endl;
    cout << "+----------+----------+" << endl;
    for(size_t i = 0; i < TAM; ++i)
    {
        cout << "|";
        cout << setw(10) << i;
        cout << "|";
        cout << setw(10) << arreglo[i];
        cout << "|" << endl;
    }
    cout << "+----------+----------+" << endl;
}

void Algoritmos::fillArrayRandomly(int* arreglo, size_t TAM)
{
    for(size_t i=0; i < TAM; ++i)
    arreglo[i] = (rand() % (MAXIMO - MINIMO + 1)) + MINIMO;
}

void Algoritmos::bubbleSort(int* arreglo, size_t TAM)
{
    this->cantidadDeItineraciones = 0;
    this->tiempoDeEjecucion       = 0;
    this->cronometro.start();

    int aux;
    for(size_t i=0; i < (TAM - 1) ; ++i)
    {
        for(size_t j=0; j < (TAM - 1)-i; ++j)
        {
            if( arreglo[j] > arreglo[j+1] )
            {
                aux = arreglo[j];
                arreglo[j] = arreglo[j+1];
                arreglo[j+1] = aux;
            }
           this->cantidadDeItineraciones++;
        }
    }

    this->cronometro.stop();
    this->tiempoDeEjecucion = this->cronometro.getTimeElapsed();
}
