#ifndef VIDEOG_H
#define VIDEOG_H
#include "civilization.h"
#include <vector>
#include <iomanip>
#include <iostream>
class videoG
{
    string Uname;
    vector<Civilization> mesopotamia;
public:
    videoG();

    void Agregar(const Civilization &ghost);
    void Insertar(const Civilization &ghost, size_t p);
    void Genesis(const Civilization &ghost, size_t p); //Inicializar

    Civilization First(); // PRIMERA Y ULTIMA CIVILIZACION
    Civilization Last();

    void Capitalism(); // SORT de manera ascendente segun su ubicacion en  "X"
    void Pandemia(const string &chosen); // Erase
    size_t Total();  //  size
    void show();
    string getUname() const;
    void setUname(const string &value);
    Civilization Born();
    size_t Submenu();
    void Midsomer(size_t &chusen);
    Aldeano registro(size_t &chusen);

     void respaldar();
     void recuperar();


    friend ostream& operator<<(ostream &out,
                               videoG a)
    {
        out <<"Nombre de usuario: "<< a.getUname() << endl <<
              "Numero de civilizaciones" <<a.Total()    << endl ;
        return out;
    }
};
#endif // VIDEOG_H
