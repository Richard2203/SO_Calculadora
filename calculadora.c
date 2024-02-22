#include<stdio.h>

int main(){
    double numero1, numero2;
    char operador;
  
    printf("Ingresa el primer valor: ");
    scanf("%lf", &numero1);
    printf("Ingresa el signo de la operacion: ");
    scanf(" %c", &operador);
    printf("Ingresa el segundo valor: ");
    scanf("%lf", &numero2);

    if(operador == '+')
        printf("La suma de los dos valores es: %0.2lf\n", (numero1+numero2));
    
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
