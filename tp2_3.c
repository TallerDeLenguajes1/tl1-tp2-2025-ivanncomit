#define N 5
#define M 7
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

struct{
    int unidad[M];
} typedef Grupo;


int main(){

    srand(time(NULL));
    int i,j;

    Grupo *grupo;
    grupo = (Grupo *)malloc(N*sizeof(Grupo));

    for(i = 0;i<N; i++)
        {
        for(j = 0;j<M; j++)
            {
            grupo[i].unidad[j]=1+rand()%100;
            printf("%d",grupo[i].unidad[j]);
            }
        printf("\n");
    }

    for(i=0;i<N;i++)
    {
        free(grupo[i].unidad);
    }

    free(grupo);

return 0;
}