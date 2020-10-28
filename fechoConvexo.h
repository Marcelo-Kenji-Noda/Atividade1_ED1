#ifndef FECHOCONVEXO_H
#define FECHOCONVEXO_H

//extern struct boolean;
#define boolean int
#define TRUE 1
#define FALSE 0
#define ERRO -32000

typedef struct ponto PONTO;

typedef struct ponto{
  float x;
  float y;
}PONTO;

/*A posição pelo qual deverá ser iniciada a impressão do polígono, retorna o ponto buscado */
/*
PONTO encontrar_primeiro_ponto(char posicao, PONTO *lista);
float calcular_inclinacao(PONTO a, PONTO b);
PONTO encontrar_proximo_ponto(int sentido, PONTO *lista, PONTO a);
*/
#endif //FECHOCONVEXO_H