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
  return 0;
}
