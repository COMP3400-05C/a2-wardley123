#include <stddef.h> // For NULL
#include <ctype.h>

/**
 * TODO: Describe what the function does
 */
void string_concat(char* src1, int src1_cap, const char* src2) {
    if(src1 == NULL || src2 == NULL ||src1_cap <= 0){
        
    }

    int len1 =0;
    while(len1 < src1_cap && src1[len1] != '\0'){
        len1++;
    }

    if(len1 == src1_cap){
        len1=0;
        if(src1_cap>0){
            src1[0] = '\0';
        }
    }

    int i =0;
    while (src1[i] != '\0' && (len1 + i) < src1_cap -1){
        src1[len1 + i] = src2[i];
        i++;
    }
    if(len1 + i < src1_cap){
        src1[len1 + i] = '\0';
    } else{

        src1[src1_cap -1] = '\0';
    }

   
}


