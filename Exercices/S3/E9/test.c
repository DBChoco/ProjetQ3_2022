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
    int res = 0;
    if (argv[2][1] == 'e' && argv[2][2] == 'q'){
        res = testeq(*argv[1], *argv[3]);
    }
    else if (argv[2][1] == 'g' && argv[2][2] == 'e'){
        res =  testge(*argv[1], *argv[3]);
    }
    else if (argv[2][1] == 'g' && argv[2][2] == 't'){
        res = testgt(*argv[1], *argv[3]);
    }
    else if (argv[2][1] == 'l' && argv[2][2] == 'e'){
        res =  testle(*argv[1], *argv[3]);
    }
    else if (argv[2][1] == 'l' && argv[2][2] == 't'){
        res =  testlt(*argv[1], *argv[3]);
    }
    else if (argv[2][1] == 'n' && argv[2][2] == 'e'){
        res =  testne(*argv[1], *argv[3]);
    }
    else {
        res =  0;
    }
    printf("%d  \n", res);
    return res;
}