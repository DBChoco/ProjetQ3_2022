#include <stddef.h>
size_t strlen(const char* s) {
    size_t answer = 0;
    char pos = s[answer];

    while (pos !=  '\0'){
        answer++;
        pos = s[answer];
    }
    return answer;
}