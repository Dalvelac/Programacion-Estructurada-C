cmake_minimum_required(VERSION 3.29)
project(Programacion_Estructurada_C C)
add_executable(instanciacion-malloc
        Instanciacion-malloc.c)
add_executable(instanciacion-estructuras
        Instanciacion-estructuras.c)
add_executable(estructura
        Estructura.c
        programa-principal.c)
add_executable(punteros
        Punteros.c)


add_executable(programa-principal programa-principal.c)
