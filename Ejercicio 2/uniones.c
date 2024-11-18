// Enunciado: Define una unión que pueda almacenar un entero, un flotante o una cadena de caracteres. Crea una variable de esta unión y asigna diferentes tipos de valores para ver cómo se comporta.

#include <stdio.h>
#include <string.h>

union valores {
    int entero;
    float flotante;
    char cadena[20];
};

int main() {
    union valores valor;
    valor.entero = 10;
    printf("Entero: %d\n", valor.entero);
    valor.flotante = 3.14;
    printf("Flotante: %f\n", valor.flotante);
    strcpy(valor.cadena, "Hola, mundo!");
    printf("Cadena: %s\n", valor.cadena);
    return 0;
}