#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "biblioteca.h"
#define TAM 100

int main() {
    char nome[TAM], nome2[TAM], dados[TAM];
    int aux;

    printf("DIGITE O NOME DO ARQUIVO ");
    scanf("%s", nome);
    criar(nome);

    printf("\n1 - GRAVAR");
    printf("\n2 - LER");
    printf("\n3 - RENOMEAR");
    printf("\n4 - DELETAR");
    printf("\n5 - SAIR");
    scanf("%d", &aux);

    while(aux>0 && aux<5){
        
        if(aux==1){
            printf("DIGITE OS DADOS ");
            setbuf(stdin, 0);
            fgets(dados, TAM, stdin);
            gravar(nome, dados);
        }
        else if(aux==2){
            ler(nome);
        }
        else if(aux==3){
            printf("DIGITE O NOVO NOME ");
            scanf("%s", nome2);
            renomear(nome, nome2);
        }
        else if(aux==4){
               deletar(nome);
        }

        printf("\n1 - GRAVAR");
        printf("\n2 - LER");
        printf("\n3 - RENOMEAR");
        printf("\n4 - DELETAR");
        printf("\n5 - SAIR");
        scanf("%d", &aux);
    }

}
