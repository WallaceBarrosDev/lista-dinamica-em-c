#include <stdlib.h>
#include <stdbool.h>

typedef struct {
  char *nome;
  int matricula;
} Aluno;

typedef struct Elemento Elemento;

struct Elemento {
  Aluno aluno;
  Elemento *proximo;
};

typedef struct {
  int tamanho;
  Elemento *primeiro;
} Lista;

Lista *criarListaAlunos() {
  return calloc(1, sizeof(Lista));
}

Elemento *criarElemento() {
  return calloc(1, sizeof(Elemento));
}

void adicionarAluno(Lista *lista, Aluno novoAluno) {
  if(lista == NULL) return;

  if(lista->primeiro == NULL){
    lista->primeiro = criarElemento();
    lista->primeiro->aluno = novoAluno;
    return;
  }

  Elemento *elemento = lista->primeiro;

  while(elemento->proximo != NULL) elemento = elemento->proximo;

  elemento->proximo = criarElemento();
  elemento->proximo->aluno = novoAluno;
}

void imprimir_aluno(Aluno *aluno) {

}

int main(void) {
  return 0;
}
