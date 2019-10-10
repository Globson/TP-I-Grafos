#include "Headers/Funcs.hpp"
#include "Headers/Arvore.hpp"

int main(int argc, char const *argv[]) {
  srand(time(NULL));
  MatrizPuzzle Puzzle;

  Puzzle.InicializaMatrizAleatoria();
  cout<<"Matriz Gerada Aleatoriamente:"<<endl;
  for(int i=0;i<3;i++){
    cout << endl;
    cout << "\t";
    for(int j=0;j<3;j++){
      cout <<Puzzle.Matriz[i][j] << " ";
    }
  }
  cout << endl;
  /*
  for(int i=0;i<3;i++){
   cout << endl;
    for(int j=0;j<3;j++){
      cout << Puzzle.MatrizR[i][j] << " ";
    }
  }
  cout << endl;

  int MatrizTEste[3][3];
  Puzzle.MovimentaBaixo(MatrizTEste);
  for(int i=0;i<3;i++){
    cout<<endl;
    for(int j=0;j<3;j++){
      cout<<MatrizTEste[i][j]<<" ";
    }
  }
  cout<<endl;*/

  Pont Raiz;
  VetorDeMexistentes Lista;
  int trava = 0;
  Insere(Puzzle,&Raiz,&Lista,&trava);

  for(unsigned int k=0;k<Lista.Vetor.size();k++){
    cout<<endl;
    for(int i=0;i<3;i++){
      cout<<endl;
      for(int j=0;j<3;j++){
        cout<<Lista.Vetor.at(k).Matriz[i][j]<<" ";
      }
    }}cout<<endl;
  /*
  if(Raiz->Cima!=NULL)
    if(Raiz->Cima->Cima!=NULL){
    cout<<"Entrou"<<endl;
    for(int i=0;i<3;i++){
      cout<<endl;
      for(int j=0;j<3;j++){
        cout<<Raiz->Cima->MatrizAtual[i][j]<<" ";
      }
    }
  }
  cout<<endl;*/
  cout<<Lista.Vetor.size();
  return 0;
}
