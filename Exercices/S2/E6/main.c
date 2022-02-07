#include <stdio.h>

int main(int argc, char **argv){

    char res[sizeof(argv)+2];
    
    for (int i = 0; i < sizeof(argv); i++){
        if (i%2 == 1){
            res[i] = *argv[i];            
        }
        else{
            res[i] = ' ';  
        }
    }
    res[sizeof(argv)] = '\n';  
    printf("%s", res);


    return 0;
}