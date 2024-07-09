#include "admin.h"
#include "User.h"
#include "generic.h"
#include "ticket.h"

Admin::Admin() {
    setUsernamePassword("ADMIN", "ADMIN"); //MUST CHANGE LATER
}
void Admin::addEmployee(std::string u, std::string p) {
    staffList.push_back(Employee(u,p));
}

void Admin::printStaff() {
    for(int i = 0; i < staffList.size(); i++){
        staffList[i].test();
    }
};