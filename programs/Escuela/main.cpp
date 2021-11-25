#include <iostream>

#include "school.hpp"

using namespace std;

int main(void)
{
    School tec("Tec");

    Student lulu("A01024232", "Lulu", 21, "ITC");
    Student joaquin("A01026364", "Joaquin", 19, "ITC");

    // Inscribir estudiantes
    tec.addStudent(lulu);
    tec.addStudent(joaquin);

    // Mostrar estudiantes
    tec.showStudents();

    return 0;
}