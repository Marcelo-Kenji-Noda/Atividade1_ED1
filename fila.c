/*
 Implementação de fila sequencial circular
*/

#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include "fila.h"
#include "fechoConvexo.h"

/*extern int TAMANHO_VETOR;*/

FILA* fila_criar(void){
  FILA* f = (FILA*)malloc(sizeof(FILA));
  f->item = (ITEM*)malloc(sizeof(ITEM)*TAMANHO_VETOR);

  if(f!=NULL){
    f->inicio = 0;
    f->fim = 0;
    f->total = 0;
  }
  return f;
}

boolean fila_remover(FILA* f){
  if(f!=NULL){
    if(f->total>0){
      f->inicio = (f->inicio+1)%TAMANHO_VETOR;
      f->total--;
      return TRUE;
    }
    return FALSE;
  }
  return ERRO;
}

void fila_apagar(FILA** f){
  if((*f)!=NULL){
    free((*f)->item);
    (*f)->item = NULL;

    free(*f);
    *f = NULL;
  }
}

boolean fila_vazia(FILA* f){
  if(f!=NULL){
    if(f->total==0){
      return TRUE;
    }
    return FALSE;
  }
  return ERRO;
}

boolean fila_cheia(FILA* f){
  if(f!=NULL){
    if(f->total==TAMANHO_VETOR){
      return TRUE;
    }
    return FALSE;
  }
  return ERRO;
}

boolean fila_inserir(FILA* f, ITEM it){
  if(f!=NULL){
    if(fila_cheia(f)){
      return FALSE;
    }
    f->item[f->fim] = it;
    f->fim = (f->fim+1)%TAMANHO_VETOR;
    f->total++;
    return TRUE;
  }
  return ERRO;
}

int fila_tamanho(FILA* f){
  if(f!=NULL){
    return f->total;
  }
  return ERRO;
}