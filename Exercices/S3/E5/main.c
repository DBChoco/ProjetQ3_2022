#include <stdlib.h>

void *calloc2(size_t nmemb, size_t size) {
    return malloc(size*nmemb);
}