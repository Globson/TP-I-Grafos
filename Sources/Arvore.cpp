#include "../Headers/Arvore.hpp"

Arvore::Arvore(){
  this->Raiz = NULL;
}
void Arvore::Insere(MatrizPuzzle MatrizP, Pont *p,Lista* Lista,int* trava){
//  if(*trava>4000000000){
//    cout<<"Limite Atingido!"<<endl;
//    return;
//  }

  if(*p == NULL){
    *p = (Pont)malloc(sizeof(NoArv));
    for(int i=0;i<3;i++){
      for(int j=0;j<3;j++){
        (*p)->MatrizAtual[i][j]=MatrizP.Matriz[i][j];
      }
    }
   (*p)->Esq = NULL;
   (*p)->Dir = NULL;
   (*p)->Cima = NULL;
   (*p)->Baixo = NULL;
   }
   MatrizPuzzle MatrizDeInsercao;
   if(MatrizP.MovimentaCima(MatrizDeInsercao.Matriz) && *trava<1000000000){
     if(!Lista->existe(MatrizDeInsercao.Matriz)){
       cout<<"Movimento para Cima"<<endl;
       if(!MatrizDeInsercao.VerificaResultado()){
         Lista->inserir_inicio(MatrizDeInsercao.Matriz);
       }
       else{
         cout<<"RESULTADO"<<endl;
         string b;
         cin>>b;
         //resultado = true;
       }
       *trava++;
       Insere(MatrizDeInsercao,&(*p)->Cima,Lista,trava);
     }
   }
  if(MatrizP.MovimentaEsquerda(MatrizDeInsercao.Matriz) && *trava<1000000000){
     if(!Lista->existe(MatrizDeInsercao.Matriz)){
       cout<<"Movimento para Esquerda"<<endl;
       if(!MatrizDeInsercao.VerificaResultado()){
         Lista->inserir_final(MatrizDeInsercao.Matriz);
       }
       else{
         cout<<"RESULTADO"<<endl;
         string b;
         cin>>b;
       }
       *trava++;
       Insere(MatrizDeInsercao,&(*p)->Esq,Lista,trava);
     }
   }
  if(MatrizP.MovimentaBaixo(MatrizDeInsercao.Matriz) && *trava<1000000000){
      if(!Lista->existe(MatrizDeInsercao.Matriz)){
        cout<<"Movimento para Baixo"<<endl;
        if(!MatrizDeInsercao.VerificaResultado()){
          Lista->inserir_final(MatrizDeInsercao.Matriz);
        }
        else{
          cout<<"RESULTADO"<<endl;
          string b;
          cin>>b;
        }
        *trava++;
        Insere(MatrizDeInsercao,&(*p)->Baixo,Lista,trava);
      }
    }
   if(MatrizP.MovimentaDireita(MatrizDeInsercao.Matriz) && *trava<1000000000){
     if(!Lista->existe(MatrizDeInsercao.Matriz)){
       cout<<"Movimento para Direita"<<endl;
       if(!MatrizDeInsercao.VerificaResultado()){
         Lista->inserir_final(MatrizDeInsercao.Matriz);
       }
       else{
         cout<<"RESULTADO"<<endl;
         string b;
         cin>>b;
       }
       *trava++;
       Insere(MatrizDeInsercao,&(*p)->Dir,Lista,trava);
     }
   }

}
void Arvore::Inicializa(){Raiz = NULL;}
