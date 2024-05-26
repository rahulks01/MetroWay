#ifndef METROGRAPH_H
#define METROGRAPH_H

#include <vector>
#include <unordered_map>
#include <limits>
#include <string>
#include "Station.h"
using namespace std;

class MetroGraph {
public:
    MetroGraph(int numStations);
    void addStation(const Station& station, const string& line);
    void addEdge(int srcId, int destId, double distance);
    vector<int> dijkstra(int srcId, int destId);
    string getStationNameById(int id) const;
    string getStationLineById(int id) const;

private:
    int numStations;
    vector<Station> stations;
    unordered_map<int, unordered_map<int, double>> adjacencyList;
    unordered_map<int, string> stationLines;
};

#endif
