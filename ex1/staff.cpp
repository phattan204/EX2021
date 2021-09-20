#include "staff.h"
#include "person.h"


    staff::staff(std::string name, std::string address, std::string school, double pay)
    {

    }

    void staff::setSchool(std::string school)
    {
        this->school = school;
    }

    void staff::setPay(double pay)
    {
        this->pay = pay;
    }
    std::string staff::toString()
    {
        std::string string = "Staff[ ,school ="+ staff::getSchool()+" ,pay = "+staff::getPay()+"]";
        return string;
    }
