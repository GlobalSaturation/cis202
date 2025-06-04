#ifndef LAUNCH_RECORD_H
#define LAUNCH_RECORD_H

#include <string>
#include <vector>
using namespace std;

class LaunchRecord {
    int flightNo;
    string date;
    string time;
    string versionBooster;
    string launchSite;
    string payload;
    string payloadMass;
    string orbit;
    string customer;
    string launchOutcome;
    string boosterLanding;
public:

    LaunchRecord(const vector<string>& fields);
    void display() const;

    int getFlightNo() const { return flightNo; }
    const string& getCustomer() const { return customer; }
    const string& getLaunchOutcome() const { return launchOutcome; }
    // IMPLEMENT THE REST OF THE GETTERS
    friend ostream& operator<<(ostream& os, const LaunchRecord& record) {
        /*
        THERE IS MISSING CODE THAT YOU WILL NEED TO IMPLEMENT HERE 
        IN ORDER TO HAVE THE PROPER OUTPUT TO PASS THE TEST.
        */
	    os << "Flight No: " << record.flightNo << "\n"
	    return os;
    }
};



#endif

