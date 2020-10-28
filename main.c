/*
 *Projeto 1 de Estrutura de Dados - Fecho Convexo
 *Luan Arjuna Fraga Ramires - 11275363
 *Marcelo Kenji Noda - 11275359
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "fechoConvexo.h"
#include "fila.h"
#include "pilha.h"
#include "tempo.h"

int main(void) {
  int sentido_impressao;
  int i;
  PONTO *S;

  char ponto_inicial_caminho;

  scanf("%d", &TAMANHO_VETOR);

  /*Aloca memória para o vetor "conjunto"*/
  S = malloc(TAMANHO_VETOR*sizeof(PONTO));

  /*Le os pontos*/
  for(i=0; i<TAMANHO_VETOR;i++)
  {
    scanf("%f %f", &S[i].x, &S[i].y);
  }
  
  /*Imprimindo o conjunto S (testando)*/
    for(i=0; i<TAMANHO_VETOR;i++)
  {
    printf("%f %f\n", S[i].x, S[i].y);
  }
  
  ponto_inicial_caminho = 'A';
  /*Lê qual ponto do fecho deve-se começar*/
  while(ponto_inicial_caminho != 'L' && ponto_inicial_caminho != 'R' && ponto_inicial_caminho != 'D' && ponto_inicial_caminho != 'U' )
  {
    printf("Entrou no loop\n");
    getchar();
    scanf("%c", &ponto_inicial_caminho);
    printf("%c\n", ponto_inicial_caminho);
  }
  
  printf("saiu do loop\n");
    
  /*Le o sentido da imrpessão*/
  sentido_impressao = -1;
  while(sentido_impressao != 0 && sentido_impressao != 1)
  {
  scanf("%d", &sentido_impressao);
  printf("%d\n", sentido_impressao);
  }


  /*Inicio das funcoes principais*/
  /*Recebe o conjunto S e atribui os valores ao conjunto dos pontos do fecho*/
  /*Imprime o conjunto*/

  /*Libera memória*/
  free(S);
  return 0;
}