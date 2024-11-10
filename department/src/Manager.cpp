#include "Manager.hpp"
#include <iostream>

void department::Manager::conduct_performance_review() const{
    cout<<"Manager : Performance review conducted"<<endl;
}

void department::Manager::perform_task() const{
    cout<<"Manager : Task Performed"<<endl;
}

void department::Manager::attend_meeting() const{
    cout<<"Manager : Attended Meeting"<<endl;
}

void department::Manager::receive_salary(double salary) const{
    cout<<"Manager : Received Salary"<<salary<<endl;
}