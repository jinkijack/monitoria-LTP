#include <stdio.h>

int main()
{
  int a = 0, b = 1, aux, i, n;
  printf("Digite o tamanho da sequencia: ");
  scanf("%d", &n);
  printf("Sequencia fibonacci: \n");
  printf("%d\n", b);
  for (i = 1; i < n; i++)
  {
    aux = a + b;
    a = b;
    b = aux;
    printf("%d\n", aux);
  }
  return 0;
}
