#include <stdio.h>

int main(int argc, char *argv[]){
    const char *path = ".";
    if (argc >= 2){
        path = argv[1];
    }

    printf("path: %s\n", path);
    return 0;
} 
