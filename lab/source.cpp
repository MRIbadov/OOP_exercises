

#include "header.h"

Mammal::Mammal(const std::string &_name, double _weight, double _age): name(_name), weight(_weight), age(_age) {};
Cat::Cat(const std::string &va, double h, const std::string &name, double _weight, double _age): Mammal(name, _weight, _age),color(va),height(h) {};

Whale::Whale(const std::string &va, double _h, const std::string &name , double _weight, double _age):Mammal(name, _weight, _age), color(va), height(_h) {};

void Mammal::setName(std::string &_name) { this->name = _name; }

std::string & Mammal::getName() {  return name; }

void Mammal::setWeight(double _w) { this->weight = _w;}

 double  Mammal::getWeight() { return weight; }

 void Mammal::setAge(double _age) { this->age = _age; }

  double Mammal::getAge() {return age; }



void Cat::utterVoice()  {
    std::cout<<"Miyooooo" << std::endl;
}

void Whale::utterVoice()  {
    std::cout<<"AYEEEEEEE" << std::endl;
}


void Cat::setColor(std::string v) {
    this->color = std::move(v);
}

void Cat::setHeight(double num) {
    this->height = num;
}

std::string Cat::getColor() {
    return color;
}

double Cat::getHeight(){
    return height;
}

void Whale::setColor(std::string v) {
    this->color = std::move(v);
}
void Whale::setHeight(double num) {
    this->height = num;
}

std::string Whale::getColor() {
    return color;
}

double Whale::getHeight() {
    return height;
}



