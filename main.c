#include <stdio.h>
//Tabla de Descuentos
/*
    Numero de kilos comprados   % Descuento
    0 – 2                            0%
    2.01 – 5                        10%
    5.01 – 10                       15%
    10.01 en adelante               20%
 */

int main() {
    // Captura del costo del kilo de manzana.

    float costo;
    float kg_peso;
    float precio_total;
    float precio_original;
    float desc;

    printf("Costo del Kilo de Manzana: ");

    scanf("%f",&costo);

    printf("Kilos Comprados: ");

    scanf("%f",&kg_peso);

    if(kg_peso <= 2)
    {
        precio_total = costo * kg_peso;
        printf("Total a Pagar: %f",precio_total);
        printf("\nSu compra no tiene descuento.");
    }

    if(kg_peso >= 2.01 && kg_peso <= 5)
    {
        precio_original = costo * kg_peso;

        printf("Precio Original: %1.2f",precio_original);

        desc = (precio_original * 10)/100;

        printf("\nSu compra tiene el 10%% de descuento: %1.2f$.",desc);

        precio_total = precio_original - desc;

        printf("\n Descuento aplicado a su compra:%1.2f$",precio_total);

    }

    if(kg_peso > 5.01 && kg_peso <= 10)
    {
        precio_original = costo * kg_peso;

        printf("Precio Original: %1.2f",precio_original);

        desc = (precio_original * 15)/100;

        printf("\nSu compra tiene el 15%% de descuento: %1.2f$.",desc);

        precio_total = precio_original - desc;

        printf("\n Descuento aplicado a su compra:%1.2f$",precio_total);
    }

    if(kg_peso > 10.01)
    {
        precio_original = costo * kg_peso;

        printf("Precio Original: %1.2f",precio_original);

        desc = (precio_original * 20)/100;

        printf("\nSu compra tiene el 20%% de descuento: %1.2f$.",desc);

        precio_total = precio_original - desc;

        printf("\n Descuento aplicado a su compra:%1.2f$",precio_total);
    }
    return 0;
}
