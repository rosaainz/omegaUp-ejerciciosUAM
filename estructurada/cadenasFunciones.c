#include<stdio.h>
#include<string.h>

int main(){
  char a[50], b[50];
  scanf("%s%s", a, b);

  int ta = strlen(a);
  int tb = strlen(b);

  printf("%d %s\n", ta, a);
  printf("%d %s\n", tb, b);

  char c[100];
  strcat(c,a);
  strcat(c, b);

  int tc = strlen(c);
  printf("%d %s\n", tc, c);

  return 0;
}
