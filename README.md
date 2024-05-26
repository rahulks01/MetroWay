# MetroWay

This is a C++ project is a metro navigation system for Bengaluru's metro network (Purple and Green Lines),
designed to calculate the optimal path between two user-specified stations.

## About MetroWay

The system leverages concepts from graph theory, including depth-first search (DFS), to determine the best route.
It features an object-oriented programming (OOP) approach, with classes representing metro stations and the metro graph.
The project includes methods to add stations and edges, and to perform pathfinding calculations.
Users are prompted to input the IDs of the source and destination stations, and the system outputs the optimal route, detailing station names and line information.
This project demonstrates the application of OOP principles and graph traversal algorithms in solving real-world navigation problems.

<p align="center">
  <img alt="metroMap" width="650" src="https://github.com/rahulks01/MetroWay/blob/master/img/MetroMap.png">
</p>
<p align="center">
  <em>Map of Bengaluru's Metro Purple and Green Line</em>
</p>

## How to run on your machine
- Clone the repository:
  Open the terminal or command prompt in your local computer and prompt the following command
  ```
  git clone https://github.com/rahulks01/MetroWay.git
  ```
- Then in the same directory execute the following commands one by one:
  ```
  g++ -o metro main.cpp Station.cpp MetroGraph.cpp
  ```
  ```
  ./metro
  ```
<p align="center">
  <img src="https://github.com/rahulks01/MetroWay/blob/master/img/PurpleLineCodes.png" alt="Image 1" height="600"/>
  <img src="https://github.com/rahulks01/MetroWay/blob/master/img/GreenLineCodes.png" alt="Image 2" height="600"/>
</p>
<p align="center">
  <em>Station codes to input for source and destination stations</em>
</p>
