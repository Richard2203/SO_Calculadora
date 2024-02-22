include <stdio.h>


int main(void){

    double numero1, numero2;

    char operador;


    printf("Ingresa el primer valor: ");

    scanf("%lf", &numero1);


    printf("Ingresa el signo de la operacion: ");

    scanf(" %c", &operador);


    printf("Ingresa el segundo valor: ");

    scanf("%lf", &numero2);


    if(operador == '+'){

        printf("La suma de los dos valores es: %0.2lf\n", (numero1+numero2));
}

    return 0;
}
