#include "aldeano.h"

string Aldeano::getName() const
{
    return Name;
}

void Aldeano::setName(const string &value)
{
    Name = value;
}

size_t Aldeano::getAge() const
{
    return Age;
}

void Aldeano::setAge(const size_t &value)
{
    Age = value;
}

size_t Aldeano::getGender() const
{
    return Gender;
}

void Aldeano::setGender(const size_t &value)
{
    Gender = value;
}

size_t Aldeano::getHealth() const
{
    return Health;
}

void Aldeano::setHealth(const size_t &value)
{
    Health = value;
}

Aldeano Aldeano::create(string &nom, int &edad, int &genero, int &salud)
{
    this->setName(nom);
    this->setAge(edad);
    this->setGender(genero);
    this->setHealth(salud);
}



Aldeano::Aldeano()
{
}

Aldeano::Aldeano(string &a, size_t &b, size_t &c, size_t &d)
{
    this->setName(a);
    this->setAge(b);
    this->setGender(c);
    this->setHealth(d);
}
