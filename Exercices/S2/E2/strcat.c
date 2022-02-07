char* strcat(char* dest, const char* src) {
    #include "string.h"
    size_t dest_len = strlen(dest);
    int src_len = strlen(src);
    int n = src_len + dest_len;

    for (int i = 0 ; i < src_len ; i++){
        dest[dest_len + i] = src[i];
    }
    dest[n] = '\0';

    return dest;
}