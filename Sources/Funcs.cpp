#include "../Headers/Funcs.hpp"


void inicializaMatrizAleatoria(int Matriz[][3]){
  vector<int> Vetor;
  for(int i=0;i<3;i++)
    for(int j=0;j<3;j++){
      bool Presente;
      int a;
      do{
        Presente = false;
        a = rand()%9;
        for(unsigned int k=0;k<Vetor.size();k++){
          if(a == Vetor.at(k)){
            Presente = true;
          }
        }
      }while(Presente);
      Matriz[i][j] = a;
      Vetor.push_back(a);
    }
}
void inicializaMatrizResolvida(int MatrizR[][3]){
  int k=0;
  for(int i=0;i<3;i++)
    for(int j=0;j<3;j++){
      MatrizR[i][j]=k;
      k++;
    }
}
