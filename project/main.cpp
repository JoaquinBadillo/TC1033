#include <iostream>

#include "user.hpp"

using namespace std;

int main(void)
{
    // -- Pruebas de clase Product --
    cout << "Pruebas de Product" << endl;
    // Prueba del constructor de 4 parámetros
    Product producto1("Producto 1", 1, 5, 3000.10);
    Product producto2("Producto 2", 2, 3, 1000.00);
    Product producto3("Producto 3", 3, 0, 800.00);
    
    cout << "Prueba de constructor parametrizado" << endl;
    producto1.datos();
    cout << endl;
    producto2.datos();
    cout << endl;
    producto3.datos();
    cout << endl;

    // Prueba del constructor de 4 parámetros usando datos ilógicos
    Product producto4("Producto 4", -1, 21, 5000.50);
    Product producto5("Producto 5", 5, -33, 300.00);
    Product producto6("Producto 6", 6, 15, -400.20);

    producto4.datos(); // ID debe ser 0
    cout << endl;
    producto5.datos(); // Stock debe ser 0
    cout << endl;
    producto6.datos(); // Precio debe ser 0
    cout << endl;

    // Prueba del constructor por defecto
    Product producto7;
    Product producto8;

    cout << "Prueba del constructor por defecto" << endl;
    producto7.datos(); // Con mostrar uno es suficiente
    cout << endl;

    // Prueba de setters para la clase producto (con datos lógicos)
    producto7.setNombre("Producto 7");
    producto7.setId(7);
    producto7.setStock(60);
    producto7.setPrecio(700.00);
    
    // Prueba de setters para la clase producto (con datos ilógicos)
    producto8.setNombre("Producto 8");
    producto8.setId(-1); // Debe asignar 0
    producto8.setStock(-5); // Debe asignar 0
    producto8.setPrecio(-8.00); // Debe asignar 0

    cout << "Prueba de setters: " << endl;
    producto7.datos(); 
    cout << endl;
    producto8.datos(); // Todos los datos del producto 8 (menos el nombre) deben ser 0
    cout << endl;

    // Prueba del constructor de un parámetro
    Product producto9("Producto 9");
    cout << "Prueba del constructor de un parametro" << endl;
    producto9.datos(); // Tiene nombre, el resto son 0s
    cout << endl;

    // Prueba de getters
    cout << "Prueba de getters" << endl;
    Product producto10("Producto 10", 10, 30, 500.00);
    cout << "Nombre: " << producto10.getNombre() << endl;
    cout << "ID: " << producto10.getId() << endl;
    cout << "Stock: " << producto10.getStock() << endl;
    cout << "Precio: $" << producto10.getPrecio() << endl;

    cout << endl;
    // -- Fin de pruebas de la clase Product -- 

    // -- Pruebas de clase User --
    cout << "Pruebas de User" << endl;

    // Prueba del constructor por defecto
    User usuario0;

    // Prueba de getters
    cout << "Probando constructor default y getters" << endl;
    cout << "Default Username: " << usuario0.getUsername() << endl;
    cout << "Default Password: " << usuario0.getPassword() << endl; //Hash passwords? Too much?
    cout << "Default Email: " << usuario0.getMail() << endl;
    cout << endl;

    // Prueba de setters
    usuario0.setUsername("Yo");
    usuario0.setPassword("Bu3n4C0n7rAsena-S4Lt");
    usuario0.setMail("me@gmail.com");
    
    
    // Podríamos usar el debugger para ver las variables locales, pero lo mostramos por pantalla con couts ¯\_(ツ)_/¯
    cout << "Probando setters" << endl;
    cout << "New Username: " << usuario0.getUsername() << endl;
    cout << "New Password: " << usuario0.getPassword() << endl;
    cout << "New Email: " << usuario0.getMail() << endl;
    cout << endl;

    // Probar constructor parametrizado
    User usuario1("Tester", "contrasena", "test@gmail.com");

    // Again podríamos usar el debugger pero vamos a usar couts
    cout << "Probando constructor parametrizado" << endl;
    cout << "Username: " << usuario1.getUsername() << endl;
    cout << "Password: " << usuario1.getPassword() << endl;
    cout << "Email: " << usuario1.getMail() << endl;
    cout << endl;

    // -- Pruebas del carrito --
    cout << "Verificar que se instancio un carrito vacio en el usuario" << endl; // (usa el constructor de ShoppingCart)
    usuario1.verCarrito();
    cout << endl;

    // Agregar al carrito (usa método agregar producto de la clase ShoppingCart)
    cout << "Prueba de agregar al carrito..." << endl;
    usuario1.agregarAlCarrito(producto1);
    usuario1.agregarAlCarrito(producto2);
    usuario1.agregarAlCarrito(producto3); // No tiene stock (debe mostrar por pantalla que no está disponible)
    usuario1.agregarAlCarrito(producto7);

    usuario1.verCarrito(); // Verificar que producto 3 no se agregó (no tiene stock)
    cout << endl;

    // Quitar del carrito (usa método eliminar producto de la clase ShoppingCart)
    usuario1.quitarDelCarrito(producto1);
    cout << "Prueba de quitar del carrito..." << endl;
    usuario1.verCarrito(); // Verificar que el producto 3 ya no está en el carrito
    cout << endl;

    // Prueba de método "pagar"
    usuario1.pagar(); // Debe tomar un input por terminal para proceder con el pago
    cout << endl;

    usuario1.verCarrito();// Si se acepta el pago verificamos que se vació el carrito
    cout << endl;
    // -- Fin de pruebas de carrito -- 

    // -- Inicio de pruebas de Wishlists -- 

    // Aquí probamos dos cosas método crearWishlist (de User) y el constructor de Wishlist
    usuario1.crearWishlist("Navidad");

    // Probar método de User verWishlists (usa los getters de Wishlist)
    cout << "Prueba de crear y ver Wishlists" << endl;
    cout << endl;
    usuario1.verWishlists();
    cout << endl;

    // Probar método agregar a Wishlist
    usuario1.agregarAWishlist("Navidad", producto3); // El usuario va a esperar a que esté disponbile xd
    usuario1.agregarAWishlist("Navidad", producto1); // El usuario está sad de que quitó este producto del carrito
    cout << "Prueba de ageregar a Wishlist" << endl;
    cout << endl;
    usuario1.verWishlists();
    cout << endl;

    return 0;
}