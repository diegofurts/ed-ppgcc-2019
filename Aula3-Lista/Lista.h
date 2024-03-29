#ifndef LISTA_H
#define LISTA_H

#define NAO_ENCONTRADO NULL

#define SEMERRO 0
#define MEMORIAINDISPONIVEL 1
#define POSICAOINVALIDA 2

typedef int TipoChave;

typedef struct {
	TipoChave Chave;
	/* Outros campos */
} TipoItem;

typedef struct TipoNo *TipoApontador;

typedef struct TipoNo {
	TipoItem Item;
	struct TipoNo *prox;
} TipoNo;

typedef struct TipoLista {
	TipoApontador Primeiro, Ultimo;
} TipoLista;


void InicializaLista(TipoLista *L);
//void InserePrimeiroLista(TipoLista *L, TipoItem I);
void InsereLista(TipoLista *L, TipoItem I);
TipoApontador PesquisaLista(TipoLista *L, TipoChave C);
void RemoveLista(TipoLista *L, TipoChave C);
void ImprimeLista(TipoLista *L);
int ListaVazia(TipoLista *L);

#endif