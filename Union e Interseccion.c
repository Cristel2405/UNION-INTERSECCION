#include <stdio.h>

int main() {
  int A[] = {1, 3, 5, 7};
  int B[] = {1, 2, 3, 4, 5, 6, 7, 8};
  int nA = sizeof(A) / sizeof(A[0]);
  int nB = sizeof(B) / sizeof(B[0]);
 
  printf("Interseccion: ");
  for (int i = 0; i < nA; i++) {
    for (int j = 0; j < nB; j++) {
      if (A[i] == B[j]) {
        printf("%d ", A[i]);
        break; 
      }
    }
  }
  printf("\n");

  printf("Union: ");
  for (int i = 0; i < nA; i++) {
    printf("%d ", A[i]);
  }
  for (int i = 0; i < nB; i++) {
    int encontrado = 0;
    for (int j = 0; j < nA; j++) {
      if (B[i] == A[j]) {
        encontrado = 1;
        break;
      }
    }
    if (!encontrado) {
      printf("%d ", B[i]);
    }
  }
  printf("\n");

  return 0;
}
