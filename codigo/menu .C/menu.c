#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"
#include "fila.h"
#define sair 7
int main(void) {
    int op=90, op2=90, n;
    printf("Programa para trabalhar com Fila e Pilha!\n");
    while(op!=3){
        printf("\n(1)Fila\n(2)Pilha\n(3)Sair\n\nDigite sua opcao: "); //opcoes
        scanf("%d",&op); //escolher pilha, fila ou sair do programa
        if(op==1){
            op2=90;
            printf("\nOpcao escolhida: Fila\n\n");
            while(op2!=7){
                printf("\n(1)Enfileirar\n(2)Desenfileirar\n(3)Mostrar fila\n(4)Calcular tamanho\n(5)Mostrar topo\n(7)Sair\n\nDigite sua opcao: ");
                scanf("%d",&op2); //escolher implementacoes da fila ou sair
                if(op2==1){
                    printf("Digite um numero para adicionar: ");
                    scanf("%d",&n);
                    f=enfileirar(f,n);
                }
                else if(op2==2){
                    f=desenfileirar(f);
                }
                else if(op2==3){
                    mostrarFILA(f);
                }
                else if(op2==4){
                    printf("\nTamanho da fila: %d\n",tamanhoFILA(f));
                }
                else if(op2==5){
                    topoFILA(f);
                }
                else if(op2==sair){
                    printf("\nSaindo do menu de Fila...\n");
                }
                else{
                    printf("\nOpcao invalida\n");
                }
            }
        }
        else if(op==2){
            op2=90;
            printf("\nOpcao escolhida: Pilha\n\n");
            while(op2!=7){
                printf("\n(1)Empilhar\n(2)Desempilhar\n(3)Mostrar fila\n(4)Calcular tamanho\n(5)Mostrar topo\n(7)Sair\n\nDigite sua opcao: ");
                scanf("%d",&op2); //escolher implementacoes da fila ou sair
                if(op2==1){
                    printf("Digite um numero para adicionar: ");
                    scanf("%d",&n);
                    p=empilhar(p,n);
                }
                else if(op2==2){
                    p=desempilha(p);
                }
                else if(op2==3){
                    mostrarPILHA(p);
                }
                else if(op2==4){
                    printf("\nTamanho da pilha: %d\n",tamanhoPILHA(p));
                }
                else if(op2==5){
                    topoPILHA(p);
                }
                else if(op2==sair){
                    printf("\nSaindo do menu de Pilha...\n");
                }
                else{
                    printf("\nOpcao invalida\n");
                }
            }
        }
        else if(op==3){
            printf("\nFinalizando...");
            desalocaFILA(f);
            desalocaPILHA(p);
        }
        else{
            printf("\nOpcao invalida\n");
        }
    }
    return 0;
}