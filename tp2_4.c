#include <stdio.h>
#define N 5

struct {
    int velocidad;
    int anio;
    int cantNucleos;
    char *tipo_cpu;
} typedef Compu;



int main(){
    int i, j, idCpu;
    char tipos[6][10] = {"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};

    Compu compus[N];

    for (i=0;i<N;i++)
    {
        idCpu = 1 + rand() % 6;
        compus[i].anio = 2015 + rand() % (2024 - 2015 + 1);
        compus[i].velocidad = 1 + rand() % (3 - 2 + 1);
        compus[i].cantNucleos = 2 + rand() % (8 - 2 + 1);
        compus[i].tipo_cpu = tipos[idCpu];

    }


    return 0;
}