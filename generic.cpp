#include "user.h"
#include "generic.h"
#include "ticket.h"
#include "admin.h"
using namespace std;

Generic::Generic(std::string u, std::string p) {
setUsernamePassword(u,p);
}

void Generic::createTicket(std::string c, std::string t) {
    outgoingTickets.push_back(Ticket(to_string(outgoingTickets.size()), c, t, getUsername()));
}

void Generic::printTickets() {
    for(int i = 0; i < outgoingTickets.size(); i++){
        outgoingTickets[i].printTicket();
    }
}