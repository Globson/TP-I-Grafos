#include "Headers/Puzzle.hpp"
#include "Headers/Arvore.hpp"

int main(int argc, char const *argv[]) {
  srand(time(NULL));
  MatrizPuzzle Puzzle;
  Puzzle.InicializaMatrizAleatoria();

  Puzzle.Matriz[0][0]=1;
  Puzzle.Matriz[0][1]=3;
  Puzzle.Matriz[0][2]=6;
  Puzzle.Matriz[1][0]=7;
  Puzzle.Matriz[1][1]=0;
  Puzzle.Matriz[1][2]=2;
  Puzzle.Matriz[2][0]=4;
  Puzzle.Matriz[2][1]=8;
  Puzzle.Matriz[2][2]=5;
/*
Puzzle.Matriz[0][0]=1;
Puzzle.Matriz[0][1]=5;
Puzzle.Matriz[0][2]=2;
Puzzle.Matriz[1][0]=4;
Puzzle.Matriz[1][1]=0;
Puzzle.Matriz[1][2]=3;
Puzzle.Matriz[2][0]=7;
Puzzle.Matriz[2][1]=8;
Puzzle.Matriz[2][2]=6;
*/
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
//string b;
//cin>>b;


  Arvore Arv;
  Lista Lista;
  long long int trava=0;
  Arv.Insere(Puzzle,&Arv.Raiz,&Lista,&trava);

  //Lista.mostrar();
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
