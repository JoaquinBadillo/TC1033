#ifndef user_h
#define user_h

#include <iostream>
#include <string>
#include <vector>

#include "cart.hpp"
#include "wishlist.hpp"

using namespace std;

class User
{
    private:
        string username;
        string password;
        string mail;
        ShoppingCart cart;
        vector<Wishlist> wishlists;
    
    public:
        User()
        {
            username = "Usuario sin nombre";
            password = "PASSWORD";
            mail = "no-mail";
            cart = ShoppingCart();
        }

        User(string username_, string password_, string mail_)
        {
            setUsername(username_);
            setPassword(password_);
            setMail(mail_);
            cart = ShoppingCart();
        }

        void setUsername(string username_)
        {
            username = username_;
        }

        void setPassword(string password_)
        {
            password = password_;
        }

        void setMail(string mail_)
        {
            mail = mail_;
        }

        string getUsername(void)
        {
            return username;   
        }

        string getPassword(void)
        {
            return password;
        }

        string getMail(void)
        {
            return mail;
        }

        void verCarrito()
        {
            cout << "Viendo el carrito de compras de " << username << endl;
            cart.print();

            cout << endl;
        }

        void verWishlists()
        {
            // Muestra las wishlists y los primeros 5 productos de cada una

            for(int i=0; i < wishlists.size(); i++)
            {
                cout << wishlists[i].getNombre() << endl; // Mostrar nombre de la i-ésima wishlist

                vector<Product> products = wishlists[i].getProductos(); // Guarda el vector de productos de la i-ésima lista

                for(int j=0; j < products.size() && j < 5; j++)
                {
                    products[j].mostrar();
                    cout << endl;
                }
                cout << "--------------" << endl;
            }
        }

        int crearWishlist(string wishlist_name)
        {
            // Las Wishlists deben tener nombres únicos ¯\_(ツ)_/¯ (si no muere la lógica de otras funciones)
            for(int i=0; i<wishlists.size(); i++)
            {
                if(wishlists[i].getNombre()==wishlist_name)
                {
                    return 1; // Error: La lista wishlist_name ya existe xdxd
                }
            }
            // Si acaba el for loop, entonces se puede crear la wishlist :)
            wishlists.push_back(Wishlist(wishlist_name));
            return 0;
        }

        int agregarAWishlist(string wishlist_name, Product product)
        {
            // Aquí importa lo de las wishlists con nombres únicos jeje 
            for(int i = 0; i < wishlists.size(); i++)
            {
                if(wishlists[i].getNombre() == wishlist_name)
                {
                    wishlists[i].agregarProducto(product);
                    return 0; // Todo gucci :)
                }
            }
            return 1; // La wishlist no existe
        }

        void agregarAlCarrito(Product producto)
        {
            int agregar = cart.agregarProducto(producto);

            if(agregar == 1)
            {
                cout << "Por el momento " << producto.getNombre() << " esta agotado" << endl;
                cout << endl;
            }
        }

        void quitarDelCarrito(Product producto)
        {
            cart.eliminarProducto(producto);
        }

        void pagar()
        {
            cart.pagar();
        }
};

#endif