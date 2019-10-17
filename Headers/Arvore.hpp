#ifndef ARVORE_HPP
#define ARVORE_HPP
#include "Puzzle.hpp"
#include "Lista.hpp"
#include <limits>
typedef class NoArv * Pont;
class NoArv {
public:
  int MatrizAtual[3][3];
  Pont Cima,Baixo,Esq,Dir;
  bool Marcado;
  //vector<int> Caminho;
  NoArv();
};

class Arvore{
public:
  Pont Raiz;
  Arvore();
  void Pesquisa(int Matriz[][3], Pont *p);
  void Insere(MatrizPuzzle MatrizP, Pont *p,Lista* Lista,long long int* trava);
  void Inicializa();
  void Busca(Pont p,int MatrizR[][3],string movimento,vector<Caminhos>*Cam);
};

#endif
