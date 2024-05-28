#include <iostream>
#include <vector>
#include <string>
#include "MetroGraph.h"
using namespace std;

void loadStations(MetroGraph& metro) {
    // Purple Line Stations
    metro.addStation(Station("Whitefield", 0), "Purple");
    metro.addStation(Station("Channasandra", 1), "Purple");
    metro.addStation(Station("Kadugodi Tree Park", 2), "Purple");
    metro.addStation(Station("Hopefarm Channasandra", 3), "Purple");
    metro.addStation(Station("Pattandur Agrahara", 4), "Purple");
    metro.addStation(Station("Sri Sathya Sai Hospital", 5), "Purple");
    metro.addStation(Station("Nallurhalli", 6), "Purple");
    metro.addStation(Station("Kundalahalli", 7), "Purple");
    metro.addStation(Station("Seetharam Palya", 8), "Purple");
    metro.addStation(Station("Hoodi Junction", 9), "Purple");
    metro.addStation(Station("Garudacharpalya", 10), "Purple");
    metro.addStation(Station("Krishnarajapura", 11), "Purple");
    metro.addStation(Station("Baiyappanahalli", 12), "Purple");
    metro.addStation(Station("Swami Vivekananda Road", 13), "Purple");
    metro.addStation(Station("Indiranagar", 14), "Purple");
    metro.addStation(Station("Halasuru", 15), "Purple");
    metro.addStation(Station("Trinity", 16), "Purple");
    metro.addStation(Station("Mahatma Gandhi Road", 17), "Purple");
    metro.addStation(Station("Cubbon Park", 18), "Purple");
    metro.addStation(Station("Vidhana Soudha", 19), "Purple");
    metro.addStation(Station("Sir M. Visvesvaraya Station, Central College", 20), "Purple");
    metro.addStation(Station("Nadaprabhu Kempegowda Station, Majestic", 21), "Both");
    metro.addStation(Station("City Railway Station", 22), "Purple");
    metro.addStation(Station("Magadi Road", 23), "Purple");
    metro.addStation(Station("Hosahalli", 24), "Purple");
    metro.addStation(Station("Vijayanagar", 25), "Purple");
    metro.addStation(Station("Attiguppe", 26), "Purple");
    metro.addStation(Station("Deepanjali Nagar", 27), "Purple");
    metro.addStation(Station("Mysore Road", 28), "Purple");
    metro.addStation(Station("Nayandahalli", 29), "Purple");
    metro.addStation(Station("Rajarajeshwari Nagar", 30), "Purple");
    metro.addStation(Station("Jnanabharathi", 31), "Purple");
    metro.addStation(Station("Pattanagere", 32), "Purple");
    metro.addStation(Station("Kengeri Bus Terminal", 33), "Purple");
    metro.addStation(Station("Kengeri", 34), "Purple");

    // Green Line Stations
    metro.addStation(Station("Nagasandra", 35), "Green");
    metro.addStation(Station("Dasarahalli", 36), "Green");
    metro.addStation(Station("Jalahalli", 37), "Green");
    metro.addStation(Station("Peenya Industry", 38), "Green");
    metro.addStation(Station("Peenya", 39), "Green");
    metro.addStation(Station("Goraguntepalya", 40), "Green");
    metro.addStation(Station("Yeshwanthpur", 41), "Green");
    metro.addStation(Station("Sandal Soap Factory", 42), "Green");
    metro.addStation(Station("Mahalakshmi", 43), "Green");
    metro.addStation(Station("Rajajinagar", 44), "Green");
    metro.addStation(Station("Mahakavi Kuvempu Road", 45), "Green");
    metro.addStation(Station("Srirampura", 46), "Green");
    metro.addStation(Station("Sampige Road", 47), "Green");
    metro.addStation(Station("Chickpete", 48), "Both");
    metro.addStation(Station("Krishna Rajendra Market", 49), "Green");
    metro.addStation(Station("National College", 50), "Green");
    metro.addStation(Station("Lalbagh", 51), "Green");
    metro.addStation(Station("South End Circle", 52), "Green");
    metro.addStation(Station("Jayanagar", 53), "Green");
    metro.addStation(Station("Rashtreeya Vidyalaya Road", 54), "Green");
    metro.addStation(Station("Banashankari", 55), "Green");
    metro.addStation(Station("Jayaprakash Nagar", 56), "Green");
    metro.addStation(Station("Yelachenahalli", 57), "Green");
    metro.addStation(Station("Konanakunte Cross", 58), "Green");
    metro.addStation(Station("Doddakallasandra", 59), "Green");
    metro.addStation(Station("Vajarahalli", 60), "Green");
    metro.addStation(Station("Thalaghattapura", 61), "Green");
    metro.addStation(Station("Silk Institute", 62), "Green");
}

void loadEdges(MetroGraph& metro) {
    // Purple Line Edges
    metro.addEdge(0, 1, 2.5);
    metro.addEdge(1, 2, 1.2);
    metro.addEdge(2, 3, 0.8);
    metro.addEdge(3, 4, 1.1);
    metro.addEdge(4, 5, 1.3);
    metro.addEdge(5, 6, 0.9);
    metro.addEdge(6, 7, 1.5);
    metro.addEdge(7, 8, 1.2);
    metro.addEdge(8, 9, 1.8);
    metro.addEdge(9, 10, 1.4);
    metro.addEdge(10, 11, 2.0);
    metro.addEdge(11, 12, 3.0);
    metro.addEdge(12, 13, 1.1);
    metro.addEdge(13, 14, 1.2);
    metro.addEdge(14, 15, 1.1);
    metro.addEdge(15, 16, 1.0);
    metro.addEdge(16, 17, 0.9);
    metro.addEdge(17, 18, 1.0);
    metro.addEdge(18, 19, 0.8);
    metro.addEdge(19, 20, 1.2);
    metro.addEdge(20, 21, 0.7);
    metro.addEdge(21, 22, 1.0);
    metro.addEdge(22, 23, 1.1);
    metro.addEdge(23, 24, 1.0);
    metro.addEdge(24, 25, 1.5);
    metro.addEdge(25, 26, 1.3);
    metro.addEdge(26, 27, 1.2);
    metro.addEdge(27, 28, 1.5);
    metro.addEdge(28, 29, 2.0);
    metro.addEdge(29, 30, 2.1);
    metro.addEdge(30, 31, 1.8);
    metro.addEdge(31, 32, 2.0);
    metro.addEdge(32, 33, 1.5);
    metro.addEdge(33, 34, 1.2);

    // Green Line Edges
    metro.addEdge(35, 36, 2.0);
    metro.addEdge(36, 37, 1.5);
    metro.addEdge(37, 38, 1.2);
    metro.addEdge(38, 39, 1.3);
    metro.addEdge(39, 40, 1.5);
    metro.addEdge(40, 41, 2.0);
    metro.addEdge(41, 42, 1.2);
    metro.addEdge(42, 43, 1.1);
    metro.addEdge(43, 44, 1.5);
    metro.addEdge(44, 45, 1.2);
    metro.addEdge(45, 46, 1.0);
    metro.addEdge(46, 47, 1.3);
    metro.addEdge(47, 21, 1.8); 
    metro.addEdge(21, 48, 1.0); 
    metro.addEdge(48, 49, 1.2);
    metro.addEdge(49, 50, 1.5);
    metro.addEdge(50, 51, 1.0);
    metro.addEdge(51, 52, 1.2);
    metro.addEdge(52, 53, 1.0);
    metro.addEdge(53, 54, 1.5);
    metro.addEdge(54, 55, 1.2);
    metro.addEdge(55, 56, 1.8);
    metro.addEdge(56, 57, 2.0);
    metro.addEdge(57, 58, 1.5);
    metro.addEdge(58, 59, 1.8);
    metro.addEdge(59, 60, 1.5);
    metro.addEdge(60, 61, 1.2);
    metro.addEdge(61, 62, 2.0);
}

int main() {
    MetroGraph metro(63);

    loadStations(metro);
    loadEdges(metro);

    int sourceId, destId;
    cout << "Enter source station ID: ";
    cin >> sourceId;
    if (sourceId < 0 || sourceId > 62) {
        cout << "Enter a valid station ID." << endl;
    } else {
        cout << "Enter destination station ID: ";
        cin >> destId;

        if (destId < 0 || destId > 62) {
            cout << "Enter a valid station ID." << endl;
        } else if (destId == sourceId) {
            cout << "The destination and the source IDs are same." << endl;
        } else {
            vector<int> shortestPath = metro.dijkstra(sourceId, destId);

            cout << "Shortest path from " << metro.getStationNameById(sourceId) << " to "
                    << metro.getStationNameById(destId) << ":\n\n";

            for (int stationId : shortestPath) {
                cout << metro.getStationNameById(stationId) << " (" << metro.getStationLineById(stationId) << " Line)\n";
            }
        }
    }

    return 0;
}

