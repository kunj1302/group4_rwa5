/**
 * @file IDBadge.hpp
 * @brief Declaration of IDBadge class
 * @version 0.1
 * @date 2024-10-21
 */

#include <string>
#include "Date.hpp"

class IDBadge {
public:
    IDBadge(const std::string& badge_number, const Date& issue_date);

    void display_badge_info() const;
    std::string get_badge_number() const;

private:
    std::string badge_number_;
    Date issue_date_;
};
