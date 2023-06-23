#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>
int dado(){
int al;
al = rand() % 6 + 1;
return al;
}
int main(){
//Criando variaveis
int i = 0, secreto;
int ia=0,ib= 0,ic=0,id=0,ie=0,icc=0;
float pa ,pb , pc ,pd ,pe ,pcc ;
srand (time(NULL));
for(i = 0; i < 1000000; i++){
secreto = dado();
if(secreto == 1){
ia++;
}
if(secreto == 2){
ib++;
}
if(secreto == 3){
ic++;
}
if(secreto == 4){
id++;
}
if(secreto == 5){
ie++;
}
if(secreto == 6){
icc++;
}
}
pa = (ia/1000000.0)*100.0;
pb = (ib/1000000.0) * 100.0;
pc = (ic/1000000.0) * 100.0;
pd = (id/1000000.0) * 100.0;
pe = (ie/1000000.0) * 100.0;
pcc= (icc/1000000.0) * 100.0;
printf("O numero [1], saiu [%d] vezes. A porcentagem eh de [%.2f%%]\n\n", ia, pa);
printf("O numero [2], saiu [%d] vezes. A porcentagem eh de [%.2f%%]\n\n", ib, pb);
printf("O numero [3], saiu [%d] vezes. A porcentagem eh de [%.2f%%]\n\n", ic, pc);
printf("O numero [4], saiu [%d] vezes. A porcentagem eh de [%.2f%%]\n\n", id, pd);
printf("O numero [5], saiu [%d] vezes. A porcentagem eh de [%.2f%%]\n\n", ie, pe);
printf("O numero [6], saiu [%d] vezes. A porcentagem eh de [%.2f%%]\n\n", icc, pcc);
return 0;
}