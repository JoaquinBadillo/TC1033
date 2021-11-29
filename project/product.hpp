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
        unsigned int id;
        int stock;
        float precio;

    public:
        Product()
        {
            setNombre("Producto Sin Nombre");
            setId(0);
            setStock(0);
            setPrecio(0);
        }

        Product(string nombre_)
        {
            setNombre(nombre_);
        }

        Product(string nombre_, unsigned int id_, int stock_, float precio_)
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

        void setId(unsigned int id_)
        {
            id = id_;
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
            if(precio < 0)
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

        unsigned int getId(void)
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
};

#endif