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
    int Size = strlen(arg);

    printf("Chaine: %s\n Taille de la chaine : %d\n\n", arg, Size);

    for(int i=Size-1;i>=0;i--)
    {
        for(int j=0;j<Size-i;j++){
            printf(" ");
        }
        for(int j=i+1;j>0;j--){
            printf("%c",arg[j-1]);
        }
        for(int j=1;j<i+1;j++){
            printf("%c",arg[j]);
        }
        printf("\n");
    }

    return 0;
}