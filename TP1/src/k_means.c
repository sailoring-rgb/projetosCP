#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#include "../include/utils.h"


int main(){

    printf("N = %d, K = %d\n",N,K);

    int notOver = 1;
    int count = 1, allEquals;
    float sum[K*2];
    int num_elems[K];
    float centroids[K*2];
    init(sum,num_elems,centroids);
    addToClosestCluster(0,num_elems,centroids,sum);

    if(N <= K) notOver = 0;   // BEST CASE
    do{
        allEquals = addToClosestCluster(count, num_elems, centroids, sum);
        if(allEquals == N) notOver = 0;
        else count++;
    } while (notOver);

    // ----------------------------------------- OUTPUT DO PROGRAMA:
    int i, i2 = 0;
    for(i = 0; i+1 < K*2; i+=2){
        printf("Center: (%.3f, %.3f) : Size: %d\n",centroids[i], centroids[i+1], num_elems[i2], sum);
        i2++;
    }
    printf("Interations: %d\n",count);
    // ------------------------------------------------------------

    return 0;
}