#ifndef COMMANDPROCESSSOR_CPP
#define COMMANDPROCESSSOR_CPP

#include "../header/commandprocessor.h"

bool CommandProcessor::processCommand(int argc,  char **argv){                                                
    if(argc != 4){
        cout << "Input syntax: ./count-areas <input-filename> --shape <height>,<width>" << endl;
            return false;
        };

        imageName = argv[1];

        extractDimension(argv[3]);

        return true;            
}

void CommandProcessor::extractDimension(string dimension) {
    vector<string> dmArray = split(dimension, ',');
        dm.width = stoi(dmArray[0]);
        dm.height = stoi(dmArray[1]);

    }

string CommandProcessor::getImageName(){
        return imageName;
    }

Dimension CommandProcessor::getDimension(){
    return dm;
}


vector<string> CommandProcessor::split(string str, char delimiter) {
    vector<string> internal;
    stringstream ss(str); // Turn the string into a stream.
    string tok;

    while(getline(ss, tok, delimiter)) {
        internal.push_back(tok);
    }

    return internal;
}

#endif