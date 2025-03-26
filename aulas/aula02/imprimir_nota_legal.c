#include <stdio.h>

int main() {
    printf(" --------------------------------------\n");
    printf("          NOTA  LEGAL                  \n");
    printf(" --------------------------------------\n");
    printf("Item              Qde         Prc          Valor\n");
    printf("%-17s %03i %12.2f %12.2f\n", "Caneta Azul", 2, 2.0, 4.0);
    printf("%-17s %03i %12.2f %12.2f\n", "Borracha", 1, 5.0, 5.0);
    printf("%-17s %03i %12.2f %12.2f\n", "Resma de Papel", 1, 12.0, 12.0);
    printf("---------------------------------------\n");
    printf("TOTAL..............................: R$    22.00\n");

    return 0;
}