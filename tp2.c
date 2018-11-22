#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *get_first_arg(int argc, char *argv[])
{
    if (argc <2)
    {
        printf("no argument\n\n");
        exit(0);
    }
    return (argv[1]);
}

char *upper(char *arg){
    for(int i=0; arg[i] != '\0'; i++){
        if(arg[i]>=97 && arg[i]<=122){
            arg[i] = arg[i] - 32;
        }
    }
    return arg;
}