//#include <iostream>
#include <fstream>
//#include <sstream>
#include <vector>
#include <string>
#include "file_utils.h"
#include "LaunchRecord.h"

using namespace std;

vector<string> parseCSVLine(const string& line) {
    vector<string> result;
    string token;
    bool inQuotes = false;

    for (size_t i = 0; i < line.length(); ++i) {
        char c = line[i];

        if (c == '"') {
            //toggle inquotes true or false
            inQuotes = !inQuotes;
        } else if (c == ',' && !inQuotes) {
            //if we reached a comma and are outside of quotes, add word token to vector
            result.push_back(token);
            token.clear();
        } else {
            //add current char to our word token
            token += c;
        }
    }
    result.push_back(token);
    //the finished results is the parsed words without 
    return result;
}


vector<LaunchRecord> loadLaunchRecords(const string& filename) {
    vector<LaunchRecord> records;
    ifstream file(filename);
    string line;
    bool firstLine = true;

    while (getline(file, line)) {
        if (firstLine) {
            firstLine = false;
            continue;
        }
        //store a vector of launchRecord objects that each have the parsed data from each line
        vector<string> fields = parseCSVLine(line);
        records.emplace_back(fields);
    }

    return records;
}

