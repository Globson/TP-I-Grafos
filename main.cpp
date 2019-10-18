#include "Headers/Puzzle.hpp"
#include "Headers/Arvore.hpp"

int main(int argc, char const *argv[]) {
  srand(time(NULL));
  MatrizPuzzle Puzzle;

  int a=0;
  cout<<"\tBem-Vindo ao jogo 8-Puzzle!"<<endl;
  while(a!=1 && a!=2){
    cout<<"1-Entrar com valores"<<endl;
    cout<<"2-Gerar valores aleatorios"<<endl;
    cout<<"Entre: ";
    cin>>a;
    if(a!=1 && a!=2){
      cout<<"Valor invalido!"<<endl;
    }
  }
  if(a==1){
    for(int x=0;x<3;x++)
      for(int y=0;y<3;y++){
        cout<<"Entre com o valor da posicao ["<<x+1<<"] ["<<y+1<<"] : ";
        cin>>Puzzle.Matriz[x][y];
      }
  }
  else{Puzzle.InicializaMatrizAleatoria();}
/*
  Puzzle.Matriz[0][0]=1;
  Puzzle.Matriz[0][1]=3;
  Puzzle.Matriz[0][2]=6;
  Puzzle.Matriz[1][0]=7;
  Puzzle.Matriz[1][1]=0;
  Puzzle.Matriz[1][2]=2;
  Puzzle.Matriz[2][0]=4;
  Puzzle.Matriz[2][1]=8;
  Puzzle.Matriz[2][2]=5;
  //Comentar sets abaixo para eliminar configuracao constante de matriz, ( feito para teste)
Puzzle.Matriz[0][0]=1;
Puzzle.Matriz[0][1]=5;
Puzzle.Matriz[0][2]=2;
Puzzle.Matriz[1][0]=4;
Puzzle.Matriz[1][1]=0;
Puzzle.Matriz[1][2]=3;
Puzzle.Matriz[2][0]=7;
Puzzle.Matriz[2][1]=8;
Puzzle.Matriz[2][2]=6;

cout<<endl;

cout<<"Matriz 8-Puzzle:";
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
/*/

  Arvore Arv;
  Lista Lista;
  long long int trava=0;
  //std::vector<int> v;
  Arv.Insere(Puzzle,&Arv.Raiz,&Lista,&trava);

  //Lista.mostrar();
  cout<<endl;

  cout<<"Matriz 8-Puzzle:";
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
  vector<Caminhos>Caminhos;
  Arv.Busca(Arv.Raiz,Puzzle.MatrizR,"",&Caminhos);
  string Caminho;
  int TamCaminho;
  unsigned int size = Caminhos.size();
  if(size>1){
    Caminho = Caminhos.at(0).caminho;
    TamCaminho = Caminhos.at(0).tam;
  }
  for(unsigned int k=1;k<size;k++){
    if(Caminhos.at(k).tam<TamCaminho){
      Caminho = Caminhos.at(0).caminho;
      TamCaminho = Caminhos.at(0).tam;
    }
  }
  if(size>=1){
  cout<<"Melhor caminho: "<<Caminho<<endl;
  cout<<"Quantidade de movimentos do melhor caminho: "<<TamCaminho/4<<endl;
}else{
  cout<<"Nao houve resultados!"<<endl;
}
  return 0;
}
