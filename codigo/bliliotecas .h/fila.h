typedef struct fila fila; //criando fila
struct fila{
    int valor;
    fila *prox;
};

fila *f=NULL; //inicia com fila NULL
int tf=0; //tamanho da fila igual a 0

void desalocaFILA(fila *F) //dar um free na fila
{
    if (F->prox != NULL)
    {
        desalocaFILA(F->prox);
    }
    free(F);
    printf("\nElemento com sucesso!\n");
}

fila *enfileirar(fila* F, int N){ //insere no final
    fila *novo=(fila*)malloc(sizeof(fila));
    novo->valor=N;
    if(F==NULL){
        F=novo;
        novo->prox=NULL;
        return novo;
    }
    else{
        fila *aux=F;
        while(aux->prox!=NULL){
            aux=aux->prox;
        }
        aux->prox=novo;
        novo->prox=NULL;
        return F;
    }
}

void mostrarFILA(fila *F){ //mostra fila
    fila *aux=F;
    printf("\nFila criada: ");
    while(aux!=NULL){
        printf("%d ",aux->valor);
        aux=aux->prox;
    }
    printf("\n");
}

fila *desenfileirar(fila *F){ //remove do inicio
    fila *recebe;
    fila *aux=F;
    F=aux->prox;
    recebe=aux;
    free(recebe);
    return F;
}

int tamanhoFILA(fila *F){ //conta o tamanho da fila
    fila *aux=F;
    tf=0;
    while(aux!=NULL){
        tf++;
        aux=aux->prox;
    }
    return tf;
}

void topoFILA(fila *F){ //mostra o topo da fila
    printf("Topo da fila: %d\n",F->valor);
}