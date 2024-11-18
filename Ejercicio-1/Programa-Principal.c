#include <stdlib.h>
#include <string.h>
#include <stdio.h>

struct Estudiante {
    char nombre[50];
    int edad;
    float promedio;
};

void agregar_estudiante(struct Estudiante *estudiantes, int *cantidad_estudiantes, const char *nombre, int edad, float promedio) {
    strcpy(estudiantes[*cantidad_estudiantes].nombre, nombre);
    estudiantes[*cantidad_estudiantes].edad = edad;
    estudiantes[*cantidad_estudiantes].promedio = promedio;
    (*cantidad_estudiantes)++;
}

void ver_estudiantes(struct Estudiante *estudiantes, int cantidad_estudiantes) {
    for (int i = 0; i < cantidad_estudiantes; i++) {
        printf("Estudiante %d:\n", i + 1);
        printf("Nombre: %s\n", estudiantes[i].nombre);
        printf("Edad: %d\n", estudiantes[i].edad);
        printf("Promedio: %.2f\n", estudiantes[i].promedio);
    }
}

void eliminar_estudiante(struct Estudiante *estudiantes, int *cantidad_estudiantes, int indice) {
    if (indice < 0 || indice >= *cantidad_estudiantes) {
        printf("Indice invalido\n");
        return;
    }
    for (int i = indice; i < *cantidad_estudiantes - 1; i++) {
        estudiantes[i] = estudiantes[i + 1];
    }
    (*cantidad_estudiantes)--;
}

int main() {
    struct Estudiante *estudiantes = (struct Estudiante*) malloc(sizeof(struct Estudiante) * 10);
    int cantidad_estudiantes = 0;
    int opcion = 0;

    while (1) {
        printf("1. Agregar estudiante\n");
        printf("2. Ver estudiantes\n");
        printf("3. Eliminar estudiante\n");
        printf("4. Salir\n");
        printf("Seleccione una opcion: ");
        scanf("%d", &opcion);

        if (opcion == 1) {
            char nombre[50];
            int edad;
            float promedio;
            printf("Ingrese nombre: ");
            scanf("%s", nombre);
            printf("Ingrese edad: ");
            scanf("%d", &edad);
            printf("Ingrese promedio: ");
            scanf("%f", &promedio);
            agregar_estudiante(estudiantes, &cantidad_estudiantes, nombre, edad, promedio);
        } else if (opcion == 2) {
            ver_estudiantes(estudiantes, cantidad_estudiantes);
        } else if (opcion == 3) {
            int indice;
            printf("Ingrese el índice del estudiante a eliminar: ");
            scanf("%d", &indice);
            eliminar_estudiante(estudiantes, &cantidad_estudiantes, indice - 1);
        } else if (opcion == 4) {
            break;
        } else {
            printf("Opcion invalida\n");
        }
    }

    free(estudiantes);
    return 0;
}