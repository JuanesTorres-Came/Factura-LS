#include <stdio.h>

int main() {
     int Producto;

    printf("Ingresa un número del 1 al 5 dependiendo el producto que quieras seleccionar.\ncual es tu número?: ");
    scanf("%d", &Producto);

    switch (Producto) {
        case 1:
            printf("Elegiste un agua con gas\n");
            break;
        case 2:
            printf("Elegiste una gaseosa\n");
            break;
        case 3:
            printf("Elegiste una salchipapa\n");
            break;
        case 4:
            printf("Elegiste una hamburguesa\n");
            break;
        case 5:
            printf("Elegiste un postre\n");
            break;
        default:
            printf("Número fuera de rango, por favor ingresa un número entre 1 y 5.\n");
        return 0;
    }
    if (Producto == 1){
        printf("El valor de tu agua con gas es 2000 pesos");
    }else if (Producto ==2){
        printf("El valor de la gaseosa es de 3000 pesos");
    }else if (Producto==3){
        printf("El valor de la salchipapa es de 30000 pesos");
    }else if (Producto ==4){
        printf("El valor de la hamburguesa es de 15000 pesos");
    }else if (Producto==5){
        printf("El valor del postre es de 10000 pesos ");
    }
    return 0;

    
}