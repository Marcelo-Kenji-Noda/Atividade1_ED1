#ifndef FILA_H
#define FILA_H

//extern struct boolean;
#define boolean int
#define TRUE 1
#define FALSE 0
#define ERRO -32000

typedef struct ponto ITEM;
typedef struct fila FILA;

extern int TAMANHO_VETOR;

struct fila{
  ITEM* item;
  int inicio;
  int fim;
  int total;
};

FILA* fila_criar(void);

boolean fila_remover(FILA* f);

void fila_apagar(FILA** f);

boolean fila_vazia(FILA* f);

boolean fila_cheia(FILA* f);

boolean fila_inserir(FILA* f, ITEM it);

int fila_tamanho(FILA* f);

#endif