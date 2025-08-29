#include <stdio.h>
#include <stdlib.h>

#define MAXVALS 100
#define MAXPRINT 8

int read_int_array(int A[], int n);
int max_sum(int A[], int n, int k, int *pos);

int
main(int argc, char *argv[]) {
    int n, k, p, m;

    printf("Enter n and k: ");
    if (scanf("%d %d", &n, &k) != 2) {
        printf("Error in n and k input\n");
        exit(EXIT_FAILURE);
    }

    int A[MAXVALS], nnumbs;

    nnumbs = read_int_array(A, MAXVALS);

    if (n > nnumbs || k > n) {
        printf("Error in size of n and/or k\n");
        exit(EXIT_FAILURE);
    }

    m = max_sum(A, n, k, &p);

    printf("Maxsum is %d, which is found from in the %d consecutive values from the index %d\n",
           m, k, p);
    return 0;
}

/* This is wrong, correct solutions below */
#if 0
int
max_sum(int A[], int n, int k, int *pos) {
    int sum, maxsum, i;
    if ((n-k) == 0) {
        sum = 0;
        for (i=0; i<k; i++) {
            sum += A[i];
        }
        maxsum = sum;
        *pos = 0;
    } else {
        for (i=0; i < (n-k); i++) {
            sum = 0;
            for (int j=0; j<k; j++) {
                sum += A[i+j];
            }
            if ((i == 0) || (sum > maxsum)) {
                maxsum = sum;
                *pos = i;
            }
        }
    }
    return maxsum;
}
#endif

#if 1
int
max_sum(int A[], int n, int k, int *pos) {
    int sum, maxsum, i;
    for (i=0; i <= (n-k); i++) {
        sum = 0;
        for (int j=0; j<k; j++) {
                sum += A[i+j];
        }
        if ((i == 0) || (sum > maxsum)) {
                maxsum = sum;
                *pos = i;
        }
    }
    return maxsum;
}
#endif

int
read_int_array(int A[], int maxvals) {
    int n, excess, next;

    printf("Enter as many %d values, ^D to end\n", maxvals);

    n = 0; excess = 0;
    while (scanf("%d", &next) == 1) {
        if (n == maxvals) {
            excess = excess + 1;
        } else {
            A[n] = next;
            n += 1;
        }
    }

    printf("%d values read into array", n);
    if (excess) {
        printf(", %d excess values discarded", excess);
    }
    printf("\n");
    return n;
}

