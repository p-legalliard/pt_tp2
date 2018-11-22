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

int StrToInt(char *arg){
    int Taille = strlen(arg);
    int Result = 0;
    for(int i=0; i<Taille;i++){
        Result = 10*Result + arg[i];
    }
    return Result;
}

int main(int argc, char *argv[])
{
    char *arg = get_first_arg(argc, argv);
    int Taille=strlen(arg);
    int Result = 0;
    Result = StrToInt(arg);

    printf("chaine : %s\nSize : %d\nResultat : %d\n", arg, Taille, Result);

    

    return Result;
}