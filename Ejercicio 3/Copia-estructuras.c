// Enunciado: Escribe una función que tome una estructura Estudiante y devuelva una copia de la misma.

#include <stdio.h>
#include <string.h>

struct Estudiante {
    char nombre[50];
    int edad;
    float promedio;
};

struct Estudiante copiarEstudiante(struct Estudiante estudiante) {
    struct Estudiante copia;
    strcpy(copia.nombre, estudiante.nombre);
    copia.edad = estudiante.edad;
    copia.promedio = estudiante.promedio;
    return copia;
}

int main() {
    struct Estudiante estudiante = {"Juan", 20, 8.5};
    struct Estudiante copia = copiarEstudiante(estudiante);
    printf("Nombre: %s\nEdad: %d\nPromedio: %.2f\n", copia.nombre, copia.edad, copia.promedio);
    return 0;
}