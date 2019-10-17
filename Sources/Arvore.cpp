#include "../Headers/Arvore.hpp"

NoArv::NoArv(){
  Marcado = false;
}
Arvore::Arvore(){
  this->Raiz = NULL;
}
void Arvore::Insere(MatrizPuzzle MatrizP, Pont *p,Lista* Lista,long long int* trava){
  cout<<"Trava: "<<*trava<<endl;
  if(*trava>32060){
    cout<<"Limite Atingido!"<<endl;
    //return;
  }

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
   /*(*p)->Caminho = caminhoPai;
   (*p)->Caminho.push_back(caminhoNovo);
   for(unsigned int k=0;k<(*p)->Caminho.size();k++){
     cout<<(*p)->Caminho.at(k)<<" ";
   }cout<<endl;
   */
   }
   if(MatrizP.VerificaResultado()){
     cout<<"RESULTADO"<<endl;
     string b;
     cin>>b;
   }
   MatrizPuzzle MatrizDeInsercao;

   cout<<"Matriz atual:";
   for(int i=0;i<3;i++){
     cout<<endl;
     for(int j=0;j<3;j++){
       cout<<MatrizP.Matriz[i][j]<<" ";
     }
   }
   cout<<endl;
   if(MatrizP.MovimentaEsquerda(MatrizDeInsercao.Matriz) && *trava<32060){
        if(!Lista->existe(MatrizDeInsercao.Matriz)){
          cout<<"Movimento para Esquerda"<<endl;
          if(!MatrizDeInsercao.VerificaResultado()){
            Lista->inserir_final(MatrizDeInsercao.Matriz);
          }
          /*else{
            cout<<"RESULTADO"<<endl;
            string b;
            cin>>b;
          }*/

          *trava= *trava+1;
          Insere(MatrizDeInsercao,&(*p)->Esq,Lista,trava);

        }
      }
  if(MatrizP.MovimentaBaixo(MatrizDeInsercao.Matriz) && *trava<32060){
      if(!Lista->existe(MatrizDeInsercao.Matriz)){
        cout<<"Movimento para Baixo"<<endl;
        if(!MatrizDeInsercao.VerificaResultado()){
          Lista->inserir_final(MatrizDeInsercao.Matriz);
        }
        /*else{
          cout<<"RESULTADO"<<endl;
          string b;
          cin>>b;
        }*/

        *trava= *trava+1;
        Insere(MatrizDeInsercao,&(*p)->Baixo,Lista,trava);
      }
    }
    if(MatrizP.MovimentaCima(MatrizDeInsercao.Matriz) && *trava<32060){
      if(!Lista->existe(MatrizDeInsercao.Matriz)){
        cout<<"Movimento para Cima"<<endl;
        if(!MatrizDeInsercao.VerificaResultado()){
          Lista->inserir_inicio(MatrizDeInsercao.Matriz);
        }
        /*else{
          cout<<"RESULTADO"<<endl;
          string b;
          cin>>b;
          //resultado = true;
        }*/
        *trava= *trava+1;
        Insere(MatrizDeInsercao,&(*p)->Cima,Lista,trava);
      }
    }
   if(MatrizP.MovimentaDireita(MatrizDeInsercao.Matriz) && *trava<32060){
     if(!Lista->existe(MatrizDeInsercao.Matriz)){
       cout<<"Movimento para Direita"<<endl;
       if(!MatrizDeInsercao.VerificaResultado()){
         Lista->inserir_final(MatrizDeInsercao.Matriz);
       }
       /*else{
         cout<<"RESULTADO"<<endl;
         string b;
         cin>>b;
       }*/

       *trava= *trava+1;
       Insere(MatrizDeInsercao,&(*p)->Dir,Lista,trava);
     }
   }

}
void Arvore::Inicializa(){Raiz = NULL;}
/*
NoArv* Arvore::BuscaLargura(Pont p){
  while(p->Cima!=NULL){

  }
}*/
