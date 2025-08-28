#include <stdio.h>
#include <stdlib.h>



/* Point 3 program */

// void int_swap(int *p1, int *p2);

// int
// main(int argc, char *argv[]) {
//     int x=2, y=3, z=4;
//     printf("main: x=%2d, y=%2d, z=%2d\n", x, y, z);
//     int_swap (&x, &y);
//     printf("main: x=%2d, y=%2d, z=%2d\n", x, y, z);
//     int_swap(&x, &z);
//     printf("main: x=%2d, y=%2d, z=%2d\n", x, y, z);
//     int_swap(&y, &x);
//     printf("main: x=%2d, y=%2d, z=%2d\n", x, y, z);
//     return 0;
// }

// void
// int_swap(int *p1, int *p2) {
//     int tmp;
//     tmp = *p1;
//     *p1 = *p2;
//     *p2 = tmp;
// }

/* DO READ NUM PAGE 104 IN TEXTBOOK IMPORTANT LOOK HERE AJSDHADJHSDHAKDHSAKDJSHDKSDHASDJSH */




/* Arrays and Algorithms */

#define N 5
int
main(int argc, char *argv[]) {
    int A[N], i;

    for (i=0; i<N; i++) {
        A[i] = i * (i+1)/2;
    }

    printf("array has been filled\n");
    /* THIS DOES NOT RAISE AN INDEX ERROR
    THERE ARE NO FENCES IN C */
    for (i=-4; i<9; i++) {
        printf("A[%d] = %d\n", i, A[i]);
    }

    return 0;
}