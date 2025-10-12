#include <stddef.h> // For NULL
#include <ctype.h> //is upper
#include <stdbool.h> // For true/false

/**
 * TODO: Describe what the function does
 */
bool valid_password(const char* s) {
    int length = 0;
    int lower_count = 0;
    int upper_count = 0;

    if(s == NULL){
        return false;
    }

    while(s[length] != '\0'){
        char character = s[length];

        if(!isupper(character) && !islower(character) && !isdigit(character)){
            return false;
        }

        if(islower(character)){
            lower_count++;
        }
        if(isupper(character)){
            upper_count++;
        }
        length++;

    }

    if (length < 6 || length > 10){
        return false;
    }

    if (lower_count < 2 || upper_count < 2){
        return false;
    }
    return true;
    
}
