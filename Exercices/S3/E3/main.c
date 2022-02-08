/*
* Creates a buffer that has the same size as src, and copies the content of src to this buffer.
*
* @src: string to be copied
* @return: return pointer. if src == NULL or in case of error, return NULL
*
* Remember that strings are terminated with '\0' and that strlen("abc") returns 3 even if 4 bytes are required to store this string.
*/
#include <stdlib.h>
#include "string.h"
char *buf_strcpy(const char *src) {

    int len = strlen(src) +1 ;

    char* res =  malloc(len);

    if (res == NULL){
        return NULL;
    }
    else {
        for (int i = 0; i < len; i++){
            res[i] = src[i];
        }
        res[len] = '\0';
        return res;
    }
}