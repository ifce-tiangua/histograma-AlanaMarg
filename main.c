#include <stdio.h>
#include <stdlib.h>

int imprime_histograma (int **vendas, int num_categorias);
int **criacao(int num_categorias);

int main() {
  int **vendas, num_categorias;
  scanf("%d", &num_categorias); 

  if(num_categorias == 0) {
    printf("vazio");
  }
  else {
    vendas = criacao(num_categorias);
    imprime_histograma(vendas, num_categorias); 
  }
  
  

  return 0;
}

int imprime_histograma (int **vendas, int num_categorias) {
  for(int i = 0; i < num_categorias; i++) {
    printf("%d ", *vendas[i]); //imprime a qntdd ao lado dos *
    
    if(*vendas[i] == 0) { //caso a qntdd seja 0 pula para o prox.
      printf("\n");
      continue;
    }
    
    for(int j = 0; j < *vendas[i]; j++) { //imprime os * 
      printf("*");
    }
    printf("\n");
  }

  return 0;
}

int **criacao(int num_categorias) {
    int **vendas;
    
    vendas = (int **) malloc(num_categorias * sizeof(int *)); 

    for(int i = 0; i < num_categorias; i++) {
    vendas[i] = (int *) malloc(num_categorias * sizeof(int)); 
    scanf("%d", vendas[i]);
  }
  
  return vendas;
}