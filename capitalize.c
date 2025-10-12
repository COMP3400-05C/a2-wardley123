#include <stddef.h> // For NULL
#include <stdlib.h>
#include <ctype.h>
// TODO: Include any necessary header files here

/**
 * TODO: For this part, you will implement a function that takes a string s and returns a new string 
 * that has all of its lower-case alphabet letters into uppercase, 
 * using the toupper function. All other letters should be left alone.
 */
char* capitalize(const char* s) {

    if (s == NULL){
        return NULL;
    }

    int len =0;
    while(s[len] != '\0'){
        len++;
    }

    char *results = (char*)malloc((len+1) * sizeof(char));
    if (results == NULL){
        return NULL;
    }

    for (int i = 0; i < len; i++){
        results[i] = toupper((unsigned char)s[i]);
    }

    results[len] = '\0';

    return results;
}

