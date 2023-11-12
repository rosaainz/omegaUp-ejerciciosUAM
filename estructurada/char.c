#include<stdio.h>
#include<ctype.h>

int main(){
  char x;
  scanf("%c", &x);
  printf("Leimos %c que vale %hhd\n",x,x  );


  if(isalpha(x)){
    printf("Es una letra");
    printf("Mayuscula %c\n", toupper(x));
  }
  if(isdigit(x)){
    printf("es un digito\n");
  }
  if(isspace(x)){
    printf("es un espacio\n");
  }
  if(isalnum(x)){
    printf("es una letra o digito\n");
  }
  return 0;
}
