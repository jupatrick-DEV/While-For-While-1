#include <stdio.h>

//estruturas de repetição For, While, Do... While
//Para, enquanto, faça... enquanto

/*
Faça um programa no qual receba e some os números inteiros
até que a entrada seja zero
*/

int main(void) {
  //variáveis                     
  int numero, soma=0;
  
  //entrada
  printf("Informe um número\n");
  scanf("%d", &numero);

  //processamento
  soma = soma + numero;
  
  //saída
  printf("A soma é %d", soma);
  return 0;
}