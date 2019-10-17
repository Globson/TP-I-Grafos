#ifndef FUNCS_HPP
#define FUNCS_HPP
#include <iostream>
#include <ctime>
#include <vector>
#include <stack>
#include <list>
#include <algorithm>
using namespace std;


class MatrizPuzzle{
public:
  int Matriz[3][3];
	int MatrizR[3][3];
	MatrizPuzzle();
  ~MatrizPuzzle();
  void InicializaMatrizAleatoria();
  void InicializaMatrizResolvida();
	bool MovimentaCima(int MatrizAux[][3]);
  bool MovimentaBaixo(int MatrizAux[][3]);
  bool MovimentaEsquerda(int MatrizAux[][3]);
  bool MovimentaDireita(int MatrizAux[][3]);
  bool VerificaResultado();
};

// class MatrizesExistente{
// public:
//   int Matriz[3][3];
// };
//
// class VetorDeMexistentes{
//
//
// public:
//   vector<MatrizesExistente>Vetor;
//
// };

class Caminhos{
public:
  string caminho;
  int tam;
};
#endif
