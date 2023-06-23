#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
int n = 2 , v1[n], v2[n], v3[n], i =0, s=0;
for (i=0; i<n; i++){
printf("Digite um valor para v1: ");
scanf("%d", &v1[i]);
printf("Digite um valor para v2: ");
scanf("%d", &v2[i]);
printf("\n");
}
for( i=0; i<n;i++ ){
v3[i]= v1[i]*v2[i];
if (v1[i] =v2[i]){
printf(" Vetor3= vetor1[%d] x vetor2[%d] = %d\n",i+1,i+1, v3[i]);
}
}
return 0;
}