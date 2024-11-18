// Enunciado: Crea una instancia de la estructura Estudiante y asigna valores a sus miembros.

#include <stdio.h>
#include <string.h>

struct Estudiante {
    char nombre[50];
    int edad;
    float promedio;
};

int main() {
    struct Estudiante estudiante1;
    struct Estudiante estudiante2;

    // Asignar valores a los miembros de la estructura
    estudiante1.edad = 20;
    estudiante1.promedio = 8.5;
    strcpy(estudiante1.nombre, "Juan");

    estudiante2.edad = 22;
    estudiante2.promedio = 7.9;
    strcpy(estudiante2.nombre, "Maria");

    // Imprimir los valores de los miembros de la estructura
    printf("Estudiante 1:\n");
    printf("Nombre: %s\n", estudiante1.nombre);
    printf("Edad: %d\n", estudiante1.edad);
    printf("Promedio: %.2f\n", estudiante1.promedio);

    printf("\nEstudiante 2:\n");
    printf("Nombre: %s\n", estudiante2.nombre);
    printf("Edad: %d\n", estudiante2.edad);
    printf("Promedio: %.2f\n", estudiante2.promedio);
}