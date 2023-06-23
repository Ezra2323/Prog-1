#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int dado(){
return rand () % 6 + 1;
}
int main(){
int al, escalar;
srand (time(NULL));
int matriz[3][6], i,j;
for (i= 0; i<3; i++){
for (j=0; j<6; j++){
matriz[i][j] = dado();
}
}
printf("Digite um escalar:");
scanf("%d", &escalar);
for (i= 0; i<3; i++){
for (j=0; j<6; j++){
matriz[i][j] *= escalar ;
}
}
printf("Resultado: \n");
for (i= 0; i<3; i++){
for (j=0; j<6; j++){
printf("%d\t", matriz[i][j]);
}
printf("\n");
}
return 0;
}