#include "student.h"
#include "person.h"


        student::student(std::string name, std::string address,int year,double fee)
        {

        }

        void student::setProgram(std::string program)
        {
            this->program = program;
        }

        void student::setYear(int year)
        {
            this->year = year;
        }

        void student::setFee(double fee)
        {
            this->fee = fee;
        }
        std::string student::toString()
        {
            std::string string ="Student[], program ="+getProgram()+",year="+getYear()+", fee="+getFee()+"]";
            return string;
        }
