#include<iostream>
#include "menyDisplay.hpp"

void inputErrorHandling(unsigned int* userChoice){

        std::cout << "Sorry, invalid input, run again"<<std::endl;
        *userChoice=5;
}
