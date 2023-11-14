#include<stdio.h>

typedef struct {
  int dia, mes, anio;
}fecha;

int valida(fecha f){
  if(f.mes < 1 || f.mes > 12){
    return 0;
  }else if(f.anio < 1){
    return 0;
  }else{
    int dias[] = {31, 28, 31, 30,
                  31, 31, 30, 31,
                  30, 31, 30, 31};
    if(f.dia < 1 || f.dia > dias[f.mes-1]){
      return 0;
    }else{
      return 1;
    }
  }

}


int main(){
  fecha f;
  scanf("%d%d%d", &f.dia, &f.mes, &f.anio);
  printf("%d", valida(f));

  return 0;
}
