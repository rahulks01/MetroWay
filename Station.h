#ifndef STATION_H
#define STATION_H

#include <string>
using namespace std;

class Station {
public:
    Station(const string& name, int id);
    string getName() const;
    int getId() const;

private:
    string name;
    int id;
};

#endif
