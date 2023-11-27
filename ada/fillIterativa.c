#include<stdio.h>

void fill(int* ini, int* fin, int v){
  while(ini != fin){
    *ini = v;
    ++ini;
  }
}


int main(){
  int n = 5;
  int a[n];

  fill(&a[0], &a[0]+n, 3);

  for(int i=0; i<n; ++i){
    printf("%d", a[i]);
  }
return 0;
}
