#include <stdio.h>
#include <string.h>

void inver(char vet[]){
  int i, aux, fim, tam = strlen(vet);
    fim = tam-1;

  for(i=0; i < tam/2;i++){
    aux = vet[i];
    vet[i] = vet[fim];
    vet[fim] = aux;
    fim--;
     }
}

int main(){

char nome[12];

printf("Digite seu nome: ");
scanf("%s", nome);

inver(nome);

printf("%s\n",nome );

return 0;
}