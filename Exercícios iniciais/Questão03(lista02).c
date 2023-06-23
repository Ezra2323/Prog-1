#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
int secreto,i, v[10];
/* iniciar a base */
srand (time(NULL));
/* apropriar numeros aleatorios a variavél do vetor*/
for(i= 0; i<10; i++){
v[i] = (rand() % 11) + (10);
}
for(i =0; i<10; i++){
printf("[%d]=%d\n",i,v[i]);
}
return 0;
}