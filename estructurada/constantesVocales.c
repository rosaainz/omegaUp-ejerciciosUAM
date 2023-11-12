#include<stdio.h>
#include<string.h>

int main(){
  char a[80+1];
  scanf("%s", a);

  int t = strlen(a);
  int c=0, v=0;
  for(int i=0; i<t; ++i){
    if(a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O' || a[i] == 'U'){
      v +=1;
    }else{
      c+=1;
    }
  }
  printf("%d %d", c, v );
  return 0;
}
