#ifndef PILHA_H
#define PILHA_H

//extern struct boolean;
#define boolean int
#define TRUE 1
#define FALSE 0
#define ERRO -32000

typedef struct ponto ITEM;
typedef struct pilha PILHA;

struct pilha{
  ITEM* item;
  int topo;
};

PILHA* pilha_criar(void);

boolean pilha_remover(PILHA* p);

void pilha_apagar(PILHA** p);

boolean pilha_vazia(PILHA* p);

boolean pilha_cheia(PILHA* p);

boolean pilha_inserir(PILHA* p, ITEM it);

boolean pilha_buscar(PILHA* p, int ind, ITEM* it);

int pilha_tamanho(PILHA* p);

#endif