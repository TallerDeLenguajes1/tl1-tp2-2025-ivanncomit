#include <stdio.h>
#include <time.h>

#define N 5

struct {
    int velocidad;
    int anio;
    int cantNucleos;
    char *tipo_cpu;
} typedef Compu;

void listarPCs (Compu pcs[], int cantidad);
void mostrarMasVieja (Compu pcs[], int cantidad);
void mostrarMasVeloz (Compu pcs[], int cantidad);

int main(){
    srand(time(NULL));

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

    listarPCs(compus, N);

    return 0;
}


void listarPCs (Compu pcs[], int cantidad){
    int i;

    for(i=0;i<cantidad;i++)
    {
        printf("\n\nComputadora N°: %d \n",i+1);
        printf("Año de fabricacion %d\n",pcs[i].anio);
        printf("Tipo de Procesador: %s\n", pcs[i].tipo_cpu);
        printf("Velocidad de su Procesador: %d\n", pcs[i].velocidad);
        printf("Cantidad de Nucleos: %d\n", pcs[i].cantNucleos);
    }

}
void mostrarMasVieja (Compu pcs[], int cantidad) {

}
void mostrarMasVeloz (Compu pcs[], int cantidad) {

}