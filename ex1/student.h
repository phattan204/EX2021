#ifndef STUDENT_H
#define STUDENT_H
#include <string>
class student
{
    private:
        std::string program;
        int year;
        double fee;
    public:
        student(std::string name, std::string address,int year,double fee);
        std::string getProgram(){return program;}
        int getYear(){return year;}
        double getFee(){return fee;}
        void setProgram(std::string program);
        void setYear(int year);
        void setFee(double fee);
        std::string toString();
};
#endif