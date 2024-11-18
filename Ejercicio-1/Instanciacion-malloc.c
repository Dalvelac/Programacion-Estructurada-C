// Enunciado: Crea una instancia de la estructura Estudiante utilizando la función malloc.

#include <stdlib.h>
#include <string.h>

struct Estudiante {
    char nombre[50];
    int edad;
    float promedio;
};

int main() {

    struct Estudiante *estudiante = (struct Estudiante*) malloc(sizeof(struct Estudiante));
    strcpy(estudiante->nombre, "Juan");
    estudiante->edad = 20;
    estudiante->promedio = 8.5;

    free (estudiante);
}
