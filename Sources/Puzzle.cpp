#include "../Headers/Puzzle.hpp"


void MatrizPuzzle::InicializaMatrizAleatoria(){
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
      this->Matriz[i][j] = a;
      Vetor.push_back(a);
    }
}

void MatrizPuzzle::InicializaMatrizResolvida(){
  int k=1;
  for(int i=0;i<3;i++)
    for(int j=0;j<3;j++){
      this->MatrizR[i][j]=k;
      k++;
    }
  this->MatrizR[2][2]=0;
}

MatrizPuzzle::MatrizPuzzle(){
  InicializaMatrizResolvida();
}
MatrizPuzzle::~MatrizPuzzle(){
  cout<<"Destrutor Puzzle"<<endl;
}

bool MatrizPuzzle::MovimentaCima(int MatrizAux[][3]){
  int x,y,aux;
  //int MatrizAux[3][3];
  for(int k=0;k<3;k++){
    for(int l=0;l<3;l++){
      MatrizAux[k][l]=this->Matriz[k][l];
    }
  }
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      if(MatrizAux[i][j]==0){
        x=i;
        y=j;
      }
    }
  }
  if(x!=0){
    aux = MatrizAux[x][y];
    MatrizAux[x][y]=MatrizAux[x-1][y];
    MatrizAux[x-1][y]=aux;
    return true;
  }
  return false;
}

bool MatrizPuzzle::MovimentaBaixo(int MatrizAux[][3]){
  int x,y,aux;
  // int MatrizAux[3][3];
  for(int k=0;k<3;k++){
    for(int l=0;l<3;l++){
      MatrizAux[k][l]=this->Matriz[k][l];
    }
  }
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      if(MatrizAux[i][j]==0){
        x=i;
        y=j;
      }
    }
  }
  if(x!=2){
    aux = MatrizAux[x][y];
    MatrizAux[x][y]=MatrizAux[x+1][y];
    MatrizAux[x+1][y]=aux;
    return true;
  }
  return false;
}

bool MatrizPuzzle::MovimentaEsquerda(int MatrizAux[][3]){
  int x,y,aux;
  // int MatrizAux[3][3];
  for(int k=0;k<3;k++){
    for(int l=0;l<3;l++){
      MatrizAux[k][l]=this->Matriz[k][l];
    }
  }
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      if(MatrizAux[i][j]==0){
        x=i;
        y=j;
      }
    }
  }
  if(y!=0){
    aux = MatrizAux[x][y];
    MatrizAux[x][y]=MatrizAux[x][y-1];
    MatrizAux[x][y-1]=aux;
    return true;
  }
  return false;
}

bool MatrizPuzzle::MovimentaDireita(int MatrizAux[][3]){
  int x,y,aux;
  // int MatrizAux[3][3];
  for(int k=0;k<3;k++){
    for(int l=0;l<3;l++){
      MatrizAux[k][l]=this->Matriz[k][l];
    }
  }
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      if(MatrizAux[i][j]==0){
        x=i;
        y=j;
      }
    }
  }
  if(y!=2){
    aux = MatrizAux[x][y];
    MatrizAux[x][y]=MatrizAux[x][y+1];
    MatrizAux[x][y+1]=aux;
    return true;
  }
  return false;
  /*for(int i=0;i<3;i++){
    cout<<endl;
    for(int j=0;j<3;j++){
      cout<<MatrizAux[i][j]<<" ";
    }
  }*/
}

bool MatrizPuzzle::VerificaResultado(){
  int a=0;
  for(int i=0;i<3;i++)
    for(int j=0;j<3;j++){
      if(this->MatrizR[i][j]==this->Matriz[i][j]){
        a++;
      }
    }
  if(a==9){
    return true;
  }
  else{
    return false;
  }
}
