#include <stdio.h>
#include <locale.h>
void notas(float v1[], float v2[], int n){
int i;
for(i=0; i < 10; i++){
printf("-------------------------------------------\n");
printf("Digite a 1° nota do aluno %d: ",i+1);
scanf("%f",&v1[i]);
printf("Digite a 2° nota do aluno %d: ",i+1);
scanf("%f",&v2[i]);
printf("-------------------------------------------\n");
}
}
void media(float v1[], float v2[], float v3[], int n){
int i;
for (i=0; i < 10; i++){
v3[i] = (v1[i] +v2[i])/(2);
}
}
void imprimir(float v1[], float v2[], float v3[], int n){
int i;
for(i=0; i<10; i++ )
printf("\nAluno %d:\n nota1: %.2f\n nota2: %.2f\n media: %.2f\n", i+1,v1[i],v2[i],v3[i]);
}
int main(){
int i = 0, n=10;
float v1[n],v2[n], v3[n];
notas (v1, v2,n);
media(v1,v2,v3,n);
imprimir(v1,v2,v3,n);
return 0;
}