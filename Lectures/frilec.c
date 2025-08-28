/* 
Memory, 
The code is stored first in the code segment
Then the global variables in the data segment
Then the local variables are stored in the Stack
These different sections all use different addresses for data storage
Once the addresses are all filled the code breaks 
*/

#include <stdio.h>
#include <stdlib.h>

/* Showing the scope of declarations */

// void func(int x);

// int
// main(int argc, char *argv[]) {
//     int x=3, z=5;
//     printf("main: x=%2d, z=%2d\n", x, z);
//     func(x);
//     printf("main: x=%2d, z=%2d\n", x, z);
//     func(z);
//     printf("main: x=%2d, z=%2d\n", x, z);
//     return 0;
// }

// void
// func(int x) {
//     int z=7;
//     x = x + 1;
//     z = x + z + 1;
//     printf("func: x=%2d, z=%2d\n", x, z);
// }

/* Showing the scope of declarations example 2 */

// void func(int x);

// int z=2;

// int
// main(int argc, char *argv[]) {
//     int x=3;
//     printf("main: x=%2d, z=%2d\n", x, z);
//     func(x);
//     printf("main: x=%2d, z=%2d\n", x, z);
//     func(z);
//     printf("main: x=%2d, z=%2d\n", x, z);
//     return 0;
// }

// void
// func(int x) {
//     x = x + 1;
//     z = x + z + 1;
//     printf("func: x=%2d, z=%2d\n", x, z);
// }

/* Showing the scope of declarations example 3 */

void func(int x);

int
main(int argc, char *argv[]) {
    int x=3, z=5;
    printf("main: x=%2d, z=%2d\n", x, z);
    func(x);
    printf("main: x=%2d, z=%2d\n", x, z);
    func(z);
    printf("main: x=%2d, z=%2d\n", x, z);
    return 0;
}

void
func(int x) {
    static int z=7;
    x = x + 1;
    z = x + z + 1;
    printf("func: x=%2d, z=%2d\n", x, z);
}