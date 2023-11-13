#include<stdio.h>
#include<string.h>


int main(){
  int p, s, b;
  scanf("%d%d%d", &p, &s, &b);

  char arr[1000+1];
  scanf("%s", arr);

  int t = strlen(arr);
  int res=0;
  for(int i=0; i<t; ++i){
    if(arr[i] == '-'){
      res += p;
    }else if(arr[i] == '/'){
      res += s;
    }else if(arr[i] == '\\'){
      res += b;
    }
  }

  printf("%d", res);
  return 0;
}
