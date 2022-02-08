#include "stdint.h"
#include <stdint.h>
#include <sys/types.h>

int first(void *ptr) {
    int* pos = ptr + 12;
    return *pos;
}

char second(void *ptr) {
    char* pos = ptr + 6;
    return *pos;
}

int third(void *ptr) {
    int* pos = ptr + 45;
    return *pos;
}