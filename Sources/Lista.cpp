#include "../Headers/Lista.hpp"
// classe No

	No::No(int v[][3]) // construtor
	{
    for(int i =0;i<3;i++)
      for(int j=0;j<3;j++){
        this->v[i][j] = v[i][j];
      }

		this->prox = NULL;
	}
  int No::obterValor(int i,int j){
    return v[i][j];
  }

	No* No::obterProx() // obtém o próximo No
	{
		return prox;
	}

	void No::setProx(No* p) // seta o próximo No
	{
		prox = p;
	}


// classe Lista

	Lista::Lista()
	{
		// se não passar elemento, então cabeca e cauda são NULL
		cabeca = NULL;
		cauda = NULL;
	}

	Lista::Lista(int v[][3])
	{
		// se passar elemento, então cria novo No
		cabeca = new No(v);
		cauda = cabeca;
	}

 	Lista::~Lista() // destrutor
	{
		delete cabeca;
	}

	void Lista::mostrar() // mostra todos os elementos da lista
	{
		cout << "\nImprimindo todos os elementos...\n";
		No* c = cabeca;

		if(vazia())
			cout << "A lista NAO possui elementos!!\n";
		else
		{
			while(c) // percorre a lista
			{
        for(int i =0;i<3;i++){
          cout<<endl;
          for(int j=0;j<3;j++){
            cout << c->obterValor(i,j)<<" ";
          }}
        cout<<endl<<endl;
				c = c->obterProx();
			}
			cout << endl;
		}
	}

	bool Lista::vazia() // verifica se a lista está vazia
	{
		return (cabeca == NULL);
	}

	// insere no início (semelhante a push_front da list)
	void Lista::inserir_inicio(int v[][3])
	{
		No* novo_no = new No(v);

		if(vazia())
		{
			cabeca = novo_no;
			cauda = novo_no;
		}
		else
		{
			novo_no->setProx(cabeca);
			cabeca = novo_no;
		}
	}

	// insere no final (semelhante a push_back da list)
	void Lista::inserir_final(int v[][3])
	{
		No* novo_no = new No(v);

		if(vazia())
		{
			cabeca = novo_no;
			cauda = novo_no;
		}
		else
		{
			cauda->setProx(novo_no);
			cauda = novo_no;
		}
	}

	// retorna o tamanho da lista
	int Lista::tamanho()
	{
		if(vazia()) // se for vazia, entã retorna 0
			return 0;

		No* c = cabeca;
		int tam = 0;

		// percorre a lista
		do
		{
			c = c->obterProx();
			tam++;
		}
		while(c);

		return tam;
	}

	// verifica se um elemento existe na lista
	bool Lista::existe(int v[][3])
	{
		No* c = cabeca;
    int aux;
		while(c)
		{
			aux=0;
      for(int i =0;i<3;i++)
        for(int j=0;j<3;j++){
			if(c->obterValor(i,j) == v[i][j]){
        aux++;
      }}
      if(aux<9){
			c = c->obterProx();}
      else{
        return true;
      }
		}
		return false;
	}

	// remove da lista, remoção do final (semelhante a pop_back da list)
	void Lista::remover()
	{
		if(!vazia())
		{
			// se houver só 1 elemento
			if(cabeca->obterProx() == NULL)
				cabeca = NULL;
			else if(cabeca->obterProx()->obterProx() == NULL) // 2 elementos
				cabeca->setProx(NULL);
			else // > 2 elementos
			{
				No* ant_ant = cabeca;
				No* ant = cabeca->obterProx();
				No* corrente = cabeca->obterProx()->obterProx();

				while(corrente)
				{
					No* aux = ant;
					ant = corrente;
					ant_ant = aux;
					corrente = corrente->obterProx();
				}
				delete ant_ant->obterProx(); // libera memória
				ant_ant->setProx(NULL); // seta o prox como NULL
				cauda = ant_ant; // atualiza a cauda
			}
		}
	}
