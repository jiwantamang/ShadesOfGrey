#ifndef IMAGEREADER_H
#define IMAGEREADER_H

#include<fstream>
#include "commandprocessor.h"
#include "counter.h"

using namespace std;
class ImageReader {
    private: 
        unsigned char* image;
        ifstream infile;
        Counter counter;        
        Dimension d;
    public:        
        void readImage(CommandProcessor cp);
        void extractShedColor();
        unsigned char* getImage();
};

#endif