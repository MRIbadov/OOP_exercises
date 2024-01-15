#ifndef DENEME_HEADER_H
#define DENEME_HEADER_H

#include <iostream>
#include <vector>
//#include <stdexcept>
class Mammal {
protected:
    std::string name;
    double weight;
    double age;
public:
    Mammal(const std::string& _name, double _weight, double _age);
    virtual void utterVoice() = 0;
    virtual ~Mammal() = default;
    void setName(std::string &_name);
    void setWeight(double _w);
    void setAge(double _age);
    std::string &getName();
    double  getWeight();
     double  getAge();


};

class Cat: public Mammal{
private:
    std::string color;
    double height;
public:
    Cat(const std::string &va, double h, const std::string &name , double _weight, double _age);
    void utterVoice()  override;
    void setColor(std::string v);
    void setHeight(double num);
    std::string getColor();
    double getHeight();
};

class Whale: public Mammal {
private:
    std::string color;
    double height;
public:
    Whale(const std::string &va, double _h, const std::string &name , double _weight, double _age);
    void utterVoice()  override;
    void setColor(std::string v);
    void setHeight(double num);
    std::string getColor();
    double getHeight();

};



#endif