#ifndef ARVORE_HPP
#define ARVORE_HPP
#include "Funcs.hpp"


typedef struct No * Pont;
typedef struct No {
  int MatrizAtual[3][3];
  Pont Cima,Baixo,Esq,Dir;
} No;

void Pesquisa(int Matriz[][3], Pont *p);


void Insere(MatrizPuzzle MatrizP, Pont *p,VetorDeMexistentes *Vetor,int* trava);


void Inicializa(Pont *Raiz);

#endif
