#include "civilization.h"
#include <string>
#include <sstream>
string Civilization::getCname() const
{
    return Cname;
}

void Civilization::setCname(const string &value)
{
    Cname = value;
}

int Civilization::getX() const
{
    return x;
}

void Civilization::setX(int value)
{
    x = value;
}

int Civilization::getY() const
{
    return y;
}

void Civilization::setY(int value)
{
    y = value;
}

void Civilization::show()
{
 cout<<"Tabla de aldeanos : "<<endl;
 cout<<setw(1)<<"|Nombre|"<<
       setw(3)<<"|Genero|"<<
       setw(5)<<"|Salud|"<<
       setw(7)<<"|Edad |"<<endl;
for (list<Aldeano>::iterator it = people.begin(); it != people.end(); ++it)
        {
           cout << setw(1)<<'|'<<(*it).getName() <<'|'<<
           setw(3)<<'|'<<(*it).getGender() <<'|'<<
           setw(5)<<'|'<<(*it).getHealth() <<'|'<<
           setw(7)<<'|'<< (*it).getAge() <<'|'<< std::endl;
        }
}

size_t Civilization::sais()
{
    people.size();
}
void Civilization::AgregarAldeanoi(const Aldeano &a)
{
    people.push_front(a);
}

void Civilization::AgregarAldeanof(const Aldeano &a)
{
    people.push_back(a);
}

void Civilization::Asesinar(const string &nom)
{
    string t;
  const Aldeano x;
    for (auto it = people.begin(); it != people.end(); ++it)
    {  t=it->getName();
        if(t == nom)
        {
            people.erase(it);
            break;
        }
     }
}

void Civilization::Abnegacion(size_t &lf)
{
    size_t t;
    for (auto it = people.begin(); it != people.end();++it)
    { t = it->getHealth();
        if(t <= lf)
        {
            people.erase(it);
        }
     }
}

void Civilization::Sacrifice()
{
    size_t t;
    for (auto it = people.begin(); it != people.end();++it)
    {
        t= it->getAge();
        if(t > 58 )
        {
            people.erase(it);
        }
     }
}

Civilization::Civilization(string &a, int &x, int &y)
{
           this->setX(x);
            this->setY(y);
            this->setCname(a);
}
                Civilization::Civilization(){}

 void Civilization::pornoMbre()
        {
                people.sort(
                            [](const Aldeano &a1 ,const Aldeano &a2){
                    return a1.getName() < a2.getName();
                });
 }

 void Civilization::Poredad()
 {
     people.sort(
         [](const Aldeano &a1 ,const Aldeano &a2){
         return a1.getAge() > a2.getAge();});
 }

string Civilization::Tostr()
 {
     cout << left;
     cout << setw(25)<< "Nombre de Civilizacion" <<
             setw(20)<< "Coordenadas" << endl;

     stringstream k;
     k << Cname<< setw(20)<<"("<<getX()<<","<<getY()<<")"<<endl;
     return k.str();
 }

                void Civilization::porsalud()
        {
                people.sort(
                    [](const Aldeano &a1 ,const Aldeano &a2){
            return a1.getHealth() > a2.getHealth();});
    }


