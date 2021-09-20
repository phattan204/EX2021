#ifndef STAFF_H
#define STAFF_H
#include <string>
class staff
{
    private:
        std::string school;
        double pay;
    public:
        staff(std::string name, std::string address, std::string school, double pay);
        std::string getSchool(){return school;}
        double getPay(){return pay;}
        std::string toString();
        void setSchool(std::string school);
        void setPay(double pay);
};
#endif