#include <stdio.h>

int main() {
    int Producto;
    char seguir;
    int total = 0;

    printf("Ingresa un número del 1 al 5 dependiendo el producto que quieras seleccionar.\ncual es tu número?: ");
    scanf("%d", &Producto);

    do {
        scanf("ESTE ES EL MENU DEL DIA DE HOY!!!!!");
        printf("1. Agua con gas ");
        printf("2. Gaseosa ");
        printf("3. Salchipapa ");
        printf("4. Hamburguesa ");
        printf("5. Postre de fresa ");
        printf("6. Postre de mora ");
        scanf("Ingresa un número del 1 al 5 dependiendo el producto que quieras seleccionar.\ncual es tu número?: ");
        scanf("%d", &Producto);
    
        switch (Producto) {
            case 1:
                printf("Elegiste un agua con gas\n");
                printf("El valor de tu agua con gas es 2000 pesos");
                break;
            case 2:
                printf("Elegiste una gaseosa\n");
                printf("El valor de la gaseosa es de 3000 pesos");
                break;
            case 3:
                printf("Elegiste una salchipapa\n");
                printf("El valor de la salchipapa es de 30000 pesos");
                break;
            case 4:
                printf("Elegiste una hamburguesa\n");
                printf("El valor de la hamburguesa es de 15000 pesos");
                break;
            case 5:
                printf("Elegiste un postre de fresa\n");
                printf("El valor del postre es de 10000 pesos ");
                break;
            case 6:
                printf("Elegiste un postre de mora\n");
                printf("El valor del postre es de 10000 pesos ");
                break;
            default:
            printf("Número fuera de rango, por favor ingresa un número entre 1 y 5.\n");
            
            continue;
        
        printf("deseas poner mas productos en tu pedido?")
        }while(seguir == 's'| seguir == 'S');
        printf("\nGracias por el pedido, el total de tu factura es %d pesos");
        return 0;
    
        
    
    





} 