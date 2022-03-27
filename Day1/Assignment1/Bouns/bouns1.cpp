//  Write a Function that calculate the Fibonacci series using recursive method. The Fibonacci Series :
// 0,1,1,2,3,5,8,13,21,...
#include<iostream>

#define size 40

void fibonacciSeries(unsigned int a, unsigned int b, int array[]);
void print_(int arry[], int sizeOfArray);

int main(){
    int array[size];
    int a=0;
    int b=1;

    fibonacciSeries(a, b,array);
    print_(array, size);

}

void fibonacciSeries(unsigned int a, unsigned int b, int array[]){

    int *array_ptr;
    ;
    array[0]=a;
    array[1]=b;

    for(*array_ptr = 2;*array_ptr < size;(*array_ptr)++){
        array[*array_ptr] = array[(*array_ptr) -1] + array[(*array_ptr)-2];
    }
}

void print_(int arry[], int sizeOfArray) {
  for (int i_in_arry=0; i_in_arry<sizeOfArray; ++i_in_arry)
    std::cout << "Fibonacci Series is: "<< arry[i_in_arry] << std::endl;
}