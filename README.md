Introduction
-------------
The project is developed in C++ to count number of coloured areas in an image.
The program has :  

Input: a grey-scale image represented as a 2-dimensional array of unsigned bytes. <br>
Output: array of 256 unsigned int numbers, each of them being a count of areas coloured with the corresponding shade            of grey.

Usage
------
1. Clone the app to your local computer
2. navigate to the project directory 
3. type make // it will generate the binary file to bin folder
4. type ./bin/count-areas <input-filename> --shape <height>,<width>
    e.g. ./bin/count-areas sample.bin --szie 255,255
