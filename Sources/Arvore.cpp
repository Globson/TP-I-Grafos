#include "../Headers/Arvore.hpp"

/*void Pesquisa(int Matriz[][3], Pont *p)
{ if (*p == NULL)
  { printf("Erro: Registro nao esta presente na arvore\n");
    return;
  }
  if (x->Chave < (*p)->Reg.Chave)
  { Pesquisa(x, &(*p)->Esq);
    return;
  }
  if (x->Chave > (*p)->Reg.Chave)
  Pesquisa(x, &(*p)->Dir);
  else *x = (*p)->Reg;
}*/

/*void Insere(MatrizPuzzle MatrizP, Pont *p,VetorDeMexistentes *Lista, int* trava){
  if(*trava>21000){
    return;
  }
  *trava++;
   if(*p == NULL){
     *p = (Pont)malloc(sizeof(No));
     for(int i=0;i<3;i++){
       for(int j=0;j<3;j++){
         (*p)->MatrizAtual[i][j]=MatrizP.Matriz[i][j];
       }
     }
    (*p)->Esq = NULL;
    (*p)->Dir = NULL;
    (*p)->Cima = NULL;
    (*p)->Baixo = NULL;
    // return;
  }
  MatrizPuzzle MatrizPTeste;
  MatrizesExistente MatrizE;
  int Passe = 0;
  //cout<<Lista->size()<<"-";

  if(MatrizP.MovimentaBaixo(MatrizPTeste.Matriz)){

        for(unsigned int k=0;k<Lista->Vetor.size();k++)
          for(int i=0;i<3;i++)
            for(int j=0;j<3;j++){
              if(Lista->Vetor.at(k).Matriz[i][j]==MatrizPTeste.Matriz[i][j]){
                //cout<<"Entrou false"<<endl;
                Passe++;
              }
            }
        if(Passe<9){
          *trava++;
          cout<<"Entrou Baixo"<<endl;

          if(MatrizPTeste.VerificaResultado()){
            cout<<endl<<"RESULTADO!";
            return;
          }
          Insere(MatrizPTeste,&(*p)->Baixo,Lista,trava);
          for(int i=0;i<3;i++)
            for(int j=0;j<3;j++){
              MatrizE.Matriz[i][j]=MatrizPTeste.Matriz[i][j];
            }
          Lista->Vetor.push_back(MatrizE);
        }
        Passe = 0;
  }
  if(MatrizP.MovimentaCima(MatrizPTeste.Matriz)){

    for(unsigned int k=0;k<Lista->Vetor.size();k++)
      for(int i=0;i<3;i++)
        for(int j=0;j<3;j++){
          if(Lista->Vetor.at(k).Matriz[i][j]==MatrizPTeste.Matriz[i][j]){
            //cout<<"Entrou false"<<endl;
            Passe++;
          }
        }
    if(Passe<9){
      cout<<"Entrou cima"<<endl;
      if(MatrizPTeste.VerificaResultado()){
        cout<<endl<<"RESULTADO!";
        return;
      }
      Insere(MatrizPTeste,&(*p)->Cima,Lista,trava);
      for(int i=0;i<3;i++)
        for(int j=0;j<3;j++){
          MatrizE.Matriz[i][j]=MatrizPTeste.Matriz[i][j];
        }
      Lista->Vetor.push_back(MatrizE);
    }
    Passe = 0;
  }

  if(MatrizP.MovimentaEsquerda(MatrizPTeste.Matriz)){

    for(unsigned int k=0;k<Lista->Vetor.size();k++)
      for(int i=0;i<3;i++)
        for(int j=0;j<3;j++){
          if(Lista->Vetor.at(k).Matriz[i][j]==MatrizPTeste.Matriz[i][j]){
            Passe++;
          }
        }
    if(Passe<9){
      cout<<"Entrou esquerda"<<endl;
      if(MatrizPTeste.VerificaResultado()){
        cout<<endl<<"RESULTADO!";
        return;
      }
      Insere(MatrizPTeste,&(*p)->Esq,Lista,trava);
      for(int i=0;i<3;i++)
        for(int j=0;j<3;j++){
          MatrizE.Matriz[i][j]=MatrizPTeste.Matriz[i][j];}
      Lista->Vetor.push_back(MatrizE);
    }
    Passe = 0;
  }

  if(MatrizP.MovimentaDireita(MatrizPTeste.Matriz)){

    for(unsigned int k=0;k<Lista->Vetor.size();k++)
      for(int i=0;i<3;i++)
        for(int j=0;j<3;j++){
          if(Lista->Vetor.at(k).Matriz[i][j]==MatrizPTeste.Matriz[i][j]){
            Passe++;
          }
        }
    if(Passe<9){
      cout<<"Entrou Direita"<<endl;
      if(MatrizPTeste.VerificaResultado()){
        cout<<endl<<"RESULTADO!";
        return;
      }
      Insere(MatrizPTeste,&(*p)->Dir,Lista,trava);
      for(int i=0;i<3;i++)
        for(int j=0;j<3;j++){
          MatrizE.Matriz[i][j]=MatrizPTeste.Matriz[i][j];}
     Lista->Vetor.push_back(MatrizE);
    }
    Passe = 0;
  }

}
*/
Arvore::Arvore(){
  this->Raiz = NULL;
}
void Arvore::Insere(MatrizPuzzle MatrizP, Pont *p,Lista* Lista,int* trava){
  if(*trava>5000000000){
    cout<<"Limite Atingido!"<<endl;
    return;
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
   }
   MatrizPuzzle MatrizDeInsercao;
   if(MatrizP.MovimentaCima(MatrizDeInsercao.Matriz)){
     cout<<"Movimento para Cima"<<endl;
     if(!Lista->existe(MatrizDeInsercao.Matriz)){
       if(!MatrizP.VerificaResultado()){
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
   if(MatrizP.MovimentaBaixo(MatrizDeInsercao.Matriz)){
     cout<<"Movimento para Baixo"<<endl;
     if(!Lista->existe(MatrizDeInsercao.Matriz)){
       if(!MatrizP.VerificaResultado()){
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
   if(MatrizP.MovimentaEsquerda(MatrizDeInsercao.Matriz)){
     cout<<"Movimento para Esquerda"<<endl;
     if(!Lista->existe(MatrizDeInsercao.Matriz)){
       if(!MatrizP.VerificaResultado()){
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
   if(MatrizP.MovimentaDireita(MatrizDeInsercao.Matriz)){
     cout<<"Movimento para Direita"<<endl;
     if(!Lista->existe(MatrizDeInsercao.Matriz)){
       if(!MatrizP.VerificaResultado()){
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
