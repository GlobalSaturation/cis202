#include <iostream>
#include <vector>
#include <string>
#include "search.h"

void searchByCustomer(const vector<LaunchRecord>& records, const string& customer) {
    for (const auto& record : records) {
        if (record.getCustomer().find(customer) != string::npos) {
            record.display();
        }
    }
}

void searchByOutcome(const vector<LaunchRecord>& records, const string& outcome) {
    for (const auto& record : records) {
        if (record.getLaunchOutcome().find(outcome) != string::npos) {
            record.display();
        }
    }
}

/*
THERE ARE TWO MORE FUNCTIONS THAT YOU NEED TO IMPLEMENT HERE.
*/

