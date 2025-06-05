#ifndef LAUNCH_RECORD_H
#define LAUNCH_RECORD_H

#include <string>
#include <vector>
#include <iostream>
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
    const string& getDate() const { return date; }
    const string& getTime() const { return time; }
    const string& getVersionBooster() const { return versionBooster; }
    const string& getLaunchSite() const { return launchSite; }
    const string& getPayload() const { return payload; }
    const string& getPayloadMass() const { return payloadMass; }
    const string& getOrbit() const { return orbit; }
    const string& getBoosterLanding() const { return boosterLanding; }

    // the << operator looks to be overloaded so that we get custom behavior for sending LaunchRecords' data values to an output stream
    friend ostream& operator<<(ostream& os, const LaunchRecord& record) {
        /*
        THERE IS MISSING CODE THAT YOU WILL NEED TO IMPLEMENT HERE 
        IN ORDER TO HAVE THE PROPER OUTPUT TO PASS THE TEST.
        */
	//send private data members to os in order
	    os << "Flight " << record.flightNo << ": " << record.date <<
	    " | Customer: " << record.customer << " | Booster Landing: " <<
	    record.boosterLanding << " | Launch Site: " << record.launchSite << "\n";
	    return os;
    }
};



#endif

