#include<iostream>
class Counter {
    private:
        int A[256];
    public:
        Counter();
        void increment(int i);
        void display();
};