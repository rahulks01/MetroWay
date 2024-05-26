#include "Station.h"
using namespace std;

Station::Station(const string& name, int id) : name(name), id(id) {}

string Station::getName() const {
    return name;
}

int Station::getId() const {
    return id;
}
