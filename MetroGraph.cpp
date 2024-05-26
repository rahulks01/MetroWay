#include "MetroGraph.h"
#include <queue>
#include <functional>
#include <algorithm>
using namespace std;

MetroGraph::MetroGraph(int numStations) : numStations(numStations) {}

void MetroGraph::addStation(const Station& station, const std::string& line) {
    stations.push_back(station);
    stationLines[station.getId()] = line;
}

void MetroGraph::addEdge(int srcId, int destId, double distance) {
    adjacencyList[srcId][destId] = distance;
    adjacencyList[destId][srcId] = distance; 
}

vector<int> MetroGraph::dijkstra(int srcId, int destId) {
    vector<double> dist(numStations, numeric_limits<double>::infinity());
    vector<int> prev(numStations, -1);
    dist[srcId] = 0.0;

    using P = pair<double, int>;
    priority_queue<P, vector<P>, greater<P>> pq;
    pq.push({0.0, srcId});

    while (!pq.empty()) {
        int u = pq.top().second;
        pq.pop();

        if (u == destId) break;

        for (const auto& neighbor : adjacencyList[u]) {
            int v = neighbor.first;
            double weight = neighbor.second;

            if (dist[u] + weight < dist[v]) {
                dist[v] = dist[u] + weight;
                prev[v] = u;
                pq.push({dist[v], v});
            }
        }
    }

    vector<int> path;
    for (int at = destId; at != -1; at = prev[at]) {
        path.push_back(at);
    }
    reverse(path.begin(), path.end());

    return path;
}

string MetroGraph::getStationNameById(int id) const {
    for (const auto& station : stations) {
        if (station.getId() == id) {
            return station.getName();
        }
    }
    return "";
}

string MetroGraph::getStationLineById(int id) const {
    auto it = stationLines.find(id);
    if (it != stationLines.end()) {
        return it->second;
    }
    return "";
}
