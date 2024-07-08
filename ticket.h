#ifndef TICKET_H
#define TICKET_H

#include <string>
#include <iostream>
using namespace std;

class Ticket{
    private:
        string ticketID; //automatically assigned ticket ID number
        string content; //description of problem described by generic user
        string tag; //tag for the type of problem
        string timeSubmitted; //time the user submitted the project
        string timeAllotted; //number of minutes/hours needed to finish ticket, set by employee
        string status; //current ticket status (under review, in progress, complete, etc)
        //create chat object

        string fromUser; //user who submitted the ticket
        string assignedEmployee; //employee who is assigned to it
    
    public:
        Ticket();
        Ticket(string ID, string c, string t, string u);
        void setID(string ID);
        void setContent(string c);
        void setTag(string t);
        void setTimeSubmitted(string timeS);
        void setTimeAllotted(string timeA);
        void setStatus(string s);
        void setFromUser(string u);
        string getContent();
        string getTag();
        string getTimeSubmitted();
        string getTimeAlloted();
        string getStatus();
        string getFromUser();
        string getAssignedEmployee();
        string getID();
        void printTicket();

};

#endif