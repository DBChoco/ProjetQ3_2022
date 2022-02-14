/* Wrapper to the malloc system call.
 * If malloc fails, sleep for 5 seconds, and then try again.
 * If malloc failed 10 times in a row, return NULL.
 */
#include <stdlib.h>
#include <unistd.h>
void *sleepy_malloc(size_t s) {
    int count = 1;
    void* ola = malloc(s);
    while (ola == NULL){
        if (ola == NULL && count < 10){
        sleep(5);
        count++;
        free(ola);
        ola = malloc(s);
        }
        else if (count >= 10){
            return NULL;
        }
        else {
            return ola;
        }
        
    }
    return ola;   
}