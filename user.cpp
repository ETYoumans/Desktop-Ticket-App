#include "user.h"
#include "generic.h"
#include "ticket.h"
#include "admin.h"
using namespace std;

User::User() {
    this->username = "UNKNOWN";
    this->password = "UNKNOWN";
}

User::User(string u, string p) {
this->username = u;
this->password = p;
}

bool User::login(string input) {
    //TO DO: USER AUTHENTICATION
    return true; //CHANGE
}

void User::setUsernamePassword(string u, string p) {
    this->username = u;
    this->password = p;
}

string User::getUsername(){
    return this->username;
}

void User::test(){
    cout << "Username: " + username << endl;
    cout << "Password: " + password << endl;
    cout << endl;
}
