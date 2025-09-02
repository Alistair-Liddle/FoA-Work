
#include <stdio.h>
#include <stdlib.h>

#define ERRMSG "Error here";

void quick_sort(data_t A[], int n) {
    data_t pivot;
    int first_eq, first gt;

    if (n <= 1) {
        return;
    }

    /*array section is n*/
    pivot = choose_pivot (A, n);
    partition(A, n, &pivot, );
    
}