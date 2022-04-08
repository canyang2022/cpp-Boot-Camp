/*Generate random numbers between 0-33, ten thousand times, then print how many duplicates of each number
you have generated -- print in ascending order.*/

#include<iostream>
#include<stdlib.h>
#include<map>
#include<iterator>
int count=0;

void print(std::map<int, int>::iterator);

int main(){

    std::map<int, int> duplicateCount;
    for(int i=0;i<10000;i++){

        // random number generator
        int num = rand()%34;

        // create a map with pointers
        std::map<int, int>::iterator itr;
        for (itr=duplicateCount.begin(); itr!=duplicateCount.end();++itr){
            //std::cout<< itr->first << "   "<< itr->second<< '\n';

            // If the number in the current iteration is found in the prvious stroage,
            // increae the count for this number itself.
            if(duplicateCount.find(itr->first)!=duplicateCount.end()){
                itr->second += 1;
            }

    }
        duplicateCount.insert(std::pair<int, int>(num, count));
    }
   // print the final result.
    std::cout << "\tNumber\tDumplicated_Times\n";
    for(std::map<int, int>::iterator itr=duplicateCount.begin(); itr!=duplicateCount.end();++itr){
        std::cout<< '\t'<<itr->first << "\t"<< itr->second<< '\n';
    }

}


