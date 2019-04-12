/* clock example: frequency of primes */
#include <stdio.h>      /* printf */
#include <time.h>       /* clock_t, clock, CLOCKS_PER_SEC */
#include <math.h>       /* sqrt */

#define RUNS 100000

float mark[RUNS] = {0};

int frequency_of_primes (int n) {
    1+1;
}

int main ()
{
    clock_t r;
    r = clock();

    for(int d = 0; d < RUNS; d++) {

        clock_t t;
        t = clock();

        for (int s = 0; s < 1000000; s++) {
            frequency_of_primes(1);
        }
        t = clock() - t;
        mark[d] = ((float) t);

    }


    float average = 0;
    for (int j = 0; j < RUNS; j++) {
        printf("(%f clocks).\n", mark[j]);
        average = average + mark[j];
    }

    r = clock() - r;
    printf("\n(%f total time taken).\n", (float) r / CLOCKS_PER_SEC);
    printf("average(%f clocks) divided by 1000000. for 100000 runs\n", average/RUNS);
    return 0;
}
