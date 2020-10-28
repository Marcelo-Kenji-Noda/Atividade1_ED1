/*
 Implementação de pilha sequencial dinâmica
*/

#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include "pilha.h"
#include "fechoConvexo.h"

extern int TAMANHO_VETOR;

PILHA* pilha_criar(void){
  PILHA* p = (PILHA*)malloc(sizeof(PILHA));
  p->item = (ITEM*)malloc(sizeof(ITEM)*TAMANHO_VETOR);

  if(p!=NULL){
    p->topo = 0;
  }
  return p;
}

boolean pilha_remover(PILHA* p){
  if(p!=NULL){
    if(p->topo>0){
      p->topo--;
      return TRUE;
    }
    return FALSE;
  }
  return ERRO;
}

void pilha_apagar(PILHA** p){
  if((*p)!=NULL){
    free((*p)->item);
    (*p)->item = NULL;

    free(*p);
    *p = NULL;
  }
}

boolean pilha_vazia(PILHA* p){
  if(p!=NULL){
    if(p->topo==0){
      return TRUE;
    }
    return FALSE;
  }
  return ERRO;
}

boolean pilha_cheia(PILHA* p){
  if(p!=NULL){
    if(p->topo==TAMANHO_VETOR){
      return TRUE;
    }
    return FALSE;
  }
  return ERRO;
}

boolean pilha_inserir(PILHA* p, ITEM it){
  if(p!=NULL){
    if(pilha_cheia(p)){
      return FALSE;
    }
    p->item[p->topo] = it;
    p->topo++;
    return TRUE;
  }
  return ERRO;
}

boolean pilha_buscar(PILHA* p, int ind, ITEM* it){
  if(p!=NULL){
    if(ind>=p->topo){
      return FALSE;
    }
    (*it) = p->item[ind];
    return TRUE;
  }
  return ERRO;
}

int pilha_tamanho(PILHA* p){
  if(p!=NULL){
    return p->topo;
  }
  return ERRO;
}