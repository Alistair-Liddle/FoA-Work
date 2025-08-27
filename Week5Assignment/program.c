
#include <stdio.h>
#include <stdlib.h>

#define MAXVALS 1000

int read_int_array(int A[], int maxvals);
void sort_int_array(int A[], int n);
void int_swap(int *p1, int *p2);
void value_freq(int A[], int n);

/* Main function for running safety checks */
int
main(int argc, char *argv[]) {
    int numbers[MAXVALS], nnumbs;

    /* Read the input */
    nnumbs = read_int_array(numbers, MAXVALS);

    /* Value check */
    if (!(nnumbs)) {
        printf("Error in input\n");
        exit(EXIT_FAILURE);
    }

    /* Sort the input by size */
    sort_int_array(numbers, nnumbs);

    /* Print out the frequency value chart */
    value_freq(numbers, nnumbs);

    return 0;

}

/* Reads the integer values into the array */
int
read_int_array(int A[], int maxvals) {
    int n, excess, next;

    printf("Enter as many as %d values, ^D to end\n", maxvals);
    /* Value reader for array storage */
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

/* Checks future elements to prior elements to sort the array */
void
sort_int_array(int A[], int n) {
    int i, j;
    /* Loop checking the size compared to prior elements */
    for (i=1; i < n; i++) {
        for (j = i - 1; j >= 0 && A[j+1] < A[j]; j--) {
            int_swap(&A[j], &A[j+1]);
        }
    }
}

/* Swap the locations of 2 ints */
void
int_swap(int *p1, int *p2) {
    /* Code to swap two elements*/
    int tmp;
    tmp = *p1;
    *p1 = *p2;
    *p2 = tmp;
}

/* Value-Frequency counter and printer */
void
value_freq(int A[], int n) {
    int i, val, freq = 0;

    printf("Value   Freq\n");

    /* The existence of n has been prior checked */
    val = A[0];

    /* Print out needed for loops of 1 in ed */
    if (n == 1) {
        freq = 1;
        printf("%4d %6d\n", val, freq);
        return;
    }

    /* Loop to count the frequencies then output */
    for (i = 0; i<=n; i++) {
        if (A[i] == val) {
            freq += 1;
        } else {
            printf("%4d %6d\n", val, freq);
            val = A[i];
            freq = 1;
        }
    }
}