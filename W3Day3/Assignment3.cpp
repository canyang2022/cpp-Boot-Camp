/*We want to generate 1024 random integers, then given a new random number; find two integers which are the
closest to the given number (smaller, and bigger) with less than twelve lookups.*/
#include<iostream>
#include<vector>
#include<algorithm>

void generate_numbers(std::vector<int>*);
void search_number(std::vector<int>*, int);

int main(){
    std::vector<int> v;
    // the number needs to find the place
    int number;
    std::cout<<"type a random number: \n";
    std::cin>> number;

    // store the ranom number in the vector
    generate_numbers(&v);

    //for printing.
    for(int i=0;i<v.size();i++){
        std::cout<< v[i]<<"\n";
    }
    search_number(&v, number);

}

void generate_numbers(std::vector<int>* v)
{
    for(int i=0;i<100;i++){

        // random number generator
        int num = rand()%1000;
        (*v).push_back(num);
        std::sort((*v).begin(),(*v).end());

     }
}

void search_number(std::vector<int>* v, int number){

   std::vector<int>::iterator upper, lower;
   (*v).erase(upper, lower);
   upper=std::upper_bound((*v).begin(),(*v).end(),number);
   lower=std::lower_bound((*v).begin(),(*v).end(),number);
    //(*v).erase(upper, lower);


   std::cout<<"The upper bound is: "<<upper[0]<<'\n';
   std::cout<<"The lower bound is: "<<lower[0]<<'\n';

}