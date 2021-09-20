#ifndef PERSON_H
#define PERSON_H
#include <string>
class person
{
    private:
        std::string name;
        std::string address;
    public:
        person(std::string name, std::string address);
        std::string getName(){return name;}
        std::string getAddress(){return address;}
        void setAddress(std::string address);
        void setName(std::string name);
        std::string toString();
};
#endif