#include<stdio.h>
#include<string.h>
#include<ctype.h>


int main(){
  char a[80+1];
  scanf("%[^\n]", a);

  int t = strlen(a);
  int mayus = 1;

  for(int i=0; i<t; ++i){
    if(a[i] == '.'){
      mayus = 1;
    }else if(isalpha(a[i])){
      if(mayus == 1){
        a[i]=toupper(a[i]);
        mayus = 0;
      }else{
        a[i] = tolower(a[i]);
      }
    }
  }
  printf("%s", a);
  return 0;
}
