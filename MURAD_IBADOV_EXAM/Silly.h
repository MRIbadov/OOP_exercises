//
// Created by hp on 1/17/2024.
//

#ifndef MURAD_IBADOV_SILLY_H
#define MURAD_IBADOV_SILLY_H
#include <stdexcept>

class Silly: public std::logic_error{
public:
    Silly(const std::string &text);
};
#endif //MURAD_IBADOV_SILLY_H
