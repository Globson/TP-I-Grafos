#include "Funcs.hpp"
// classe No
class No
{
private:
	int v[3][3];
	No* prox;
public:
	No(int v[][3]); // construtor
  int obterValor(int i,int j);
	No* obterProx(); // obtém o próximo No
	void setProx(No* p); // seta o próximo No
};

// classe Lista
class Lista
{
private:
	No* cabeca; // primeiro elemento
	No* cauda; // último elemento

public:
	Lista();
	Lista(int v[][3]);
	virtual ~Lista(); // destrutor
	void mostrar(); // mostra todos os elementos da lista
  bool vazia();
	// insere no início (semelhante a push_front da list)
	void inserir_inicio(int v[][3]);
	// insere no final (semelhante a push_back da list)
	void inserir_final(int v[][3]);
	// retorna o tamanho da lista
	int tamanho();
	// verifica se um elemento existe na lista
	bool existe(int v[][3]);
	// remove da lista, remoção do final (semelhante a pop_back da list)
	void remover();

};
