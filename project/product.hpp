#ifndef product_h
#define product_h

#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

class Product
{
    private:
        string nombre;
        int id;
        int stock;
        float precio;

    public:
        Product()
        {
            nombre = "Producto Sin Nombre";
            id = 0;
            stock = 0;
            precio = 0;
        }

        Product(string nombre_)
        {
            setNombre(nombre_);
            id = 0;
            stock = 0;
            precio = 0;
        }

        Product(string nombre_, int id_, int stock_, float precio_)
        {
            setNombre(nombre_);
            setId(id_);
            setStock(stock_);
            setPrecio(precio_);

        }

        void setNombre(string nombre_)
        {
            nombre = nombre_;
        }

        void setId(int id_)
        {
            if(id_ < 0)
            {
                id = 0;
            }
            else
            {
                id = id_;
            }
        }

        int setStock(int stock_)
        {
            if(stock_ < 0)
            {
                stock = 0;
                return 1; // 1 indica un stock no valido
            }

            stock = stock_;
            return 0; // 0 indica que se actualizó el stock
        }

        void reduceStock(int n)
        {
            stock -= n;
        }

        int setPrecio(float precio_)
        {
            if(precio_ < 0)
            {
                precio = 0;
                return 1; // 1 indica que se uso un precio no válido
            }

            precio = precio_;
            return 0;
        }

        string getNombre(void)
        {
            return nombre;
        }

        int getId(void)
        {
            return id;
        }

        int getStock(void)
        {
            return stock;
        }

        float getPrecio(void)
        {
            return precio;
        }

        void mostrar(void)
        {
            // Muestra los datos relevantes para un usuario (nombre y precio, dependiendo de la disponibilidad)
            cout << nombre << ": ";
            if(stock > 0)
            {
                cout << setprecision(2) << fixed << "$" << precio << endl;
            }
            else
            {
                cout << "Agotado" << endl;
            }
        }

        void datos(void)
        {
            // Muestra todos los datos del producto
            cout << "Nombre: " << nombre << endl;
            cout << "ID: " << id << endl;
            cout << "Stock: " << stock << endl;
            cout << "Precio: $" << setprecision(2) << fixed << precio << endl;
        }
};

#endif