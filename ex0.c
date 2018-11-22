#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tp2.h"

int main(int argc, char *argv[]){
    char *arg = get_first_arg(argc, argv);
    printf("Chaine entrée : %s\n",arg);
    char *sol = upper(arg);
    printf("Chaine sortie : %s", sol);
    return 0;
}