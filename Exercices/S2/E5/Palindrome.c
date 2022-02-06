#include <string.h>
/*
* @return: returns true (1) if str is a palindrome, -1 if str is NULL, otherwise false (0).
*/
int pal(char *str) {
    if (str == NULL){
        return -1;
    }
    else {
        int begin = 0;
        int end = strlen(str) - 1;
        while(begin < end){
            while (str[begin] == ' '){
                begin ++;
            }
            while (str[end] == ' '){
                end--;
            }
            if (str[begin] == str[end]){
                begin ++;
                end--;
            }
            else{
                return 0;
            }
        }
        return 1;
    }
}


