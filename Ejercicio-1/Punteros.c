// Enunciado: Crea un puntero a una estructura Estudiante e inicialízalo.

#include <stdio.h>
#include <string.h>

struct Estudiante {
    char nombre[50];
    int edad;
    float promedio;
};

int main() {
    struct Estudiante estudiante = {"Juan", 20, 8.5};
    struct Estudiante estudiante2 = {"Maria", 22, 7.9};
    struct Estudiante *puntero_estudiante = &estudiante;
    struct Estudiante *puntero_estudiante2 = &estudiante2;

    printf("Juan tiene %d años y su promedio es %.2f\n", puntero_estudiante->edad, puntero_estudiante->promedio);
    printf("Maria tiene %d años y su promedio es %.2f\n", puntero_estudiante2->edad, puntero_estudiante2->promedio);

    return 0;

}