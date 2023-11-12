#include<stdio.h>
#include<string.h>

int main(){
  char a[15+1];
  scanf("%s", a);

  int t =  strlen(a);
  printf("la longitud de a es %d\n", t);

  for(int i=0; i<t; i++){
    printf("la posicion %d tiene %c\n", i, a[i]);
  }
  return 0;
}
