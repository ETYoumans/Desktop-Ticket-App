#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include "user.h"

class Employee : public User{
    private:
        //Add Calander Object

    public:
        Employee();
        Employee(std::string u, std::string p){
            setUsernamePassword(u,p);
        };


        

};

#endif