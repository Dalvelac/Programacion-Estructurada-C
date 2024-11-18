https://github.com/Dalvelac/Programacion-Estructurada-C/

# Ejercicios de Programación Estructurada en C
Este repositorio contiene una serie de ejercicios relacionados con estructuras y punteros en C, diseñados para profundizar en los conceptos fundamentales de la programación estructurada. A continuación, se presenta una descripción de cada ejercicio y su propósito.

## Ejercicio 1: Estructuras y Punteros
1.1. Archivo: Estructura.c

Este archivo define la estructura Estudiante, que será utilizada en los demás programas del ejercicio.
Estructura:
```
struct Estudiante {
    char nombre[50];
    int edad;
    float promedio;
};
```

Propósito: Proveer un modelo para trabajar con datos de estudiantes, incluyendo su nombre, edad y promedio.
1.2. Archivo: Instanciacion-estructuras.c

Este archivo demuestra cómo instanciar estructuras en C y asignar valores a sus miembros.
Funcionalidades:

    Declarar estructuras del tipo Estudiante.
    Asignar valores utilizando strcpy y operadores de acceso.
    Imprimir los valores de las estructuras.

Propósito: Familiarizarse con la declaración y manipulación de estructuras en memoria estática.
Ejemplo de salida:

```
Estudiante 1:
Nombre: Juan
Edad: 20
Promedio: 8.50

Estudiante 2:
Nombre: Maria
Edad: 22
Promedio: 7.90
```

1.3. Archivo: Instanciacion-malloc.c

Este archivo utiliza la función malloc para asignar dinámicamente memoria para una estructura.
Funcionalidades:

    Asignar memoria dinámica para una estructura Estudiante.
    Asignar valores a los miembros utilizando punteros.
    Liberar la memoria asignada con free.

Propósito: Introducir la asignación dinámica de memoria para estructuras y reforzar las buenas prácticas de manejo de memoria.

1.4. Archivo: Punteros.c

En este archivo, se crean punteros a estructuras para acceder y manipular sus valores.
Funcionalidades:

    Declarar y asignar valores a estructuras.
    Crear punteros a estructuras y acceder a sus miembros usando el operador ->.
    Imprimir valores a través de punteros.

Propósito: Entender cómo funcionan los punteros a estructuras y cómo se utilizan para manipular datos de forma eficiente.
Ejemplo de salida:
```
Juan tiene 20 años y su promedio es 8.50
Maria tiene 22 años y su promedio es 7.90
```

1.5. Archivo: Programa-Principal.c

Este archivo implementa un programa interactivo para manejar una lista de estudiantes utilizando estructuras y memoria dinámica.
Funcionalidades:

    Agregar Estudiantes:
        Permite al usuario añadir estudiantes ingresando su nombre, edad y promedio.
    Ver Estudiantes:
        Muestra la lista de estudiantes con su información.
    Eliminar Estudiantes:
        Permite eliminar un estudiante especificando su índice.
    Salir del Programa:
        Finaliza la ejecución y libera la memoria utilizada.

Estructura del Programa:

    Usa funciones para modularizar el código: agregar_estudiante, ver_estudiantes, y eliminar_estudiante.
    Maneja dinámicamente la memoria para un arreglo de estructuras.

Propósito: Integrar los conceptos de estructuras, punteros y memoria dinámica en una aplicación práctica.
Ejemplo de interacción:
```
1. Agregar estudiante
2. Ver estudiantes
3. Eliminar estudiante
4. Salir
Seleccione una opcion: 1
Ingrese nombre: Pedro
Ingrese edad: 25
Ingrese promedio: 9.1
...
Seleccione una opcion: 2
Estudiante 1:
Nombre: Pedro
Edad: 25
Promedio: 9.10
...
```


## Ejercicio 2: Uniones en C
2.1. Archivo: uniones.c

Este archivo explora el uso de uniones en C, un tipo de dato que permite almacenar diferentes tipos de variables en el mismo espacio de memoria. Las uniones son útiles cuando solo uno de varios valores necesita ser almacenado en un momento dado.
Funcionalidades:

    Definición de una Unión:
        Se define una unión llamada valores que puede almacenar:
            Un entero (int).
            Un flotante (float).
            Una cadena de caracteres (char[20]).

    Asignación de Valores:
        Se asignan diferentes tipos de datos a una variable de tipo union valores.
        Se imprime el contenido de la unión para observar cómo los valores se sobrescriben en el mismo espacio de memoria.

Código Principal:
```
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
```

Propósito:

    Comprender el funcionamiento de las uniones y cómo comparten la misma posición de memoria.
    Demostrar el comportamiento de sobrescritura de datos en una unión.

Ejemplo de Salida:
```
Entero: 10
Flotante: 3.140000
Cadena: Hola, mundo!
```

Nota Importante: Cuando se asigna un nuevo valor a un miembro de la unión, los valores previamente almacenados en otros miembros se sobrescriben, ya que todos comparten la misma memoria.


## Ejercicio 3: Copia de Estructuras en C
3.1. Archivo: Copia-estructuras.c

Este archivo demuestra cómo realizar una copia de una estructura en C utilizando una función. Las estructuras pueden copiarse miembro a miembro para evitar que múltiples variables apunten a la misma ubicación en memoria.
Funcionalidades:

    Definición de la Estructura Estudiante:
        Contiene los campos:
            nombre (cadena de caracteres).
            edad (entero).
            promedio (flotante).

    Función copiarEstudiante:
        Toma una estructura Estudiante como parámetro.
        Crea y devuelve una copia con los mismos valores miembro a miembro.

    Prueba en main:
        Se crea una estructura Estudiante.
        Se realiza una copia de la estructura utilizando la función copiarEstudiante.
        Se imprimen los valores de la copia para verificar su contenido.

Código Principal:
```
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
```

Propósito:

    Aprender cómo realizar una copia segura de estructuras en C.
    Evitar conflictos que puedan surgir al modificar datos compartidos en memoria.

Ejemplo de Salida:
```
Nombre: Juan
Edad: 20
Promedio: 8.50
```
Nota: Este método asegura que las modificaciones en la copia no afecten al objeto original, ya que se crea una nueva instancia en memoria.


## Ejercicio 4: Uso de typedef en C
4.1. Archivo: typedef.c

Este archivo introduce el uso de typedef para crear un alias para una estructura en C, simplificando su uso y mejorando la legibilidad del código.
Funcionalidades:

    Definición de la Estructura Estudiante:
        Contiene los campos:
            nombre (cadena de caracteres).
            edad (entero).
            promedio (flotante).

    Creación de un Alias:
        Utiliza typedef para crear un alias llamado Colegio que puede ser usado en lugar de struct Estudiante.

    Declaración y Uso:
        Se declara una variable Colegio estudiante1.
        Se asignan valores a los campos de la estructura y se imprimen.

Código Principal:
```
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
```

Propósito:

    Simplificar la declaración de variables basadas en estructuras utilizando un alias.
    Mejorar la claridad del código, especialmente en proyectos grandes donde las estructuras son comunes.

Ejemplo de Salida:
```
Nombre: Juan Perez
Edad: 20
Promedio: 5.50
```

Nota: Usar typedef es una práctica común en C para mejorar la legibilidad, especialmente en estructuras y tipos complejos.


## Ejercicio 5: Variaciones y Extensiones de Uso de Estructuras
5.1. Archivo: Valor-por-arg.c

Este archivo demuestra cómo pasar una estructura como argumento por valor a una función.
Funcionalidades:

    Definición de la Estructura Estudiante:
        Contiene los campos nombre, edad y promedio.
    Función imprimeEstudiante:
        Toma una copia de la estructura como argumento y accede a sus miembros directamente.
    Uso en main:
        Se crea una instancia de la estructura.
        Se llama a la función pasando la estructura por valor.

Propósito:

    Demostrar cómo pasar estructuras por valor y entender que cualquier cambio en la función no afecta a la estructura original.

Ejemplo de Salida:
```
Nombre: Juan
Edad: 20
Promedio: 8.50
```

5.2. Archivo: Por-referencia.c

Este archivo muestra cómo pasar una estructura por referencia usando punteros.
Funcionalidades:

    Definición de la Estructura Estudiante.
    Función imprimeEstudiante:
        Recibe un puntero a la estructura y accede a sus miembros usando el operador ->.
    Uso en main:
        Se pasa la dirección de la estructura a la función.

Propósito:

    Resaltar cómo pasar estructuras por referencia permite ahorrar memoria y realizar modificaciones en el objeto original si es necesario.

Ejemplo de Salida:
```
Nombre: Juan
Edad: 20
Promedio: 8.50
```

5.3. Archivo: Direccionarg.c

Este archivo es una extensión del ejemplo anterior, mostrando cómo se maneja la dirección de una estructura.
Funcionalidades:

    Igual que Por-referencia.c.
    Explica explícitamente que el uso de una dirección (puntero) a la estructura permite manipular sus datos directamente.

Propósito:

    Aclarar el concepto de uso de direcciones en el contexto de estructuras.

5.4. Archivo: Orientada-a-objetos.cpp

Este archivo presenta una implementación orientada a objetos usando clases en C++ para comparar con la programación estructurada en C.
Funcionalidades:

    Definición de la Clase Estudiante:
        Incluye miembros privados: nombre, edad y promedio.
        Incluye un constructor y un método imprimeEstudiante para mostrar los datos.
    Uso en main:
        Se crea un objeto Estudiante.
        Se llama al método para imprimir los valores.

Propósito:

    Comparar la programación estructurada en C con la orientación a objetos en C++.
    Mostrar cómo encapsular datos y comportamientos en una clase.

Código Principal:
```
class Estudiante {
private:
    std::string nombre;
    int edad;
    float promedio;

public:
    Estudiante(const std::string &nombre, int edad, float promedio)
        : nombre(nombre), edad(edad), promedio(promedio) {}

    void imprimeEstudiante() const {
        std::cout << "Nombre: " << nombre << std::endl;
        std::cout << "Edad: " << edad << std::endl;
        std::cout << "Promedio: " << promedio << std::endl;
    }
};

int main() {
    Estudiante e("Juan", 20, 8.5);
    e.imprimeEstudiante();
    return 0;
}
```

Ejemplo de Salida:
```
Nombre: Juan
Edad: 20
Promedio: 8.50
```

Conclusión General

Este repositorio cubre una amplia gama de conceptos en C y C++, incluyendo:

    Declaración y uso de estructuras.
    Manejo de memoria y punteros.
    Comparaciones entre programación estructurada y orientada a objetos.
