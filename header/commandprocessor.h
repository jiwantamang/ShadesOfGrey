#ifndef COMMANDPROCESSSOR_H
#define COMMANDPROCESSSOR_H

#include<iostream>
#include<vector>
#include <string>
#include <sstream> 

using namespace std;

struct Dimension {
            int width;
            int height;
        };

class CommandProcessor {
    private:         
        Dimension dm;
        string imageName;
    public: 
        bool processCommand(int argc,  char **argv);
        void extractDimension(string dimension);
        string getImageName();
        Dimension getDimension();
        vector<string> split(string str, char delimiter);
};

#endif