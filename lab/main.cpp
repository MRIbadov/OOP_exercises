#include <iostream>
#include "header.h"



int main() {
    Cat myCat( "Red", 12.1,"Rafiq", 21.2, 17.1);
    Whale myWhale( "Blue", 12.1, "MansurYAbas", 21.2, 17.1);

    myCat.utterVoice();
    std::cout << "Color of the cat: " << myCat.getColor() << std::endl;

    myWhale.utterVoice();
    std::cout << "Length of the whale: " << myWhale.getHeight() << " meters" << std::endl;


    return 0;

}
