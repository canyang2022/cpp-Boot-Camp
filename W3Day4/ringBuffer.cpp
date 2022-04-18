/* Implement a ring buffer –you don’t need to check whether a cell is in used*/
#include<iostream>

#define size 10

void ringBuffer(int*, int*);
int main(){
    int write = 0;
    int read = 0;
    ringBuffer(&write, &read);
}

// function for reading buffer
void read_buffer(int* buffer, int* read){
    for(*read=0;(*read)<size; (*read)++){
        std::cout<<buffer[*read]<<'\n';
    }

}

void ringBuffer(int* write, int* read){
    int buffer[size];

    for(*write=0;(*write)<=size;++(*write)){
        // create a buffer that store the current index
        buffer[*write]= *write;

        // link the last position to the first position
        if(*write==size){
            *write=0;
        }
        //read the buffer with FIFO
        read_buffer(buffer, read);
    }
}

