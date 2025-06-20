#include <iostream>

#include "LaunchRecord.h"
#include "file_utils.h"
// There may be a missing header file include here
#include "search.h"

using namespace std;

void print_all(const vector<LaunchRecord>& records) {
    for (const auto& record : records) {
	cout << record << endl;
    }
}

int main() {
    vector<LaunchRecord> records = loadLaunchRecords("spacex.csv");

    string input;
    cout << "Enter customer name to search: ";
    getline(cin, input);
    searchByCustomer(records, input);

    cout << "\nEnter launch outcome to search: ";
    getline(cin, input);
    searchByOutcome(records, input);
   /*
     2 more search functions need to go here.
   */
    cout << "\nEnter launch site to search: ";
    getline(cin, input);
    searchByLaunchSite(records, input);

    cout << "\nEnter booster landing to search: ";
    getline(cin, input);
    searchByBoosterLanding(records, input);

    return 0;

}

