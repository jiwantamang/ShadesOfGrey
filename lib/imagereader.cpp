#ifndef IMAGEREADER_CPP
#define IMAGEREADER_CPP

#include "./header/imagereader.h"

void ImageReader::readImage(CommandProcessor cp){
    
    Dimension d = cp.getDimension();
    image = new unsigned char[d.width * d.height];  // Allocate memory for the image
    infile.open("sample.bin", ios::binary);        // Open the image file
    infile.read(reinterpret_cast <char*> (image), d.width * d.height);  // Read the image into memory

    for(int i = 0; i < 255 ; i++){
        for(int j = 0; j < 255; j++) {
            int c = (int) image[i * d.width + j];
            //cout << c << endl;
            switch (c)
            {
                case 0:
                    b = b+1;
                    break;
                case 200:
                    g = g+1;
                    break;
                case 255:
                    w = w +1;
                    break;
                
            }            
        }        
    }

    cout << "Colors[ Black = " << b << ", White = " << w << ", Gray = " << g << "]";
    

}

unsigned char* ImageReader::getImage() {
    return image;
}

#endif