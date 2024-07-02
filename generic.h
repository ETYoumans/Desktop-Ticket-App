#ifndef GENERIC_H
#define GENERIC_H

#include "user.h"
#include "ticket.h"

#include <vector>

class Generic : public User{
    private:
        std::vector<Ticket> outgoingTickets;
    public:
        Generic(std::string u, std::string p){
            setUsernamePassword(u,p);
        }
        void createTicket(std::string c, std::string t){
            outgoingTickets.push_back(Ticket(c, t, getUsername()));
        }
        void printTickets(){
            for(int i = 0; i < outgoingTickets.size(); i++){
                outgoingTickets[i].printTicket();
            }
        }
};

#endif