#ifndef ADMIN_H
#define ADMIN_H

#include "user.h"
#include "employee.h"
#include <vector>

class Admin : public User {
    private:
        std::vector<Employee> staffList;

    public:
        Admin();

        void addEmployee(std::string u, std::string p);

        void printStaff();
};

#endif