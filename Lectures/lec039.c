#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/* Strings are arrays that end in a null byte '\0' */

#define STRLEN 100


char str[STRLEN];

/* String 1.c */

// int
// main(int argc, char *argv[]) {
//     char q[STRLEN] = {'H', 'e', 'l', 'l', 'o', '\0'};
//     char *p = q;
//     while (*p) {
//         printf("p = %12p, string at p = %s\n", p, p);
//         p = p + 1;
//     }
//     return 0;
// }

/* words.c */

// #define MAXCHARS 20
// #define MAXWORDS 1000

// typedef char word_t[MAXCHARS+1];
// int getword(word_t W, int limit);

// int
// main(int argc, char *argv[]) {
//     word_t one_word, all_words[MAXWORDS];
//     int numdistinct = 0, totwords = 0, i, found;
//     while (getword(one_word, MAXCHARS) != EOF) {
//         totwords += 1;
//         found = 0;
//         for (i=0; i<numdistinct && !found; i++) {
//             found = (strcmp(one_word, all_words[i]) == 0);
//         }
//         if (!found && numdistinct<MAXWORDS) {
//             strcpy(all_words[numdistinct], one_word);
//             numdistinct += 1;
//         }
//     }
//     printf("%d words read\n");
//     for (i=0; i<numdistinct; i++) {
//         printf("word %d is \"%s\"\n", i, all_words[i]);
//     }
//     return 0;
// }

// int
// getword(word_t W, int limit) {
//     int c, len=0;
//     /* Skip over any non alphabetics*/
//     while((c=getchar()) != EOF && !isalpha(c)) {
//         /* Do nothing more*/
//     }
//     if (c==EOF) {
//         return EOF;
//     }
//     /* of, first character next word has been found */
//     W[len++] = c;
//     while (len<limit && (c=getchar()) != EOF && isalpha(c)) {
//         /* Another character to be stored */
//         W[len++] = c;
//     }
//     /* Now closes off the string */
//     W[len] = '\0';
//     return 0;
// }

/* progargs */

int 
main (int argc, char *argv[]) {
    int i;
    printf("argc = %d\n", argc);
    for (i=0; i<argc; i++) {
        printf("argv[%d] = \"%s\"", i, argv[i]);
    }
    return 0;
}