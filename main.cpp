/*
 * The main class of the project is in charge of parsing
 * the input and creating the relevant
 * objects. then calling the method of the
 * BFS in order to get the right path.
 */

#include <iostream>
#include "Point.h"
#include "BFS.h"

using namespace std;
int toInt(char* s);

int main() {

    int variables[7];
    char * input = new char();
    cin>>input;
    input = strtok(input, "_");
    for (int i = 0; i < 6; i++) {
        if (input != NULL) {
            variables[i] = toInt(input);
        }
        //Goes to next place where there is a '_' and splits
        if (input != NULL) {
            input = strtok(NULL, "_,");
        }
    }
    Point start = Point(1,3);
    Point end = Point(4,4);
    Graph* graphPointer;
    //sizes sent to grid
    Grid g = Grid(6,6);
    graphPointer = &g;
    BFS* bfs = new BFS(graphPointer, 6, 6, &start, &end);
    bfs->getPath();
    delete bfs;
    delete input;
    return 0;
}

/*
 * converts the char to an int.
 */
int toInt(char* s) {
    //Could be 10
    if(*s - 48 == 1) {
        s++;
        if(*s - 48 == 0) {
            return 10;
        }
        else {
            return 1;
        }
    }
    return *s - 48;
}

