#include <stdio.h>
#include <stdlib.h>

/* Revision lecture */

/* Allowed stdlib and stdio as free includes */

/* Single ampersand is the bitwise operator, we'll learn more later but we won't need it for the MST,
always remember && */

/* Nested loops are multiplicative of each other if they all have same guard

for (i=0; i<n; i++) {
}
is O(n)
When the increment is i *= 2 that is log n
i++
    i++
that is n*n, n^2 

when the guard changes to outside loop then it's powers

i.e.
for (i=0; i<n; i *= 2) {
    for (j=0; j<i; j++) {
    
    }
}

therefore i is log(n)
j runs 2^(i-1) times
which is 2^(log_2(n)-log_2(2))
2^log_2(n/2)
n/2
therefore O(n)*/

/* Practice mst is of similar difficulty */
