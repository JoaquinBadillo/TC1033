#include <iostream>

#include "user.hpp"

using namespace std;

int main(void)
{
    Product producto1("Producto 1", 1, 5, 3000.10);
    Product producto2("Producto 2", 2, 3, 1000.00);
    Product producto3("Producto 3", 3, 0, 800.00);
    Product producto4("Producto 4", 4, 12, 5000.50);
    Product producto5("Producto 5", 5, 33, 2000.30);
    Product producto6("Producto 6", 6, 1, 400.20);

    User usuario1("Tester", "contrasenia", "test@gmail.com");

    usuario1.agregarAlCarrito(producto1);
    usuario1.agregarAlCarrito(producto2);
    usuario1.agregarAlCarrito(producto3);

    usuario1.verCarrito();

    usuario1.agregarAlCarrito(producto4);
    usuario1.agregarAlCarrito(producto6);

    usuario1.verCarrito();

    usuario1.quitarDelCarrito(producto1);

    usuario1.verCarrito();

    usuario1.pagar();

    usuario1.crearWishlist("Navidad");
    usuario1.agregarAWishlist("Navidad", producto3);
    usuario1.agregarAWishlist("Navidad", producto4);

    return 0;
}