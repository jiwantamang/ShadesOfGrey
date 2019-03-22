#include<iostream>
#include<string>
#include<fstream>
#include<vector>

using namespace std;

int main(int argc, char *argv[])
{
    unsigned char* image;
    int width = 255;
    int height = 255;
    ifstream infile;

    int b = 0;
    int w = 0;
    int g = 0;

    image = new unsigned char[width * height];  // Allocate memory for the image
    infile.open("sample.bin", ios::binary);        // Open the image file
    infile.read(reinterpret_cast <char*> (image), width * height);  // Read the image into memory

    for(int i = 0; i < 255 ; i++){
        for(int j = 0; j < 255; j++) {
            int c = (int) image[i * width + j];
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