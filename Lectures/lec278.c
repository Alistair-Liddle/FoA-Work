#include <stdio.h>

/* Binary search */
// /* data_t just means data type, eg int, char*/
// int
// binary_search(data_t A[], int lo, int hi, data_t *key, int *locn) {
//     int mid, outcome;
//     if (lo>=hi) {
//         return 0;
//     }
//     mid = (lo+hi)/2
//     if ((outcome = cmp(key, A+mid)) < 0) {
//         return binary_search(A, lo, mid, key, locn);
//     } else if (outcome > 0) {
//         return binary_search(A, mid+1, hi, key, locn);
//     } else {
//         *locn = mid;
//         return 1;
//     }
// }