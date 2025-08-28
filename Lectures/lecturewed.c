#include <stdio.h>
#include <stdlib.h>

/* Triangle recursive and iterative solutions. */

// int t_itr(int);
// int t_rec(int);

// int
// main(int argc, char *argv[]) {
//     int n;
//     printf("Enter n: ");
//     if (scanf("%d", &n) != 1) {
//         printf("Error in input\n");
//         exit(EXIT_FAILURE);
//     }
//     printf("t_itr(%d) = %d\n", n, t_itr(n));
//     printf("t_rec(%d) = %d\n", n, t_rec(n));
//     return 0;
// }

// /* Calculate the n'th triangle number using iteration. */
// int
// t_itr(int n) {
//     int sum=0, i;
//     for (i=1; i<=n; i++) {
//         sum += i;
//     }
//     return sum;
// }

// /* Calculate the n'th triangle number using recursion. */
// int
// t_rec(int n) {
//     if (n==0) {
//         return 0;
//     } else {
//         return n + t_rec(n-1);
//     }
// }

/* Tower of Hanoi solution */

// void hanoi(char from, char via, char to, int n);

// int 
// main(int argc, char *argv[]) {
//     int n;
//     if (argc>1) {
//         n=atoi(argv[1]);
//     } else {
//         printf("Usage: %s n\n", argv[0]);
//         exit(EXIT_FAILURE);
//     }

//     hanoi('A', 'B', 'C', n);
//     return 0;
// }

// void
// hanoi(char from, char via, char to, int n) {
//     int i;
//     if (n<=0) {
//         return;
//     }
//     hanoi (from, to, via, n-1);
//     for (i=1; i<n; i++) {
//         printf("    ");
//     }
//     printf("Move a disk from %c to %c\n", from, to);
//     hanoi(via, from, to, n-1);
// }

/* Even odd mutual recursion */

int eeee(int);
int oooo(int);

int
main(int argc, char *argv[]) {
    int n;
    printf("Enter n: ");
    if (scanf("%d", &n) != 1) {
        printf("Error in input\n");
        exit(EXIT_FAILURE);
    }
    printf("eeee(%d) = %d\n", n, eeee(n));
    printf("oooo(%d) = %d\n", n, oooo(n));
    return 0;
}

int
eeee(int n) {
    if (n==0) {
        return 1;
    } else {
        return oooo(n-1);
    }
}

int
oooo(int n) {
    if (n==0) {
        return 0;
    } else {
        return eeee(n-1);
    }
}