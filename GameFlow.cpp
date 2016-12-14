
#include "GameFlow.h"
#include <iostream>
#include <boost/lexical_cast.hpp>
#include <boost/token_functions.hpp>
#include <boost/tokenizer.hpp>

typedef boost::tokenizer<boost::char_separator<char>> tokenizer;

void GameFlow::initialize() {
    char obstacles;
    string size;
    //To be used later as graph size
    cin >> size;
    Graph *grid = createGraph(size);

    //Checks for obstacles
    cin >> obstacles;
    int obstacleCount = boost::lexical_cast<int>(obstacles);
    if (obstacleCount != 0) {
        string obstacle;
        for (int count = 0; count < obstacleCount; count++) {
            cin >> obstacle;
            Coordinate* c = createCoordinate(obstacle);
            grid->addObstacle(c);
        }
    }
    BFS *bfs = new BFS(grid);
    this->city = City(bfs);
}

void GameFlow::run() {
    int run = 1;
    int action1;
    int driverId;
    std::string s;
    TaxiCenter tc = city.getTaxiCenter();

    while (run) {
        cin >> action1;
        int action = boost::lexical_cast<int>(action1);
        switch(action) {
            case 1: //Insert Driver
            {
                cin >> s;
                Driver d = createDriver(s);
                tc.addDriver(d);
                break;
            }
            case 2: {
                cin >> s;
                Trip t = createTrip(s);
                tc.addTrip(t);
                break;
            }
            case 3: {
                //Create vehicle
                //Sending vehicle to matching driver (as taxi)
                break;
            }
            case 4: {
                cin >> driverId;
                tc.requestDriverLocation(driverId);
                break;
            }
            case 6: {
                tc.driveAll();
                break;
            }
            case 7:
                run = 0;
                break;
            default:
                break;
        }
    }
}


Driver GameFlow::createDriver(string s) {
    int info[6];
    string status;
    int i = 0;
    boost::char_separator<char> sep{","};
    tokenizer tok{s, sep};
    for (const auto &t : tok) {
        if(i != 2) {
            int d = boost::lexical_cast<int>(t);
            info[i] = d;
        }
        else {
            status = t;
        }
        i++;
    }
    Driver d = Driver(info[0], info[1], status[0], info[3], info[4]);
    return d;
}


Trip GameFlow::createTrip(string s) {
    //7 ints
    int i = 0;
    int place = 0;
    int value[13];
    while(place < 8) {
        value[place] = boost::lexical_cast<int>(s[i]);
        place++;
        i+=2;
    }
    Trip trip = Trip(value[0],value[1], value[2], value[3],
                     value[4], value[5], value[6]);
    return trip;
}

Coordinate* GameFlow::createCoordinate(string s) {
    int x = s[0];
    int y = s[2];
    Coordinate* point = new Point(x, y);
    return point;
}

Graph* GameFlow::createGraph(string s) {
    int x = boost::lexical_cast<int>(s[0]);
    int y = boost::lexical_cast<int>(s[2]);
    Graph *graphPointer = new Grid(x, y);
    return graphPointer;
}
