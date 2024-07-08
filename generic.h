#ifndef GENERIC_H
#define GENERIC_H

#include "user.h"
#include "ticket.h"

#include <vector>

class Generic : public User {
    private:
        std::vector<Ticket> outgoingTickets;
    public:
        Generic(std::string u, std::string p);
        void createTicket(std::string c, std::string t);
        void printTickets();
};

#endif
