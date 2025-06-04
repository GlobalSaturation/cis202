#ifndef FILE_UTILS_H
#define FILE_UTILS_H
#include <vector>
#include <string>
#include "LaunchRecord.h"

using namespace std;

vector<string> parseCSVLine(const string& line);
vector<LaunchRecord> loadLaunchRecords(const string& filename);

#endif // FILE_UTILS_H

