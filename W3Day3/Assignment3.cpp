/*We want to generate 1024 random integers, then given a new random number; find two integers which are the
closest to the given number (smaller, and bigger) with less than twelve lookups.*/
#include<iostream>
#include<vector>

void generate_numbers(std::vector<int>*);

int main(){
    std::vector<int> v;
    // store the ranom number in the vector
    generate_numbers(&v);

    //for printing.
    for(int i=0;i<v.size();i++){
        std::cout<< v[i]<<" ";
    }



}

void generate_numbers(std::vector<int>* v)
{
    for(int i=0;i<1024;i++){

        // random number generator
        int num = rand()%10000;
        (*v).push_back(num);

     }
}