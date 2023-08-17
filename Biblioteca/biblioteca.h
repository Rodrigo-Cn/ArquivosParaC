#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 100

char comando[TAM];

void criar(char *nome){
    strcpy(comando, "touch ");
    strcat(comando, nome);
    system(comando);
}

void renomear(char *nome, char *nome2){
    strcpy(comando, "mv ");
    strcat(comando, nome);
    strcat(comando, " ");
    strcat(comando, nome2);
    system(comando);
    strcpy(nome, nome2);
}

void gravar (char *nome, char *dado){
    char comando2[TAM];
    sprintf(comando2, "echo '%s' >> %s", dado, nome);
    system(comando2);
}

void ler (char *nome){
    strcpy(comando, "cat ");
    strcat(comando, nome);
    system(comando);
}

void deletar (char *nome){
    strcpy(comando, "rm ");
    strcat(comando, nome);
    system(comando);
}

