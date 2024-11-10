#pragma once 
#include <string>

namespace department{
    using ushort = unsigned short;
class Manager{
public:
    Manager(const std::string& name,double salary,const IDBadge& id_Badge,ushort teamsize,ushort noofprojects):Employee(name, salary, id_Badge),team_size_{teamsize},number_of_projects_{noofprojects}{
    }

    void conduct_performance_review() const;
    void perform_task() const override;
    void attend_meeting() const override;
    void receive_salary() const override;


private: 
    ushort team_size_;
    ushort number_of_projects_;

};
}