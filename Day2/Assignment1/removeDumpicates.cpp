#include<iostream>

#define size 10
// Write a program that removes the repeated number of an input sorted array and return a new array without
// the repeated numbers. The function shall return error if the size of the input array is ZERO.
// arr1 = {1,2,3,3,3,4,4,5,5,5} arr2 = {1,2,3,4,5}
//Can Yang

int removeDumpicates(int[], int, int[], int * );
    void print_(int arry[], int);


int main(){
    int arr_old[size];
    int new_size;

    int arr_new[size];

    for(int i=0; i<size;i++){
        std::cout<<"type in a array: ";
        std::cin>> arr_old[i];
    }

    if (removeDumpicates(arr_old, size, arr_new, &new_size)){
        std::cout<<"error\n";
        return 1;
    }

    print_(arr_new, new_size);

}
int removeDumpicates(int arr_old[], int n_old, int arr_new[], int* n_new_ptr){
    if (n_old== 0){
        return 1;
    }

    *n_new_ptr = 1;
    arr_new[0]= arr_old[0];

    for(int i=1; i<n_old;i++){
        if(arr_old[i] != arr_old[i-1])
        {
            arr_new[*n_new_ptr]= arr_old[i];
            (*n_new_ptr)++;
        }
    }
    return 0;
}

void print_(int arry[], int sizeOfArray) {
  for (int i_in_arry=0; i_in_arry<sizeOfArray; ++i_in_arry)
    std::cout << "new array element"<< i_in_arry << " "<< arry[i_in_arry] << std::endl;
}