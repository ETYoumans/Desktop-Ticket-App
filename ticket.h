#ifndef TICKET_H
#define TICKET_H

#include <string>
#include <iostream>

class Ticket{
    private:
        std::string content; //description of problem described by generic user
        std::string tag; //tag for the type of problem
        std::string timeSubmitted; //time the user submitted the project
        std::string timeAlloted; //number of minutes/hours needed to finish ticket, set by employee
        std::string status; //current ticket status (under review, in progress, complete, etc)
        //create chat object

        std::string fromUser; //user who submitted the ticket
        std::string assignedEmployee; //employee who is assigned to it
    
    public:
        Ticket();
        Ticket(std::string c, std::string t, std::string u){
            this->content = c;
            this->tag = t;
            this->timeSubmitted = "0";
            this->timeAlloted = "UNDECIDED";
            this->status = "Under Review";
            this->fromUser = u;
        }

        void printTicket(){
            std::cout << "Tag: " << tag << std::endl;
            std::cout << "Status: " << status << std::endl;
            std::cout << "From User: " << fromUser << std::endl;
            std::cout << "Content: " << content << std::endl;
            std::cout << std::endl;
        }

};


#endif