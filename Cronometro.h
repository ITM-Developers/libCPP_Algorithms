#ifndef CRONOMETRO_H
#define CRONOMETRO_H

#include <chrono>

using namespace std::chrono;

class Cronometro
{
private:
    high_resolution_clock::time_point tiempoInicial;
    high_resolution_clock::time_point tiempoFinal;
public:
    Cronometro();
    void start();
    void stop();
    double getTimeElapsed();
};

#endif // CRONOMETRO_H
