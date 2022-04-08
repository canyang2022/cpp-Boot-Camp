/*Generate random numbers between 0-33, ten thousand times, then print how many duplicates of each number
you have generated -- print in ascending order.*/

#include<iostream>
#include<stdlib.h>
#include<map>
#include<iterator>
int count=0;

int main(){



    std::map<int, int> duplicateCount;
    for(int i=0;i<10;i++){

        int num = rand()%3;
        //std::cout<< num << std::endl;

        //std::cout<< "attension"<<duplicateCount.count(num)<<'\n';

        if(duplicateCount.count(num)){
            count+=1;
            //std::cout<<"key    "<< num<<'\n';
            //std::cout<<"cout    "<< duplicateCount<<'\n';

        }else{
            count=0;
        }

        std::map<int, int>::iterator itr;
        for (itr=duplicateCount.begin(); itr!=duplicateCount.end();++itr){
        std::cout<< itr->first << "   "<< itr->second<< '\n';
        if(duplicateCount.count(num)){
            count += itr->second;
            std::cout <<"new count"<< count<<'\n';
        }

    }
        std::cout<< "aftercondition"<<count<<'\n';

        duplicateCount.insert(std::pair<int, int>(num, count));
        std::cout<< "aftercondition2 "<<count<<'\n';


    }
    std::cout<< "print----------------------------------------\n";
    std::map<int, int>::iterator itr;
    for (itr=duplicateCount.begin(); itr!=duplicateCount.end();++itr){
        std::cout<< itr->first << "   "<< itr->second<< '\n';

    }

}
