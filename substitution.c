#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[])
{
    // get key
    printf("argc = %i", argc);
    // printf("argv[] = %s", argv[]);
     for (int i = 0; i < argc; i++)
    {
        printf("\nargv[%i] : %s", i, argv[i]);
    }
    printf("\n");

    // validate key
        // if (key != 26 char)
            // print corresponding error message and return 1 
        // if (key has non-alphabetic char)
            // print corresponding error message and return 1 
        // if (key has repeated char)
            // print corresponding error message and return 1 

    // get plaintext
        // output plaintext: then prompt for a string input

    // encipher
        // define ciphertext array

        // for each plaintext letter
            // if (letter = non-alphabetic)
                // leave non-alphabetic char as is
                // push it to ciphertext array
            // else
                // preserve case
                // determine what letter it maps to
                // push it to ciphertext array

    // print ciphertext
}