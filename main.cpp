#include "Headers/Funcs.hpp"

int main(int argc, char const *argv[]) {
  srand(time(NULL));
  int Matriz[3][3];
  inicializaMatrizAleatoria(Matriz);
  for(int i=0;i<3;i++){
    cout << "\n";
    for(int j=0;j<3;j++){
      cout << Matriz[i][j] << " ";
    }
  }
  cout << "\n";
  return 0;
}
