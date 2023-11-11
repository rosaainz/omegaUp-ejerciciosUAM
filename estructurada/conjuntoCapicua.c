#include<stdio.h>

int main(){
  int n;
  scanf("%d", &n);

  int arr[n];
  for(int i=0; i<n; ++i){
    scanf("%d", &arr[i]);
  }

  int res=1;
  for(int i=0, j=n-1; i<j; i++, --j){
    if(arr[i] != arr[j]){
      res=0;
      break;
    }
  }

  printf(res == 1 ? "SI" : "NO");
  return 0;
}
