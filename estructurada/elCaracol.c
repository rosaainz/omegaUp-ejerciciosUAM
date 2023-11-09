#include<stdio.h>

int main(){
  int h, s, r;
  scanf("%d%d%d", &h, &s, &r);
  int dia=0, caracol=0;

  while(1){ //mientras la profundidad sea de 1
   dia += 1;
   caracol  += s;
   if(caracol >= h){
     break; //el caracol ya salio
   }
   caracol -= r;
  }

  printf("%d", dia);
  return 0;
}
