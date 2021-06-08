typedef struct pilha pilha;
struct pilha{
    int value;
    pilha *next;
};

pilha *p=NULL;
int tp=0;

void desalocaPILHA(pilha *P) //dar um free na lista
{
    if (P->next != NULL)
    {
        desalocaPILHA(P->next);
    }
    free(P);
    return;
}

pilha *empilhar(pilha *P,int N){ //insere no inicio
    pilha *aux=(pilha*)malloc(sizeof (pilha));
    aux->value=N;
    aux->next=P;
    return aux;
}

void mostrarPILHA(pilha *P){ //mostra pilha
    pilha *aux;
    aux=P;
    printf("\nPilha formada: ");
    while(aux!=NULL){
        printf("%d ", aux->value);
        aux=aux->next;
    }
    printf("\n\n");
}

pilha *desempilha(pilha *P){ //retira do inicio
    pilha *aux=P;
    pilha *recebe;
    
    recebe=aux;
    P=aux->next;
    free(recebe);
    if(tp>0){
    }
    printf("\nPilha desempilhada!\n");
    return P;
}

int tamanhoPILHA(pilha *P){ //calcula quantidade de elementos da pilha
    pilha *aux=P;
    tp=0;
    while(aux!=NULL){
        tp++;
        aux=aux->next;
    }
    return tp;
}

void topoPILHA(pilha *P){ //mostra primeiro elemento da pilha
    printf("Topo da pilha: %d\n",P->value);
}