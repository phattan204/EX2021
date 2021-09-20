#include <iostream>
#include "staff.h"
#include "person.h"

    person::person(std::string name, std::string address)
    {
        person::setName(name);
        person::setAddress(address);
    };
    void person::setName(std::string name)
    {
        this->setName(name);
    }
    void person::setAddress(std::string address)
    {
        this->setAddress(address);
    }
    std::string person::toString()
    {
        std::string string= "Person [ name = "+ person::getName() + "; address = "+ person::getAddress()+"] ";
        return string;
    }
