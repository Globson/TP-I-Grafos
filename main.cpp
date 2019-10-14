#include "Headers/Puzzle.hpp"
#include "Headers/Arvore.hpp"

int main(int argc, char const *argv[]) {
  srand(time(NULL));
  MatrizPuzzle Puzzle;
  //Puzzle.InicializaMatrizAleatoria();
  /*int k=1;
  for(int i=0;i<3;i++)
    for(int j=0;j<3;j++){
      Puzzle.Matriz[i][j]=k;
      k++;
    }*/
  Puzzle.Matriz[0][0]=1;
  Puzzle.Matriz[0][1]=8;
  Puzzle.Matriz[0][2]=2;
  Puzzle.Matriz[1][0]=0;
  Puzzle.Matriz[1][1]=5;
  Puzzle.Matriz[1][2]=6;
  Puzzle.Matriz[2][0]=3;
  Puzzle.Matriz[2][1]=4;
  Puzzle.Matriz[2][2]=7;

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

  Arvore Arv;
  Lista Lista;
  int trava=0;
  Arv.Insere(Puzzle,&Arv.Raiz,&Lista,&trava);

  Lista.mostrar();
  cout<<endl;

  cout<<"Matriz Gerada Aleatoriamente:";
  for(int i=0;i<3;i++){
    cout << endl;
    cout << "\t";
    for(int j=0;j<3;j++){
      cout <<Puzzle.Matriz[i][j] << " ";
    }
  }
  cout<<endl<<endl;
  cout<<"Matriz que desejamos chegar:";
  for(int i=0;i<3;i++){
    cout << endl;
    cout << "\t";
    for(int j=0;j<3;j++){
      cout <<Puzzle.MatrizR[i][j] << " ";
    }
  }
  cout << endl<<endl;
  return 0;
}
