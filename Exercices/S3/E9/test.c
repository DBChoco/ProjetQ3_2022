#include <stdio.h>
#include <stdlib.h>

int testeq(int a, int b){
    if (a == b){
        return 1;
    }
    else{
        return 0;
    }
}

int testge(int a, int b){
    if (a >= b){
        return 1;
    }
    else{
        return 0;
    }
}

int testgt(int a, int b){
    if (a > b){
        return 1;
    }
    else{
        return 0;
    }
}

int testle(int a, int b){
    if (a <= b){
        return 1;
    }
    else{
        return 0;
    }
}

int testlt(int a, int b){
    if (a < b){
        return 1;
    }
    else{
        return 0;
    }
}

int testne(int a, int b){
    if (a != b){
        return 1;
    }
    else{
        return 0;
    }
}

int main(int argc, char *argv[]) {  
    if (argv[2][1] == 'e' && argv[2][2] == 'q'){
        return testeq(*argv[1], *argv[3]);
    }
    if (argv[2][1] == 'g' && argv[2][2] == 'e'){
        return testge(*argv[1], *argv[3]);
    }
    if (argv[2][1] == 'g' && argv[2][2] == 't'){
        return testgt(*argv[1], *argv[3]);
    }
    if (argv[2][1] == 'l' && argv[2][2] == 'e'){
        return testle(*argv[1], *argv[3]);
    }
    if (argv[2][1] == 'l' && argv[2][2] == 't'){
        return testlt(*argv[1], *argv[3]);
    }
    if (argv[2][1] == 'n' && argv[2][2] == 'e'){
        return testne(*argv[1], *argv[3]);
    }
    EXIT_SUCCESS;
}