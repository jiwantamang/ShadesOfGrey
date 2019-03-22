#include<fstream>

using namespace std;
class ImageReader {
    private: 
        unsigned char* image;        
        ifstream infile;
    public:
        void readImage(char filename[20]);
        unsigned char* getImage();
};