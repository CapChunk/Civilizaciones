#ifndef ALDEANO_H
#define ALDEANO_H
#include <iomanip>
#include <string>
#include<iostream>
using namespace std;
class Aldeano
{
    string Name;
    size_t Age,Gender,Health;

public:
    Aldeano();
    Aldeano(string &a,size_t &b,size_t &c,size_t &d);
    string getName() const;
    void setName(const string &value);
    size_t getAge() const;
    void setAge(const size_t &value);
    size_t getGender() const;
    void setGender(const size_t &value);
    size_t getHealth() const;
    void setHealth(const size_t &value);
    Aldeano create(string &nom, int &edad, int &genero, int &salud);
    friend ostream& operator<<(ostream &out,
                               Aldeano& a)
    {
        out <<a.getName()<<endl
           <<a.getGender()<<endl
           <<a.getHealth()<<endl
         <<a.getAge()<<endl;
        return out;
    }

};

#endif // ALDEANO_H
