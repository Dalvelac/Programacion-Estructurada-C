#include <iostream>
#include <string>

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