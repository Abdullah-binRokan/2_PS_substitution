#include <cs50.h>
#include <stdio.h>

// declare getKey function
string getKey(string);

int main(int argc, string argv[])
{
    // get key (accept only single command-line argument)
    if (argc != 2)
    {
        printf("Use a single command-line argument without any spacing\n");
        printf("Usage: ./substituion key\n");
        return 1;
    }
    string key = getKey(argv[1]);

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

// define getKey function
string getKey(string argvKey)
{
    string key = argvKey;
    printf("key = %s\n", key);
    return key;
} 