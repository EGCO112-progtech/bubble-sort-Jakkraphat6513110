// #define N 6
#include <stdio.h>
#include <stdlib.h>
#include "sorting.h"

int main(int argc, char* argv[]) {
  // int a[N]={3,2,6,7,3,1};
  // int a[argc - 1] = argv
  int i,j = 0,new_number, N, *a;

  N = argc - 1;
  a = (int*)malloc(sizeof(int) * N);
  int* prime = (int*)malloc(sizeof(int) * N);
  for (i = 0; i < N; i++)
  {
    a[i] = atoi(argv[i+1]);
    if (Isprime(a[i]) == 1){
      prime[j] = a[i];
      j++;
    }
  }
  N = j;
  if (N == 0) printf("no prime");
  else{
    display(prime,N);
    bubbleSort(prime,N); 
    display(prime,N);
  }
  // display(a,N);
  // bubbleSort(a,N); 

  // insertion(a,N);

  // selectionSort(a,N);

 return 0;
}




