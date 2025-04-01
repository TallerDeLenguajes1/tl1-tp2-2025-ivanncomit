#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define N 20


int main(){
srand(time(NULL));
int i;
double *puntV;
puntV = (double *)malloc(N*sizeof(double));

    for(i = 0;i<N; i++)
        {
        puntV[i]=1+rand()%100;
        printf("Puntero indexado [%d] - %.0f \n",i, puntV[i]);
        }

    free(puntV);
return 0;
}
