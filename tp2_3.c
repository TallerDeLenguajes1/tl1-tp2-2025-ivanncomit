#define N 5
#define M 7
#include <stdio.h>
#include <time.h>


int main(){

    srand(time(NULL));
    int i,j;
    int mt[N][M];

    for(i = 0;i<N; i++)
        {
        for(j = 0;j<M; j++)
            {
            mt[i][j]=1+rand()%100;
            printf("%d",mt[i][j]);
            }
        printf("\n");
    }

}