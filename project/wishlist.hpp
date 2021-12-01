#ifndef wishlist_h
#define wishlist_h

#include <string>
#include <vector>

#include "product.hpp"

using namespace std;

class Wishlist
{
    private:
        string nombre;
        vector<Product> productos;

    public:

        // Constructores

        Wishlist()
        {
            nombre = "Lista Sin Nombre";
        }

        Wishlist(string nombre_)
        {
            setNombre(nombre_);
        }

        // Setters

        void setNombre(string nombre_)
        {
            nombre = nombre_;
        }

        void agregarProducto(Product producto)
        {
            productos.push_back(producto);
        }

        void eliminarProducto(Product producto)
        {
            for(int i=0; i<productos.size(); i++)
            {
                if(productos[i].getId() == producto.getId())
                {
                    productos.erase(productos.begin()+i);
                    // Nota el id debe ser único
                    // Pedirle ayuda a Octavio para hacer que el setter no te deje poner ids repetidos
                    break;
                }
            }
        }

        // Getters

        string getNombre(void)
        {
            return nombre;
        }

        vector<Product> getProductos(void)
        {
            return productos;
        }
};

#endif