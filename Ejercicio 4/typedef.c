// Enunciado: Usa typedef para crear un alias para la estructura Estudiante.

#include <stdio.h>

struct Estudiante {
    char nombre[50];
    int edad;
    float promedio;
};

typedef struct Estudiante Colegio;

int main() {
    Colegio estudiante1;
    estudiante1.edad = 20;
    estudiante1.promedio = 5.5;
    snprintf(estudiante1.nombre, sizeof(estudiante1.nombre), "Juan Perez");

    printf("Nombre: %s\n", estudiante1.nombre);
    printf("Edad: %d\n", estudiante1.edad);
    printf("Promedio: %.2f\n", estudiante1.promedio);

    return 0;
}