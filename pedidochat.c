#include <stdio.h>

int main() {
    int Producto;
    char seguir;
    int total = 0;

    do {
        printf("\nIngresa un número del 1 al 5 dependiendo el producto que quieras seleccionar.\n");
        printf("1. Agua con gas\n");
        printf("2. Gaseosa\n");
        printf("3. Salchipapa\n");
        printf("4. Hamburguesa\n");
        printf("5. Postre\n");
        printf("¿Cuál es tu número?: ");
        scanf("%d", &Producto);

        switch (Producto) {
            case 1:
                printf("Elegiste un agua con gas\n");
                printf("El valor de tu agua con gas es 2000 pesos\n");
                total += 2000;
                break;
            case 2:
                printf("Elegiste una gaseosa\n");
                printf("El valor de la gaseosa es de 3000 pesos\n");
                total += 3000;
                break;
            case 3:
                printf("Elegiste una salchipapa\n");
                printf("El valor de la salchipapa es de 30000 pesos\n");
                total += 30000;
                break;
            case 4:
                printf("Elegiste una hamburguesa\n");
                printf("El valor de la hamburguesa es de 15000 pesos\n");
                total += 15000;
                break;
            case 5:
                printf("Elegiste un postre\n");
                printf("El valor del postre es de 10000 pesos\n");
                total += 10000;
                break;
            default:
                printf("Número fuera de rango, por favor ingresa un número entre 1 y 5.\n");
                continue;  // volver a preguntar sin pedir 'seguir'
        }

        printf("¿Quieres agregar otro producto? (s/n): ");
        scanf(" %c", &seguir);  // nota el espacio antes de %c para evitar errores con el buffer

    } while (seguir == 's' || seguir == 'S');

    printf("\nGracias por tu pedido. El total a pagar es: %d pesos\n", total);

    return 0;
}
