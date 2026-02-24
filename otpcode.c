/* Author: Brian Ponnampalam brian2004 [at] hotmail.com
   gcc -Wall -O3 -o genpass genpass.c
*/

#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
    if (argc == 1) {
       printf("Example: %s 8 (generates 8 characters)\n", argv[0]);
       return 1;
    }
    /* Send a \n newline character */
    putchar(0x0A);

    /* Length of the password */
    unsigned short int length = atoi(argv[1]);

    /* Seed number for rand() */
    srand((unsigned int) time(0) + getpid());

    /* ASCII characters 48 - 57 */
    while(length--) {
        putchar('0' + (rand() % 9));
        srand(rand());
    }
    
    /* Send \n newline character */
    putchar(0x0A);
    putchar(0x0A);
   
    return EXIT_SUCCESS;
}
