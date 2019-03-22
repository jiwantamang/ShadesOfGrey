#ifndef MAIN_H
#define MAIN_H

#include<iostream>
#include "../lib/header/commandprocessor.h"
#include "../lib/header/imagereader.h"

using namespace std;

int main(int argc, char *argv[]) {
    CommandProcessor cp;
    if(!cp.processCommand(argc, argv)) return 0;

    // now read image
    //cout << "Image Name " << cp.getImageName();
    ImageReader ir;
    ir.readImage(cp);
    ir.extractShedColor();

    
    
}

#endif