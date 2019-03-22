#include "./header/counter.h"

Counter::Counter() {
    for(int count =0; count < 255; count ++ ){
        A[count] = 0;
    }
}
void Counter::increment(int i){
    A[i] = A[i] + 1;
}

void Counter::display() {
    for(int count = 0; count <= 255; count ++){
        printf("A[%d]=%d\n",count,A[count]);
    }
}