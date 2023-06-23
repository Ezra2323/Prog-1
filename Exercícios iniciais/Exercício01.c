#include <stdio.h>
int contaimpar(int n1, int n2){
int maior, menor, i=0,s=0;
if(n1>n2){
maior = n1;
menor = n2;
}
else if (n1<n2){
maior = n2;
menor = n1;
}
for(i=menor; i<= maior; i++){
if(i%2 == 1){
s++;
}
}
return s;
}
int main(){
int n1, n2;
printf("Digite o primeiro numero: ");
scanf("%d", &n1);
printf("Digite o segundo numero:");
scanf("%d", &n2);
printf("Existe(m) %d numero(s) impar(es)", contaimpar(n1,n2));
return 0;
}
