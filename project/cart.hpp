#ifndef cart_h
#define cart_h

#include <iostream>
#include <iomanip>
#include <vector>

#include "product.hpp"

using namespace std;

class ShoppingCart
{
    private:
        vector<Product> productos;
        float total;

    public:
        ShoppingCart()
        {
            total = 0;   
        }

        vector<Product> getProductos()
        {
            return productos;
        }

        int agregarProducto(Product producto)
        {
            // Checa si el producto tiene stock, si todavía hay stock lo agrega al carrito
            if(producto.getStock() > 0)
            {
                productos.push_back(producto);
                total += producto.getPrecio();
                return 0; // 0 indica que el producto se agregó existosamente
            }

            return 1; // 1 indica que el producto no estaba disponible y no se agregó   
        }

        void eliminarProducto(Product producto)
        {
            for(int i=0; i<productos.size(); i++)
            {
                if(productos[i].getId() == producto.getId())
                {
                    productos.erase(productos.begin()+i);
                    // Nota el id debe ser único
                    break;
                }
            }
        }

        void print(void)
        {
            // Sacrificar memoria por mayor velocidad ¯\_(ツ)_/¯
            int size = productos.size(); 

            if(size = 0)
            {
                cout << "Su carrito de compras esta vacio" << endl;
            }
            else
            {
                for(int i=0; i < productos.size(); i++)
                {
                    productos[i].mostrar();
                }

                cout << setprecision(2) << fixed << "Total: $" << total << endl;
            }
        }

        void pagar(void)
        {
            /* Verificar si hay stock disponible para cada producto (no es redundante)
            ya que pudieron haber añadido cosas al carrito mientras estaban disponibles
            pero se pueden agotar antes de realizar el pago
            */
           cout << "CHECKOUT" << endl;
           cout << "Estos son los articulos disponibles:" << endl; 
           for(int i=0; i < productos.size(); i++)
           {
               if(productos[i].getStock() > 0)
               {
                   productos[i].mostrar();
               }
               else
               {
                   total -= productos[i].getPrecio(); // Restar del total elementos no disponibles
               }
           }
           cout << "Total: $" << total << endl;
           cout << endl;

           char pago = 'n';

           cout << "¿Desea proceder con el pago?  (Y/n) ";
           cin >> pago;

           if(pago == 'Y' || pago == 'y')
           {
               cout << "Pago exitoso." << endl;
               for(int i=0; i < productos.size(); i++)
               {
                    if(productos[i].getStock() > 0)
                    {
                        productos[i].reduceStock(1);
                    }
               }
               vaciar();
           }

           else
           {
               cout << "Lamentamos que no haya encontrado lo que buscaba." << endl; 
           }
        }

        void vaciar(void)
        {
            productos.clear();
        }
};

#endif