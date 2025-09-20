#include <stdio.h>

int main() {
    int Producto;
    char seguir;
    int total = 0;

    do {
        printf("ESTE ES EL MENU DEL DIA DE HOY!!!!!\n");
        printf("1. Agua con gas \n");
        printf("2. Gaseosa \n");
        printf("3. Salchipapa \n");
        printf("4. Hamburguesa \n");
        printf("5. Postre de fresa \n");
        printf("6. Postre de mora \n");
        printf("Ingresa un número del 1 al 6 dependiendo el producto que quieras seleccionar.\ncual es tu número?: ");
        scanf("%d", &Producto);
    
        switch (Producto) {
            case 1:
                printf("Elegiste un agua con gas\n");
                printf("El valor de tu agua con gas es 2000 pesos");
                total+=2000;
                break;
            case 2:
                printf("Elegiste una gaseosa\n");
                printf("El valor de la gaseosa es de 3000 pesos");
                total+=3000;
                break;
            case 3:
                printf("Elegiste una salchipapa\n");
                printf("El valor de la salchipapa es de 30000 pesos");
                total+=30000;
                break;
            case 4:
                printf("Elegiste una hamburguesa\n");
                printf("El valor de la hamburguesa es de 15000 pesos");
                total+=15000;
                break;
            case 5:
                printf("Elegiste un postre de fresa\n");
                printf("El valor del postre es de 10000 pesos ");
                total+=10000;
                break;
            case 6:
                printf("Elegiste un postre de mora\n");
                printf("El valor del postre es de 10000 pesos ");
                total+=10000;
                break;
            default:
                printf("Número fuera de rango, por favor ingresa un número entre 1 y 6.\n");
            
                continue;
        }
        printf("deseas poner mas productos en tu pedido (s/n): ");
        scanf(" %c", &seguir);  

    } while (seguir == 's'|| seguir == 'S');

        printf("\nGracias por el pedido, el total de tu factura es %d pesos\n", total);
        
    return 0;
} 