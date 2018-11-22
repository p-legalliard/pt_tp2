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

int main(int argc, char *argv[])
{
    char *arg = get_first_arg(argc, argv);
    int i=0;
    int Taille=strlen(arg);

    while(arg[i]!='\0'){
        i++;
    }

    printf("chaine: %s\nSize : %d\n", arg, i);

    for(int j=0; j<Taille; j++){
        if(arg[j] != 32){
            printf("%c", arg[j]);
        }
        else{
            while(arg[j] == 32){
                j++;
            }
            printf("\n%c", arg[j]);
        }
    }
    printf("\n");

    return 0;
}