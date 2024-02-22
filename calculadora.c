#include<stdio.h>

int main(){
  printf("Hola Mundo");
  return 0;
}

int multiplicacion(int A, int B){
  int mult=0;
  mult=(A*B);

  return mult;
}

int division(int A, int B){
  int rest=0;
  if(B==0) return 0;
  return A/B;
}
