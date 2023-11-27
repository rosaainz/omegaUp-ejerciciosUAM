#include<stdio.h>

int count(int* ini, int* fin, int v){
  int res = 0;
  while(ini != fin){
    res += (*ini == v);
    ++ini;
  }
  return res;
}

int main(){
  int a[] = {3, 5, 4, 5, 6};

  printf("%d", count(&a[0], &a[0]+5, 5));

}
