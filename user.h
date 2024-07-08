#ifndef USER_H
#define USER_H

#include <string>
#include <iostream>

class User {
    private:
        std::string username;
        std::string password; //TO DO: PASSWORD SECURITY
    public:
        User();
        User(std::string u, std::string p);
        bool login(std::string input);
        void setUsernamePassword(std::string u, std::string p);
        std::string getUsername();
        void test();
};

#endif