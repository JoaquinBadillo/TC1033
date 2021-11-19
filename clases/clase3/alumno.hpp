#include <iostream>
#include <string>
using namespace std;

class Alumno
{
    private:
        string matricula;
        string nombre;
        int edad;
        string carrera;
    
    public:
        // Constructor default
        Alumno()
        {
            matricula = " ";
            nombre = " ";
            edad = 0;
            carrera = " ";
        }

        // Constructor parametrizado
        Alumno(string matricula_, string nombre_, int edad_, string carrera_)
        {
            setMatricula(matricula_);
            setNombre(nombre_);
            setEdad(edad_);
            setCarrera(carrera_);
        }

        // Getters
        string getMatricula(void)
        {
            return matricula;
        }

        string getNombre(void)
        {
            return nombre;
        }

        int getEdad(void)
        {
            return edad;
        }

        string getCarrera(void)
        {
            return carrera;
        }

        // Setters
        void setMatricula(string matricula_)
        {
            if(matricula_[0] == 'A')
            {
                matricula = matricula_;
            }
            else
            {
                matricula = " ";
            }
        }

        void setNombre(string nombre_)
        {
            nombre = nombre_;
        }

        void setEdad(int edad_)
        {
            // La edad es estrictamente positiva
            if (edad_ > 0)
            {
                edad = edad_;
            }
            else
            {
                edad = 0;
            }
        }

        void setCarrera(string carrera_)
        {
            carrera = carrera_;
        }

        // Métodos adicionales
        void imprimeAlumno()
        {
            cout << "Matricula: " << matricula << endl;
            cout << "Nombre: " << nombre << endl;
            cout << "Edad: " << edad << endl;
            cout << "Carrera: " << carrera  << endl;
        }

        void cumpleanios()
        {
            edad ++;
        }
};