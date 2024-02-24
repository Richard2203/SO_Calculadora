#include<stdio.h>
#include <stdlib.h>

double multiplicacion(double A, double B);
double resta (double A, double B);
double division(double A, double B);

int main(){
    double numero1, numero2;
    char operador;
  
    printf("Ingresa el primer valor: ");
    scanf("%lf", &numero1);
    printf("Ingresa el signo de la operacion: ");
    scanf(" %c", &operador);
    printf("Ingresa el segundo valor: ");
    scanf("%lf", &numero2);


    switch(operador){
      case '+':
        printf("La suma de los dos valores es: %0.2lf\n", (numero1+numero2));
        break;
      case '-':
        printf("La resta de los dos valores es: %0.2lf\n", resta(numero1,numero2));
        break;
      case '*':
        printf("La multiplicación de los dos valores es: %0.2lf\n", multiplicacion(numero1,numero2));
        break;
      case '/':
        printf("La división de los dos valores es: %0.2lf\n", division(numero1,numero2));
        break;
      default:
        printf("Opción invalida.");
        break;
    }

  system("pause");
  return 0;
}

double resta (double A, double B){
  double rest= 0;
  rest =(A-B);
  return  rest;
}

double multiplicacion(double A, double B){
  double mult=0;
  mult=(A*B);
  return mult;
}

double division(double A, double B){
  double rest=0;
  if(B==0) return 0;
  return A/B;
}
