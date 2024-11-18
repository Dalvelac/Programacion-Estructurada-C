// Enunciado: Modifica la función anterior para que tome una estructura Estudiante por referencia.

#include <stdio.h>

struct Estudiante {
    char nombre[50];
    int edad;
    float promedio;
};

void imprimeEstudiante(struct Estudiante *e) { // Se cambia el parámetro de la función a un puntero a la estructura.
    printf("Nombre: %s\n", e->nombre);
    printf("Edad: %d\n", e->edad);
    printf("Promedio: %.2f\n", e->promedio);
}

int main() {
    struct Estudiante e = {"Juan", 20, 8.5};
    imprimeEstudiante(&e);
    return 0;
}

