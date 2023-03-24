//
// Created by Damian on 24.03.2023.
//

#ifndef KOMPILATOR_MESSAGE_H
#define KOMPILATOR_MESSAGE_H
#include "user.h"

class message {
    int indeks;
    user& nadawca;
    user& odbiorca;
    std::string tresc;

public:
    message(int ind, user& nad, user& odb, std::string tresc);
};


#endif //KOMPILATOR_MESSAGE_H
