#include <stdio.h>
#include <dirent.h>
#include <unistd.h>

int main(int argc, char *argv[]){
    int opt;

    opt = getopt(argc, argv,"a");

    printf("%d \n", opt);
    



    const char *path = ".";
    if (argc >= 2){
        path = argv[1];
    }

    DIR *dir = opendir(path);
    if(!dir){
        perror("opendir");
        return 1;
    }

    struct dirent *entry;
    entry = readdir(dir);

    while ((entry = readdir(dir))!= NULL) {

        char firstChar = (*entry).d_name[0];

        if (firstChar == '.'){
            continue;
        }
        printf("%s \n", (*entry).d_name);
    }
    closedir(dir);
    return 0;
} 
