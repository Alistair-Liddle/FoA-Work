#include <stdio.h>
#include <stdlib.h>

/* Insertion sort */

#define MAXVALS 100
#define MAXPRINT 8

int read_int_array(int A[], int n);
void sort_int_array(int A[], int n);
void print_int_array(int A[], int n);
void int_swap(int *p1, int *p2);

int
main(int argc, char *argv[]) {
    int numbers[MAXVALS], nnumbs;

    nnumbs = read_int_array(numbers, MAXVALS);

    printf("Before: ");
    print_int_array(numbers, nnumbs);

    sort_int_array(numbers, nnumbs);

    printf("After: ");
    print_int_array(numbers, nnumbs);

    return 0;
}

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

void
print_int_array(int A[], int n) {
    int i;
    for (i = 0; i<n; i++) {
        if (i == MAXPRINT) {
            printf(" ...");
            break;
        }
        printf("%4d", A[i]);
        
    }
    printf(" \n");
}

void
sort_int_array(int A[], int n) {
    int i, j;
    /* Assuming A[0] to a[n-1] are valid values*/
    for (i=1; i < n; i++) {
        /* Swap A[i] left into correct position*/
        for (j = i - 1; j >= 0 && A[j+1] < A[j]; j--) {
            int_swap(&A[j], &A[j+1]);
        }
    }
}

void
int_swap(int *p1, int *p2) {
    int tmp;
    tmp = *p1;
    *p1 = *p2;
    *p2 = tmp;
}