#include "user.h"
#include "generic.h"
#include "ticket.h"
#include "admin.h"
using namespace std;

Ticket::Ticket(string ID, string c, string t, string u){
this->ticketID = ID;
this->content = c;
this->tag = t;
this->timeSubmitted = "0";
this->timeAllotted = "UNDECIDED";
this->status = "Under Review";
this->fromUser = u;
};

void Ticket::setID(string ID) {
    ticketID = ID;
}
void Ticket::setContent(string c) {
    content = c;
}
void Ticket::setTag(string t) {
    tag = t;
}
void Ticket::setTimeSubmitted(string timeS) {
    timeSubmitted = timeS;
}
void Ticket::setTimeAllotted(string timeA) {
    timeAllotted = timeA;
}
void Ticket::setStatus(string s) {
    status = s;
}
void Ticket::setFromUser(string u) {
    fromUser = u;
}

string Ticket::getContent() {
    return content;
}
string Ticket::getTag() {
    return tag;
}
string Ticket::getTimeSubmitted() {
    return timeSubmitted;
}
string Ticket::getTimeAlloted() {
    return timeAllotted;
}
string Ticket::getStatus() {
    return status;
}
string Ticket::getFromUser() {
    return fromUser;
}
string Ticket::getAssignedEmployee() {
    return assignedEmployee;
}
string Ticket::getID() {
    return ticketID;
}

void Ticket::printTicket(){
    cout << "ID: " << ticketID << endl;
    cout << "Tag: " << tag << endl;
    cout << "Status: " << status << endl;
    cout << "From User: " << fromUser << endl;
    cout << "Content: " << content << endl;
    cout << endl;
}