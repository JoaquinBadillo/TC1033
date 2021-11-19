#include <iostream>
#include "alumno.hpp"

using namespace std;

int main(void)
{
    // Crear objeto joaquin con el constructor por defecto
    Alumno joaquin;

    // Establecer atributos con setters
    joaquin.setMatricula("A01026364");
    joaquin.setNombre("Joaquin");
    joaquin.setEdad(19);
    joaquin.setCarrera("ITC");

    // Prueba de getters
    cout << "Atributos de Joaquin" << endl;
    cout << endl;
    cout << joaquin.getMatricula() << endl;
    cout << joaquin.getNombre() << endl;
    cout << joaquin.getEdad() << endl;
    cout << joaquin.getCarrera() << endl;

    cout << endl;

    // Prueba de método imprimeAlumno()
    cout << "Tenemos un metodo para imprimir los atributos..." << endl;
    joaquin.imprimeAlumno();
    cout << endl;

    // Prueba de método cumpleanios()
    cout << "Fue mi cumpleanios xdxd" << endl;
    joaquin.cumpleanios();
    cout << "Ahora deberia tener 20 anios" << endl;
    joaquin.imprimeAlumno();
    cout << endl;

    // Prueba del constructor parametrizado
    Alumno lulu("A01024232", "Lulú", 21, "ITC");
    lulu.imprimeAlumno();
    cout << endl;

    // Prueba de restricciones
    cout << "Probemos las restricciones..." << endl;
    Alumno troll("L01025456", "Troll", -3, "ITD");

    // Las matriculas empiezan estrictamente con A por ser alumno
    // troll no debería tener matrícula
    // -3 no es una edad lógica, por lo tanto se asigna a 0
    troll.imprimeAlumno();
}