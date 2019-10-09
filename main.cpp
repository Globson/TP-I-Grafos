#include "Headers/Funcs.hpp"

int main(int argc, char const *argv[]) {
  srand(time(NULL));
  int Matriz[3][3];
  inicializaMatrizAleatoria(Matriz);
  int MatrizR[3][3];     //intuito do algoritmo backtracking é chegar no momento em que as duas matrizes forem iguais.
  inicializaMatrizResolvida(MatrizR);
  for(int i=0;i<3;i++){
    cout << endl;
    for(int j=0;j<3;j++){
      cout << Matriz[i][j] << " ";
    }
  }
  cout << endl;
  for(int i=0;i<3;i++){
    cout << endl;
    for(int j=0;j<3;j++){
      cout << MatrizR[i][j] << " ";
    }
  }
  cout << endl;


  int V = 8;

	Grafo grafo(V);

	// adicionando as arestas
	grafo.adicionarAresta(0, 1);
	grafo.adicionarAresta(0, 2);
	grafo.adicionarAresta(1, 3);
	grafo.adicionarAresta(1, 4);
	grafo.adicionarAresta(2, 5);
	grafo.adicionarAresta(2, 6);
	grafo.adicionarAresta(6, 7);
  grafo.adicionarAresta(4, 7);
  grafo.adicionarAresta(5, 4);
  grafo.getAdjacencias();
  grafo.AcrescentaVertice(10);
  grafo.adicionarAresta(9,8);
  grafo.adicionarAresta(8,2);
  grafo.adicionarAresta(9,1);
  grafo.getAdjacencias();
	//grafo.dfs(2);
  return 0;
}
