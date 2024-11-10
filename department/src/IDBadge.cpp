#include "IDBadge.hpp"
#include <iostream>

IDBadge::IDBadge(const std::string& badge_number, const Date& issue_date)
    : badge_number_(badge_number), issue_date_(issue_date) {}

void IDBadge::display_badge_info() const {
    std::cout << "Badge " << badge_number_ << " was issued on ";
    issue_date_.print_date();
}

std::string IDBadge::get_badge_number() const {
    return badge_number_;
}
